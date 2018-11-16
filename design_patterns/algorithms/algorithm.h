/* Copyleft 2018 The design-patterns Authors. Some Rights Reserved.

@Author: fetaxyu
@Date: 2018-11-14
Email: fetaxyu@gmail.com
===============================================================*/
#ifndef DESIGN_PATTERNS_ALGORITHMS_H_
#define DESIGN_PATTERNS_ALGORITHMS_H_

#include <vector>
#include <stack>
#include <queue>
#include <exception>

namespace solution {

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) { }
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


// 在一个二维数组中（每个一维数组的长度相同），每一行都按照从左
// 到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
// 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组
// 中是否含有该整数。
bool Find(int target, std::vector<std::vector<int>> array);

// 请实现一个函数，将一个字符串中的每个空格替换成“%20”。
// 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
void ReplaceSpace(char *str, int length);

// 输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
std::vector<int> PrintListFromTailToHead(ListNode* head);

// 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
// 假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
// 例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，
// 则重建二叉树并返回。
TreeNode* ReConstructBinaryTree(std::vector<int>, std::vector<int>);

// 用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
class CQueue {
public:
	void push(int node);
	int pop();

private:
	std::stack<int> stack1;
	std::stack<int> stack2;
};

// // 用两个队列来实现一个栈，完成栈的Push和Pop操作。 队列中的元素为int类型。
class CStack{
public:
	void push(int node);
	int pop();
	static int swap(std::queue<int>&, std::queue<int>&);

private:
	std::queue<int> queue1;
	std::queue<int> queue2;
};


}

#endif
