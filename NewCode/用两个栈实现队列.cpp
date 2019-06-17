/*������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�*/
/*
	˼·
	1��һ��ջ��Push��������һ����Pop������ע��Pop������ջ��Ҫ�ж��Ƿ�Ϊ�գ����Ϊ����Ҫ��Pushջ��Ԫ��ȫ����ջ��Popջ��
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