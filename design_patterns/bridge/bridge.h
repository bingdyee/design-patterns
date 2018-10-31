/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

ге╫сдёй╫

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_BRIDGE_H_
#define DESIGN_PATTERNS_BRIDGE_H_

namespace designs {



class Implementor {
public:
	virtual ~Implementor() {}
	virtual void OperationImpl() = 0;
};

class Abstraction {
protected:
	Implementor * implementor;

public:
	Abstraction(Implementor * imp) : implementor(imp){}
	virtual ~Abstraction() {}
	virtual void Operation() = 0;
};

class ImplementorA : public Implementor {
public:
	virtual void OperationImpl();
};

class ImplementorB : public Implementor {
public:
	virtual void OperationImpl();
};

class RefinedAbstraction : public Abstraction {
public:
	RefinedAbstraction(Implementor * imp) : Abstraction(imp) {}
	virtual void Operation();
};

}

#endif // !DESIGN_PATTERNS_BRIDGE_H_

