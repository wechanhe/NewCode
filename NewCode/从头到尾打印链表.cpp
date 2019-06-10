/*����һ������������ֵ��β��ͷ��˳�򷵻�һ��ArrayList��*/
/* ˼·
*		1���ҵ�˼·������һ��stack��ʱ�临�Ӷ�O(n)
		
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