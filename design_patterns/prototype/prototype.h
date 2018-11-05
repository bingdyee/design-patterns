/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

原型模式（深拷贝）

@Author: fetaxyu
@Date: 2018-11-01
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_PROTOTYPE_H_
#define DESIGN_PATTERNS_PROTOTYPE_H_

namespace designs {

class Prototype {
public:
	Prototype() {}
	virtual ~Prototype() {}
	virtual Prototype* clone() const = 0;
	virtual void print() = 0;
};

class ConcretePrototypeA : public Prototype {
public:
	ConcretePrototypeA() {};
	ConcretePrototypeA(const ConcretePrototypeA&);
	virtual Prototype* clone() const;
	virtual void print();
};

class ConcretePrototypeB : public Prototype {
public:
	ConcretePrototypeB() {};
	ConcretePrototypeB(const ConcretePrototypeB&);
	virtual Prototype* clone() const;
	virtual void print();
};

}


#endif