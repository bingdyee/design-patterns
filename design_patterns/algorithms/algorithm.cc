/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

@Author: fetaxyu
@Date: 2018-11-14
Email: fetaxyu@gmail.com
===============================================================*/
#include <iostream>

#include "design_patterns/algorithms/algorithm.h"


namespace solution {

bool Find(int target, std::vector<std::vector<int>> array) {
	bool found = false;
	int rows = array.size();
	int columns = array.at(0).size();
	int row = 0;
	int column = columns - 1;
	while (row < rows && column >= 0) {
		if (array[row][column] == target) {
			found = true;
			break;
		}
		if (array[row][column] > target) {
			--column;
		}
		else {
			++row;
		}
	}
	return found;
}

void ReplaceSpace(char * str, int length) {
	if (!str) {
		return;
	}
	int spaceCount = 0;
	for (int i = 0; i < length - 1; ++i) {
		if (str[i] == ' ') {
			++spaceCount;
		}
	}
	if (spaceCount > 0) {
		int newLength = length + spaceCount * 2;
		int newIndex = newLength;
		int oldIndex = length;
		while (oldIndex >= 0 && newIndex > oldIndex && spaceCount > 0) {
			if (str[oldIndex] == ' ') {
				str[newIndex--] = '0';
				str[newIndex--] = '2';
				str[newIndex--] = '%';
				--spaceCount;
			} else {
				str[newIndex--] = str[oldIndex];
			}
			--oldIndex;
		}

	}

	

	std::cout << str << std::endl;
}

std::vector<int> PrintListFromTailToHead(ListNode * head) {
	std::vector<int> rs;
	if (head) {
		while (head->next) {
			rs.push_back(head->val);
			head = head->next;
		}
		rs.push_back(head->val);
	}
	std::reverse(rs.begin(), rs.end());
	return  rs;
}

TreeNode* ReConstructBinaryTree(std::vector<int> pre, std::vector<int> vin) {
	if (pre.empty() || vin.empty()) { return NULL; }
	int rootValue = pre.at(0);
	int index = 0;
	for (int e : vin) {
		if (e == rootValue) {
			break;
		}
		++index;
	}
	std::vector<int> leftPre, leftVin, rightPre, rightVin;
	for (int i = 0; i < index; ++i) {
		leftPre.push_back(pre[i + 1]);
		leftVin.push_back(vin[i]);
	}
	for (int i = index + 1; i < vin.size(); ++i) {
		rightPre.push_back(pre[i]);
		rightVin.push_back(vin[i]);
	}
	TreeNode* node = new TreeNode(rootValue);
	node->left = ReConstructBinaryTree(leftPre, leftVin);
	node->right = ReConstructBinaryTree(rightPre, rightVin);
	return node;
}

void CQueue::push(int node) {
	stack1.push(node);
}

int CQueue::pop() {
	if (stack2.empty()) {
		while (stack1.size() > 0) {
			int n = stack1.top();
			stack1.pop();
			stack2.push(n);
		}
	}
	if (stack2.empty()) {
		throw new std::runtime_error("Queue is empty!");
	}
	int n = stack2.top();
	stack2.pop();
	return n;
}

void CStack::push(int node) {
	if (!queue1.empty()) {
		queue1.push(node);
	} else {
		queue2.push(node);
	}
}

int CStack::swap(std::queue<int>& q1, std::queue<int>& q2) {
	while (q1.size() > 1) {
		int n = q1.front();
		q1.pop();
		q2.push(n);
	}
	int n = q1.front();
	q1.pop();
	return n;
}

int CStack::pop() {
	if (!queue1.empty()) {
		return swap(queue1, queue2);
	}
	if (!queue2.empty()) {
		return swap(queue2, queue1);
	}
	throw new std::runtime_error("Stack is empty!");
}

int MinNumberInRotateArray(std::vector<int> arr) {
	if (arr.empty()) {
		return 0;
	}
	int index1 = 0;
	int index2 = arr.size() - 1;
	int indexMid = index1;
	while (arr[index1] >= arr[index2]) {
		if (index2 - index1 == 1) {
			indexMid = index2;
			break;
		}
		indexMid = (index1 + index2) / 2;
		if (arr[indexMid] >= arr[index1]) {
			index1 = indexMid;
		} else if (arr[indexMid] <= arr[index2]) {
			index2 = indexMid;
		}
	}
	return arr[indexMid];
}

int Fibonacci(int n) {
	if (n > 39) {
		throw new std::runtime_error("n <= 39!");
	}
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	int i = 2;
	int n1 = 0, n2 = 1;
	while (i <= n) {
		int n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		++i;
	}
	return n2;
}

int JumpFloor(int n) {
	if (n < 0) {
		throw new std::runtime_error("n >= 0!");
	}
	int arr[2] = { 1, 2 };
	if (n < 2) {
		return arr[n-1];
	}
	int i = 2;
	while (i < n) {
		int count = arr[1] + arr[0];
		arr[0] = arr[1];
		arr[1] = count;
		++i;
	}
	return arr[1];
}

int NumberOf1(int n) {
	int count = 0;
	while (n) {
		++count;
		n = (n - 1) & n;
	}
	return count;
}

double Power(double base, int exponent) {

	if (exponent == 0) {
		return 1;
	}
	if (exponent == 1) {
		return base;
	}
	if (exponent == -1) {
		return 1 / base;
	}
	double rs = base;
	int n = exponent > 0 ? exponent : -exponent;
	while (n > 1) {
		rs *= rs;
		if (n & 0x01 == 1) {
			rs *= base;
		}
		n = n >> 1;

	}
	return exponent > 0 ? rs : 1 / rs;
}

}