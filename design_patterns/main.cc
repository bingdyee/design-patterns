/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/builder/builder.h"

using namespace designs;

int main(int argc, char* argv[]) {
	Director d(new ProductBuilder());
	d.Construct();
	getchar();

}
