/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

 模板方法

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>


#include "design_patterns/template_method/template_m.h"


namespace designs {

void System::Run() {
	this->StartUp();
	this->Exec();
	this->ShutDown();
}

void System::StartUp() {
	std::cout << "Systme StartUp..." << std::endl;
}

void System::ShutDown() {
	std::cout << "Systme ShutDown..." << std::endl;
}

void Window::Exec() {
	std::cout << "Window System Exec..." << std::endl;
}

}
