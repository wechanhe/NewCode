/*
	输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
	例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
*/

/* 思路
*		1、我的思路是用递归，先找根节点，然后左子树，最后右子树

*/

#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in)
{
	if (pre.size() == NULL)
		return NULL;
	TreeNode* root = new TreeNode(pre[0]);
	int i;
	for (i = 0; i < in.size() && in[i] != pre[0]; i++);
	vector<int> pre_left, in_left, pre_right, in_right;
	int pre_i = 1;
	for (int j = 0; j < in.size(); j++)
	{
		if (j < i)
		{
			in_left.push_back(in[j]);
			pre_left.push_back(pre[pre_i]);
			pre_i++;
		}
		else if (j>i)
		{
			in_right.push_back(in[j]);
			pre_right.push_back(pre[pre_i]);
			pre_i++;
		}
	}
	root->left = reConstructBinaryTree(pre_left, in_left);
	root->right = reConstructBinaryTree(pre_right, in_right);
	return root;
}

/*int main()
{
	vector<int> pre = { 1, 2, 4, 7, 3, 5, 6, 8 };
	vector<int> in = { 4, 7, 2, 1, 5, 3, 8, 6 };
	TreeNode* root = reConstructBinaryTree(pre, in);
	int a = 0;
}*/