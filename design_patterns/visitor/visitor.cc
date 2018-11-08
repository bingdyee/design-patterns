/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

访问者

@Author: fetaxyu
@Date: 2018-11-08
Email: fetaxyu@gmail.com
===============================================================*/

#include <iostream>

#include "design_patterns/visitor/visitor.h"

namespace designs {

void ConcreteElementA::Accept(Visitor * v) {
	v->VisitConcreteElementA(*this);
}

void ConcreteElementA::OperationA() {
	std::cout << "Element A Operation..." << std::endl;
}

void ConcreteElementB::Accept(Visitor * v) {
	v->VisitConcreteElementB(*this);
}

void ConcreteElementB::OperationB() {
	std::cout << "Element B Operation..." << std::endl;
}

void ConcreteVistorA::VisitConcreteElementA(ConcreteElementA & a) {
	a.OperationA();
}

void ConcreteVistorA::VisitConcreteElementB(ConcreteElementB & b) {
	b.OperationB();
}

void ConcreteVistorB::VisitConcreteElementA(ConcreteElementA & a) {
	a.OperationA();
}

void ConcreteVistorB::VisitConcreteElementB(ConcreteElementB & b) {
	b.OperationB();
}

void VisitorTest() {
	ConcreteVistorA visitor;

	ConcreteElementA elementA;
	ConcreteElementB elementB;

	visitor.VisitConcreteElementA(elementA);

	visitor.VisitConcreteElementB(elementB);
}

}