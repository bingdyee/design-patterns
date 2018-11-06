/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

备忘录

@Author: fetaxyu
@Date: 2018-11-06
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_MEMENTO_H_
#define DESIGN_PATTERNS_MEMENTO_H_
#include <string>


namespace designs {

class Memento {
public:
	Memento(const std::string& state) : state(state) {}

	void setState(const std::string& state) { this->state = state; }
	std::string getState() { return this->state; }

public:
	std::string state;

};

class Originator {
public:
	std::string getState() { return this->state; }
	void setState(const std::string &x);

	Memento createMemento();

	void restoreMemento(Memento men);

private:
	std::string state;
};

void MementoTest();

}

#endif
