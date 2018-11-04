/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

代理模式
（copy-on-write实现对单个对象的细粒度的控制）

@Author: fetaxyu
@Date: 2018-11-04
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/proxy/proxy.h"

namespace designs {



void RealSubject::doSomething() {
	std::cout << "Real Subject doSomething..." << std::endl;
}

void ProxySubject::doSomething() {
	std::cout << "Real Subject Before..." << std::endl;
	subject->doSomething();
	std::cout << "Real Subject After..." << std::endl;
}

}
