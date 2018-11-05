/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

享元模式

@Author: fetaxyu
@Date: 2018-11-03
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_FLYWEIGHT_H_
#define DESIGN_PATTERNS_FLYWEIGHT_H_

#include <map>
#include <string>


namespace designs {

class FlyWeight {
public:
	FlyWeight(const std::string&);
	std::string& GetName();

private:
	std::string name;
};

class FlyWeightFactory {
public:
	FlyWeight * GetFlyWeight(const std::string&);

private:
	std::map<std::string, FlyWeight*> objectPool;

};

}

#endif