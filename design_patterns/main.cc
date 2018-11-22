/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/algorithms/algorithm.h"

using namespace solution;


int main(int argc, char* argv[]) {
	std::vector<int> array = {1, 3, 4, 6, 2, 7, 8, 9};

	ReOrderArray(array);

	for (int i : array) {
		std::cout << i << ",";
	}

	getchar();

}
