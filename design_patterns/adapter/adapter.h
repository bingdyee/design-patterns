/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

适配器
	遗留代码复用、类库迁移等

@Author: fetaxyu
@Date: 2018-11-05
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_ADAPTER_H_
#define DESIGN_PATTERNS_ADAPTER_H_

namespace designs {

class Target {
public:
	virtual ~Target() {}
	virtual void process() = 0;
};

class Adaptee {
public:
	virtual ~Adaptee() {}
	virtual void fun(int data) = 0;
	virtual int data() = 0;
};

class Adapter : public Target {
protected:
	Adaptee * adaptee;

public:
	Adapter(Adaptee* adaptee);
	virtual void process();
};

class FormerClass : public Adaptee {
public:
	virtual void fun(int data);
	virtual int data();
};

void AdapterTest();

}

#endif
