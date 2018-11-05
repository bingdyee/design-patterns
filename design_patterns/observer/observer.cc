/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

 观察者模式

@Author: fetaxyu
@Date: 2018-10-30
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/observer/observer.h"

namespace designs {

void WeChatServer::registe(Observer * o) {
	observerList.push_back(o);
	std::cout << "registe..." << std::endl;

}

void WeChatServer::remove(Observer * o) {
	observerList.remove(o);
	std::cout << "remove..." << std::endl;
}

void WeChatServer::notify() {
	std::list<Observer*>::iterator iter = observerList.begin();
	while (iter != observerList.end()) {
		(*iter)->Update("Notify...");
		++iter;
	}
}

User::User(std::string name) : name(name){ }

void User::Update(std::string message) {
	std::cout << "User update..." << std::endl;
}
}