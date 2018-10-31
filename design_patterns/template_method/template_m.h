/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

ģ�巽��

@Author: fetaxyu
@Date: 2018-10-29
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_TEMPLATE_METHOD_H_
#define DESIGN_PATTERNS_TEMPLATE_METHOD_H_

namespace designs {

class System {
public:
	virtual ~System() {}
	void Run();

protected:

	void StartUp();

	void ShutDown();

	/*ģ�巽��*/
	virtual void Exec() {};
};


class Window : public System {

	virtual void Exec();

};

}


#endif
