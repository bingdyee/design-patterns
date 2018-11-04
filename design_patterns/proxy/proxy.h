/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

代理模式

@Author: fetaxyu
@Date: 2018-11-04
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_PROXY_H_
#define DESIGN_PATTERNS_PROXY_H_

namespace designs {

class Subject {
public:
	virtual ~Subject() {}
	virtual void doSomething() = 0;
};

class RealSubject : public Subject {
public:
	virtual void doSomething();

};

class ProxySubject : public Subject {
public:
	ProxySubject(Subject* subject) : subject(subject) {}
	virtual void doSomething();

private:
	Subject * subject;
};

}

#endif