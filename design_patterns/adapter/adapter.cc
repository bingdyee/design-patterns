/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

适配器

@Author: fetaxyu
@Date: 2018-11-05
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/adapter/adapter.h"

namespace designs {

Adapter::Adapter(Adaptee * adaptee) : adaptee(adaptee) { }

void Adapter::process() {
	std::cout << "Adapter process before..." << std::endl;
	int data = adaptee->data();
	adaptee->fun(data);
	std::cout << "Adapter process after..." << std::endl;
}

void FormerClass::fun(int data) {
	std::cout << "FormerClass fun..." << std::endl;
}

int FormerClass::data() {
	std::cout << "FormerClass data..." << std::endl;
	return 0;
}

void AdapterTest() {
	FormerClass former;
	Adapter adapter(&former);
	adapter.process();
}

}