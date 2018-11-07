/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

命令模式

@Author: fetaxyu
@Date: 2018-11-07
Email: fetaxyu@gmail.com
===============================================================*/

#include <iostream>

#include "design_patterns/command/command.h"

namespace designs {

void ReceiverA::Action() {
	std::cout << "A Action " << std::endl;
}

void ReceiverB::Action() {
	std::cout << "B Action " << std::endl;
}

void ContreteCommandA::execute() {
	std::cout << "A execute " << std::endl;
	receiver->Action();
}

void ContreteCommandB::execute() {
	std::cout << "B execute " << std::endl;
	receiver->Action();
}



void CommandTest() {
	ReceiverA ra;
	ReceiverB rb;
	ContreteCommandA a(&ra);
	ContreteCommandB b(&rb);
	a.execute();
	b.execute();

}

}