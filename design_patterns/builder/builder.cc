/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

构建器

@Author: fetaxyu
@Date: 2018-11-01
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/builder/builder.h"

namespace designs {

void Product::partA() {
	std::cout << "Product partA" << std::endl;
}

void Product::partB() {
	std::cout << "Product partB" << std::endl;
}

Product * Builder::GetResult() {
	std::cout << "Product build finished!" << std::endl;
	return this->product;
}

void ProductBuilder::buildPartA() {
	this->product = new Product();
	std::cout << "build product's part A..." << std::endl;
}

void ProductBuilder::buildPartB() {
	std::cout << "build product's part B..." << std::endl;
}

Director::Director(Builder * builder): builder(builder) { }

Product * Director::Construct() {
	this->builder->buildPartA();
	this->builder->buildPartA();
	return this->builder->GetResult();
}

}