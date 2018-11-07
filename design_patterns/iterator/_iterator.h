/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

迭代器

@Author: fetaxyu
@Date: 2018-11-07
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_ITERATOR_H_
#define DESIGN_PATTERNS_ITERATOR_H_

namespace designs {

template<typename T>
class Iterator {
public:
	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool done() const= 0;
	virtual T& current() = 0;
};

}

#endif
