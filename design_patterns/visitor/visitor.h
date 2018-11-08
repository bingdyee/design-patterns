/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

访问者

@Author: fetaxyu
@Date: 2018-11-08
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_VISITOR_H_
#define DESIGN_PATTERNS_VISITOR_H_

namespace designs {

class Visitor; 

class Element {
public:
	virtual ~Element() {}
	virtual void Accept(Visitor*) = 0;
};

class ConcreteElementA: public Element{
public:
	virtual void Accept(Visitor*);
	void OperationA();
};

class ConcreteElementB : public Element {
public:
	virtual void Accept(Visitor*);
	void OperationB();
};

class Visitor {
public:
	virtual ~Visitor() {}
	virtual void VisitConcreteElementA(ConcreteElementA&) = 0;
	virtual void VisitConcreteElementB(ConcreteElementB&) = 0;
};

class ConcreteVistorA : public Visitor {
public:
	virtual void VisitConcreteElementA(ConcreteElementA&);
	virtual void VisitConcreteElementB(ConcreteElementB&);
};

class ConcreteVistorB : public Visitor {
public:
	virtual void VisitConcreteElementA(ConcreteElementA&);
	virtual void VisitConcreteElementB(ConcreteElementB&);
};


void VisitorTest();

}

#endif

