/*用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。*/
/*
	思路
	1、一个栈做Push操作，另一个做Pop操作，注意Pop操作的栈需要判断是否为空，如果为空需要将Push栈的元素全部出栈到Pop栈。
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		int a;
		if (stack2.empty()) {
			while (!stack1.empty()) {
				a = stack1.top();
				stack2.push(a);
				stack1.pop();
			}
		}
		a = stack2.top();
		stack2.pop();
		return a;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};