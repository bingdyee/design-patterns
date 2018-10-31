/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

 简单工厂方法

@Author: fetaxyu
@Date: 2018-10-31
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_FACTORY_H_
#define DESIGN_PATTERNS_FACTORY_H_

namespace designs {

class Car {
public:
	virtual ~Car() {}
};

class Factory {
public:
	virtual ~Factory() {}
	virtual Car* newInstance() = 0;
};



class Ford : public Car {
public:
	Ford();
};

class Audi : public Car {
public:
	Audi();
};

class FordFactory : public Factory {
public:
	virtual Car* newInstance();
};

class AudiFactory : public Factory {
public:
	virtual Car* newInstance();
};


}


#endif