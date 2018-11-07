/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

命令模式

@Author: fetaxyu
@Date: 2018-11-07
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_COMMAND_H_
#define DESIGN_PATTERNS_COMMAND_H_

#include <string>

namespace designs {

class Receiver {
public:
	virtual ~Receiver() {  }
	virtual void Action() = 0;
};

class ReceiverA : public Receiver {
public:
	void Action();
};

class ReceiverB : public Receiver {
public:
	void Action();
};

class Command {
public:
	Command(Receiver* r) : receiver(r) {}
	virtual void execute() = 0;
	virtual ~Command() {}

protected:
	Receiver * receiver;
};

class ContreteCommandA : public Command {
public:
	ContreteCommandA(Receiver* r) : Command(r) {}
	void execute();

};

class ContreteCommandB : public Command {
public:
	ContreteCommandB(Receiver* r) : Command(r) {}
	void execute();

};

void CommandTest();


}

#endif
