/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

备忘录

@Author: fetaxyu
@Date: 2018-11-06
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/memento/memento.h"

namespace designs {

void Originator::setState(const std::string & x) {
	this->state = x;
	std::cout << "Current State is " << this->state << std::endl;
}

Memento Originator::createMemento() {
	return Memento(this->state);
}

void Originator::restoreMemento(Memento men) {
	this->setState(men.getState());
}

void MementoTest() {
	Originator* originator = new Originator();
	originator->setState("A");
	Memento men = originator->createMemento();
	originator->setState("B");
	originator->restoreMemento(men);
}

}