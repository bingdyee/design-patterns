/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

 桥接模式

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/bridge/bridge.h"

namespace designs {

void ImplementorA::OperationImpl() {
	std::cout << "A operation implement..." << std::endl;
}

void ImplementorB::OperationImpl() {
	std::cout << "B operation implement..." << std::endl;
}

void RefinedAbstraction::Operation() {
	std::cout << "RefinedAbstraction operation..." << std::endl;
	implementor->OperationImpl();
}

}