/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

原型模式

@Author: fetaxyu
@Date: 2018-11-01
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/prototype/prototype.h"

namespace designs {

ConcretePrototypeA::ConcretePrototypeA(const ConcretePrototypeA &) {
	std::cout << "ConcretePrototypeA copy..." << std::endl;
}

Prototype * designs::ConcretePrototypeA::clone() const {
	std::cout << "ConcretePrototypeA clone..." << std::endl;
	return new ConcretePrototypeA(*this);
}

void designs::ConcretePrototypeA::print() {
	std::cout << "ConcretePrototypeA print()..." << std::endl;
}


ConcretePrototypeB::ConcretePrototypeB(const ConcretePrototypeB &) {
	std::cout << "ConcretePrototypeB copy..." << std::endl;
}

Prototype * designs::ConcretePrototypeB::clone() const {
	std::cout << "ConcretePrototypeB clone..." << std::endl;
	return new ConcretePrototypeB(*this);
}

void designs::ConcretePrototypeB::print() {
	std::cout << "ConcretePrototypeB print()..." << std::endl;
}

}




