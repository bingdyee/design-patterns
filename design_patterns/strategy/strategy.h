/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

 策略模式

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_STRATEGY_H_
#define DESIGN_PATTERNS_TEMPLATE_METHOD_H_

namespace designs {

class Strategy {
public:
	virtual ~Strategy() {}

	virtual void Execution() = 0;
};

class StrategyA : public Strategy {
public:
	virtual void Execution();
};

class StrategyB : public Strategy {
public:
	virtual void Execution();
};

class Context {
public:
	Context(Strategy * strategy);

	~Context();

	void ExecutinonStrategy();

private:
	Strategy * strategy;



};


}

#endif