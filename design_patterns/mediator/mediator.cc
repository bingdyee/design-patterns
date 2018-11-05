/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

中介者模式

@Author: fetaxyu
@Date: 2018-11-05
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/mediator/mediator.h"

namespace designs {

void ColleagueA::SendMessage() {
	std::cout << "ColleagueA send..." << std::endl;
	mediator->send(this);
}

void ColleagueA::RecvMessage() {
	std::cout << "ColleagueA recv..." << std::endl;
}

void ColleagueB::SendMessage() {
	std::cout << "ColleagueB send..." << std::endl;
	mediator->send(this);
}

void ColleagueB::RecvMessage() {
	std::cout << "ColleagueB recv..." << std::endl;
}

void ColleagueMediator::SetColleagueA(Colleague * a) {
	this->a = a;
}

void ColleagueMediator::SetColleagueB(Colleague * b) {
	this->b = b;
}

void ColleagueMediator::send(Colleague * c) {
	if (c == a) {
		b->RecvMessage();
	} 
	if (c == b) {
		a->RecvMessage();
	}
}

void MediatorTest() {
	ColleagueMediator mediator;
	ColleagueA a(&mediator);
	ColleagueB b(&mediator);
	mediator.SetColleagueA(&a);
	mediator.SetColleagueB(&b);

	a.SendMessage();
	
}

}