/*��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��*/
/*
˼·��
	1����ǰ������룬�����ƶ����Ĵ����಻����
	2���Ӻ���ǰ����
*/
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str, int length) {
		//����һ���ַ����ҳ��ո������
		if (str == NULL || length < 0)return;
		int i = 0;
		int oldnumber = 0; //��¼��ǰ�ĳ���
		int replacenumber = 0; //��¼�ո������
		while (str[i] !='\0')
		{
			oldnumber++;
			if (str[i] == ' ') {
				replacenumber++;
			}
			i++;
		}
		int newlength = oldnumber + replacenumber * 2;	// �������ܳ���
		if (newlength > length)return;
		int pOldlength = oldnumber;
		int pNewlength = newlength;
		while (pOldlength>=0&&pNewlength>pOldlength) //���ַ�
		{
			if (str[pOldlength] == ' ') {	//�����ո���滻
				str[pNewlength--] = '0';
				str[pNewlength--] = '2';
				str[pNewlength--] = '%';
			}
			else {	//���ǿո�Ͱ�pOldlengthָ����ַ�װ��pNewlengthָ���λ��
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
