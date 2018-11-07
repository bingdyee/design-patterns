/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

职责链

@Author: fetaxyu
@Date: 2018-11-07
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_CHAIN_OF_RESPOSIBILITY_H_
#define DESIGN_PATTERNS_CHAIN_OF_RESPOSIBILITY_H_

namespace designs {

class Handler {
protected:
	void handler(int&&);

public:
	void setNextHandler(Handler*);
	virtual void process(int&&) = 0;
	virtual ~Handler() {}

protected:
	Handler * next;
};

class HandlerA : public Handler {
public:
	void process(int&&);
};

class HandlerB : public Handler {
public:
	void process(int&&);

};

class HandlerC : public Handler {
public:
	void process(int&&);
};

void HandlerTest();

}

#endif