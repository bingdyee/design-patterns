/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

职责链

@Author: fetaxyu
@Date: 2018-11-07
Email: fetaxyu@gmail.com
===============================================================*/
#include <random>
#include <time.h>
#include <iostream>

#include "design_patterns/chain/chain_of_resposibility.h"

namespace designs {



void Handler::handler(int&& n) {
	if (next) {
		next->process(std::move(n));
	}
}


void Handler::setNextHandler(Handler * n) {
	next = n;
}

void HandlerA::process(int&& n) {
	if (rand() % n == 0) {
		std::cout << "A process" << std::endl;
	} else if(next) {
		handler(std::move(n));
	}
	
}

void HandlerB::process(int&& n) {
	if (rand() % n == 0) {
		std::cout << "B process" << std::endl;
	}
	else if (next) {
		handler(std::move(n));
	}
}

void HandlerC::process(int&& n) {
	if (rand() % n == 0) {
		std::cout << "C process" << std::endl;
	}
	else if (next) {
		handler(std::move(n));
	}
}

void HandlerTest() {
	srand((int)time(0));

	HandlerA a;
	HandlerB b;
	HandlerC c;
	a.setNextHandler(&b);
	b.setNextHandler(&c);

	a.process(2);
	a.process(3);
}

}