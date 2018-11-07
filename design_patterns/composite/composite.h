/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

组合模式

@Author: fetaxyu
@Date: 2018-11-07
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_COMPOSITE_H_
#define DESIGN_PATTERNS_COMPOSITE_H_

#include <string>
#include <list>


namespace designs {

class Component {
public:
	virtual ~Component() {}
	virtual void process() = 0;
};

class Composite : public Component {
public:
	Composite(const std::string&);
	void add(Component*);
	void remove(Component*);

	virtual void process();
private:
	std::string name;
	std::list<Component*> elements;
};

class Leaf : public Component {
public:
	Leaf(const std::string&);
	virtual void process();

private:
	std::string name;

};

void CompositeTest();


}

#endif 