/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

构建器（分步构建一个复杂的对象）

@Author: fetaxyu
@Date: 2018-11-01
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_BUILDERE_H_
#define DESIGN_PATTERNS_BUILDERE_H_

namespace designs {

class Product {
public:
	Product() {}
	~Product() {}

	void partA();
	void partB();

};

class Builder {
public:
	virtual ~Builder() {}
	virtual Product* GetResult();

	virtual void buildPartA() = 0;
	virtual void buildPartB() = 0;

protected:
	Product* product;

};

class ProductBuilder : public Builder {
public:
	virtual void buildPartA();
	virtual void buildPartB();

};

class Director {
public:
	Director(Builder* builder);
	Product* Construct();

private:
	Builder* builder;
};

}

#endif