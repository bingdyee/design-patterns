/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

观察者模式

@Author: fetaxyu
@Date: 2018-10-30
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_OBSERVER_H_
#define DESIGN_PATTERNS_OBSERVER_H_

#include <string>
#include <list>


namespace designs {

class Observer {
public:
	virtual ~Observer() {}
	virtual void Update(std::string message) = 0;
};

class Observerable {
public:
	virtual ~Observerable() {}
	virtual void registe(Observer* o) = 0;
	virtual void remove(Observer* o) = 0;
	virtual void notify() = 0;
};

class WeChatServer : public Observerable {

public:
	WeChatServer() {}
	virtual void registe(Observer* o);
	virtual void remove(Observer* o);
	virtual void notify();

private:
	std::list<Observer*> observerList;

};

class User : public Observer {

	

public:
	std::string name;

	User(std::string name);
	virtual void Update(std::string message);
};

}

#endif // !DESIGN_PATTERNS_OBSERVER_H_
