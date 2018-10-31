/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/bridge/bridge.h"

using namespace designs;

int main(int argc, char* argv[]) {
	Implementor* impl = new ImplementorA();
	Abstraction* abs = new RefinedAbstraction(impl);
	abs->Operation();

	Implementor* imp = new ImplementorB();
	Abstraction* abs1 = new RefinedAbstraction(imp);
	abs1->Operation();

	getchar();

}
