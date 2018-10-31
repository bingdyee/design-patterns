/* Copyleft 2018 The design-patterns Authors. All Rights Reserved.

 装饰模式

@Author: fetaxyu
@Date: 2018-10-30
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/decorator/decorator.h"


namespace designs {

char FileStream::read(int size) {
	std::cout << "FileStream.read..." << std::endl;
	return 0;
}

void FileStream::write(char data) {
	std::cout << "FileStream.write..." << std::endl;
}

void FileStream::seek(int position) {
	std::cout << "FileStream.seek..." << std::endl;
}

char MemoryStream::read(int size) {
	std::cout << "MemoryStream.read..." << std::endl;
	return 0;
}

void MemoryStream::write(char data) {
	std::cout << "MemoryStream.write..." << std::endl;
}

void MemoryStream::seek(int position) {
	std::cout << "MemoryStream.seek..." << std::endl;
}

/********************/

char CryptoStream::read(int size) {
	std::cout << "Crypto opration..." << std::endl;
	stream->read(size);
	return 0;
}

void CryptoStream::write(char data) {
	std::cout << "Crypto opration..." << std::endl;
	stream->write(data);
}

void CryptoStream::seek(int position) {
	std::cout << "Crypto opration..." << std::endl;
	stream->seek(position);
}

char BufferedStream::read(int size) {
	std::cout << "Buffered opration..." << std::endl;
	stream->read(size);
	return 0;
}

void BufferedStream::write(char data) {
	std::cout << "Buffered opration..." << std::endl;
	stream->write(data);
}

void BufferedStream::seek(int position) {
	std::cout << "Buffered opration..." << std::endl;
	stream->seek(position);
}

}