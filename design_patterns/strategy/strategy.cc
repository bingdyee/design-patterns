/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

 策略模式

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/strategy/strategy.h"


namespace designs {

void StrategyA::Execution() {
	std::cout << "Exec A strategy..." << std::endl;
}

void StrategyB::Execution() {
	std::cout << "Exec B strategy..." << std::endl;
}

Context::Context(Strategy* strategy) : strategy(strategy) { }

Context::~Context() {
	delete this->strategy;
}

void Context::ExecutinonStrategy() {
	this->strategy->Execution();
}

}