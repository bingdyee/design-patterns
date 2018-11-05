/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

 简单工厂方法

@Author: fetaxyu
@Date: 2018-10-31
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/factory_method/factory.h"

namespace designs {

Ford::Ford() {
	std::cout << "Create Ford Car..." << std::endl;
}

Audi::Audi() {
	std::cout << "Create Audi Car..." << std::endl;
}

Car* FordFactory::newInstance() {
	return new Ford();
}

Car* AudiFactory::newInstance() {
	return new Audi();
}
	

}