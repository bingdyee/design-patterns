/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

 装饰模式

@Author: fetaxyu
@Date: 2018-10-30
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_DECORATOR_H_
#define DESIGN_PATTERNS_DECORATOR_H_

namespace designs {

class Stream {
public:
	virtual ~Stream() {}
	virtual char read(int size) = 0;
	virtual void write(char data) = 0;
	virtual void seek(int position) = 0;
};

class FileStream : public Stream {
public:
	virtual char read(int size);
	virtual void write(char data);
	virtual void seek(int position);
};

class MemoryStream : public Stream {
public:
	virtual char read(int size);
	virtual void write(char data);
	virtual void seek(int position);
};

/********************/

class DecoratorStream : public Stream {
public:
	DecoratorStream(Stream* stream) : stream(stream) {}

protected:
	Stream * stream;
};

class CryptoStream : public DecoratorStream {
public:
	CryptoStream(Stream* stream) : DecoratorStream(stream) {}
	virtual char read(int size);
	virtual void write(char data);
	virtual void seek(int position);

};

class BufferedStream : public DecoratorStream {
public:
	BufferedStream(Stream* stream) : DecoratorStream(stream) {}
	virtual char read(int size);
	virtual void write(char data);
	virtual void seek(int position);

};

}

#endif