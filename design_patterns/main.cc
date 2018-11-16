/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/algorithms/algorithm.h"

using namespace solution;

int main(int argc, char* argv[]) {
	CStack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	std::cout << s.pop() << std::endl;
	std::cout << s.pop() << std::endl;
	std::cout << s.pop() << std::endl;
	std::cout << s.pop() << std::endl;
	std::cout << s.pop() << std::endl;
	getchar();

}
