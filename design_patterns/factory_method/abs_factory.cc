/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

 抽象工厂方法

@Author: fetaxyu
@Date: 2018-10-31
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/factory_method/abs_factory.h"

namespace designs {

IDBDriver * MySQLFactory::CreateDriver() {
	std::cout << "Create MySQL Driver..." << std::endl;
	return new MySQLDriver();
}
IDBConnection * MySQLFactory::CreateConnection() {
	std::cout << "Create MySQL Connection..." << std::endl;
	return new MySQLConnection();
}

IDBDriver * OracleFactory::CreateDriver() {
	std::cout << "Create Oracle Driver..." << std::endl;
	return new OracleDriver();
}
IDBConnection * OracleFactory::CreateConnection() {
	std::cout << "Create Oracle Connection..." << std::endl;
	return new OracleConnection();
}


}
