/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

组合模式

@Author: fetaxyu
@Date: 2018-11-07
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/composite/composite.h"

namespace designs {
	Composite::Composite(const std::string & name) : name(name) {}
	void Composite::add(Component * element) {
	elements.push_back(element);
}

void Composite::remove(Component * element) {
	elements.remove(element);
}

void Composite::process() {
	for (auto &e : elements) {
		e->process();
	}
}


Leaf::Leaf(const std::string & name) : name(name) {}

void Leaf::process() {
	std::cout << name << ": Leaf process" << std::endl;
}

void CompositeTest() {
	Composite root("root");
	Composite node("node");
	Leaf leaf("leaf");

	root.add(&node);
	node.add(&leaf);

	root.process();


}

}