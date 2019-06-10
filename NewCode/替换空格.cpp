/*请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。*/
/*
思路：
	1：从前往后插入，这样移动·的次数多不建议
	2：从后往前插入
*/
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str, int length) {
		//遍历一边字符串找出空格的数量
		if (str == NULL || length < 0)return;
		int i = 0;
		int oldnumber = 0; //记录以前的长度
		int replacenumber = 0; //记录空格的数量
		while (str[i] !='\0')
		{
			oldnumber++;
			if (str[i] == ' ') {
				replacenumber++;
			}
			i++;
		}
		int newlength = oldnumber + replacenumber * 2;	// 插入后的总长度
		if (newlength > length)return;
		int pOldlength = oldnumber;
		int pNewlength = newlength;
		while (pOldlength>=0&&pNewlength>pOldlength) //放字符
		{
			if (str[pOldlength] == ' ') {	//碰到空格就替换
				str[pNewlength--] = '0';
				str[pNewlength--] = '2';
				str[pNewlength--] = '%';
			}
			else {	//不是空格就把pOldlength指向的字符装入pNewlength指向的位置
				str[pNewlength--] = str[pOldlength];
			}
			pOldlength--;
		}
	}
};

//int main() {
//	const int length = 50;
//	char str[length] = "We Are Happy ";
//	Solution s;
//	cout << "before:" << str << endl;
//	s.replaceSpace(str, length);
//	cout << "after:" << str << endl;
//	getchar();
//	return 0;
//}
