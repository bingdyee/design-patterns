/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

享元模式

@Author: fetaxyu
@Date: 2018-11-03
Email: fetaxyu@gmail.com
===============================================================*/

#include "design_patterns/flyweight/flyweight.h"


namespace designs {


FlyWeight::FlyWeight(const std::string & name) : name(name){ }

std::string & FlyWeight::GetName() {
	return this->name;
}

FlyWeight * FlyWeightFactory::GetFlyWeight(const std::string & key) {
	std::map<std::string, FlyWeight*>::iterator iter = objectPool.find(key);
	if (iter != objectPool.end()) {
		return objectPool[key];
	} else {
		FlyWeight* fw = new FlyWeight(key);
		objectPool[key] = fw;
		return fw;
	}
	return nullptr;
}

}