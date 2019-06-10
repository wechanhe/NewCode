/*输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。*/
/* 思路
*		1、我的思路是再用一个stack，时间复杂度O(n)
		
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
 };

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> iv;
		stack<int> istack;
		ListNode *p = head;
		while (p != NULL)
		{
			istack.push(p->val);
			p = p->next;
		}
		while (!istack.empty())
		{
			iv.push_back(istack.top());
			istack.pop();
		}
		return iv;
	}
};

int main() {

	return 0;
}