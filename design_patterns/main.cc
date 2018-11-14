/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/algorithms/algorithm.h"

using namespace solution;

int main(int argc, char* argv[]) {
	ListNode node1(67);
	ListNode node2(0);
	ListNode node3(24);
	ListNode node4(58);
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	PrintListFromTailToHead(&node1);

	getchar();

}
