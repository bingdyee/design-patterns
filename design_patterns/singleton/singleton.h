/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

单例模式

@Author: fetaxyu
@Date: 2018-11-03
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_SINGLETON_H_
#define DESIGN_PATTERNS_SINGLETON_H_

#include <atomic>
#include <mutex>

namespace designs {

class Singleton {
private:
	Singleton() {}
	Singleton(const Singleton&) = delete;
	Singleton& operator= (const Singleton&) = delete;

public:
	static Singleton* GetInstance();
	static Singleton* DoubleCheck();
	static Singleton* Sync();

	static Singleton* m_instance;
	static std::mutex m_mt;

	static std::atomic<Singleton*> instance;
};



}

#endif