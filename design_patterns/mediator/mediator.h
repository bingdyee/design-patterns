/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

中介者模式
 解决双向依赖

@Author: fetaxyu
@Date: 2018-11-05
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_MEDIATOR_H_
#define DESIGN_PATTERNS_MEDIATOR_H_
#include <string>

namespace designs {

class Colleague;

class Mediator {
public:
	virtual ~Mediator() {}

	virtual void send(Colleague* c) = 0;
};

class Colleague {
protected:
	Mediator * mediator;

public:
	Colleague(Mediator* mediator) : mediator(mediator) {}
	virtual ~Colleague() {}

	virtual void SendMessage() = 0;
	virtual void RecvMessage() = 0;
};

class ColleagueA : public Colleague {
public:
	ColleagueA(Mediator* mediator) : Colleague(mediator) {}

	virtual void SendMessage();
	virtual void RecvMessage();
};

class ColleagueB : public Colleague {
public:
	ColleagueB(Mediator* mediator) : Colleague(mediator) {}

	virtual void SendMessage();
	virtual void RecvMessage();
};

class ColleagueMediator : public Mediator {
private:
	Colleague* a;
	Colleague* b;

public:
	void SetColleagueA(Colleague*);
	void SetColleagueB(Colleague*);

	virtual void send(Colleague* c);
};


void MediatorTest();

}
#endif