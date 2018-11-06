/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

状态模式

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_STATE_H_
#define DESIGN_PATTERNS_STATE_H_

namespace designs {

class State {
public:
	virtual void handle() = 0;
	virtual ~State() {}
};

class ConcreteStateA: public State{
public:
	virtual void handle();
};

class ConcreteStateB : public State {
public:
	virtual void handle();
};

class Content {
	State* state;

public:
	Content(State*);

	void request();

	void setState(State* state);
};

void StateTest();

}

#endif
