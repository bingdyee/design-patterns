/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

 抽象工厂方法: 创建一系列相互依赖的对象


@Author: fetaxyu
@Date: 2018-10-31
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_ABS_FACTORY_H_
#define DESIGN_PATTERNS_ABS_FACTORY_H_

namespace designs {

class IDBConnection {
public:
	virtual ~IDBConnection() {}
};

class IDBDriver {
public:
	virtual ~IDBDriver() {}

	virtual void SetConnection(IDBConnection* conn) = 0;

};

class MySQLDriver : public IDBDriver {
public:
	virtual void SetConnection(IDBConnection* conn) {}

};

class MySQLConnection : public IDBConnection {

};

class OracleDriver : public IDBDriver {
public:
	virtual void SetConnection(IDBConnection* conn) {}

};

class OracleConnection : public IDBConnection {

};

class IDBFactory {
public:
	virtual IDBDriver* CreateDriver() = 0;
	virtual IDBConnection* CreateContonnection() = 0;
};


class MySQLFactory : public IDBFactory {
public:
	virtual IDBDriver* CreateDriver();
	virtual IDBConnection* CreateConnection();
};

class OracleFactory : public IDBFactory {
public:
	virtual IDBDriver* CreateDriver();
	virtual IDBConnection* CreateConnection();
};

}

#endif
