/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

单例模式

@Author: fetaxyu
@Date: 2018-11-03
Email: fetaxyu@gmail.com
===============================================================*/


#include "design_patterns/singleton/singleton.h"

namespace designs {

Singleton*	Singleton::m_instance = nullptr;
std::mutex Singleton::m_mt;

// 非线程安全
Singleton* Singleton::GetInstance() {
	if (!m_instance) {
		m_instance = new Singleton();
	}
	return m_instance;
}

// 双检查锁，但由于内存读写reorder不安全
Singleton* Singleton::DoubleCheck() {
	if (!m_instance) {
		// lock
		std::lock_guard<std::mutex> lock(m_mt);
		if (!m_instance) {
			m_instance = new Singleton();
		}
	}
	return m_instance;
}

/*********************C++11 volatile 实现********************/

std::atomic<Singleton*> Singleton::instance;

Singleton* Singleton::Sync() {
	Singleton* tmp = instance.load(std::memory_order_relaxed);
	// 获取内存fence
	std::atomic_thread_fence(std::memory_order_acquire);
	if (tmp == nullptr) {
		std::lock_guard<std::mutex> lock(m_mt);
		tmp = instance.load(std::memory_order_relaxed);
		if (tmp == nullptr) {
			tmp = new Singleton;
			// 释放内存fence
			std::atomic_thread_fence(std::memory_order_release);
			instance.store(tmp, std::memory_order_relaxed);
		}
	}
	return tmp;
}


}