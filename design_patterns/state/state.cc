/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

״̬ģʽ

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/state/state.h"

namespace designs {

void ConcreteStateB::handle() {
	std::cout << "StateB" << std::endl;
}
void ConcreteStateA::handle() {
	std::cout << "StateA" << std::endl;
}

Content::Content(State * state) : state(state) { }

void Content::request() {
	state->handle();
}

void Content::setState(State * state) {
	this->state = state;
	std::cout << "ChangeState..." << std::endl;
}

void StateTest() {
	ConcreteStateA a;
	ConcreteStateB b;

	Content con(&a);
	con.request();

	con.setState(&b);
	con.request();

}

}