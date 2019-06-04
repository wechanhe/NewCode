/*��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ��������
�ж��������Ƿ��и�������*/
/* ˼·
* ����������ģ������½��������������ֵݼ����������ֵ�����
* ��˴����½ǿ�ʼ���ң���Ҫ�������ֱ����½����ִ�ʱ������
* Ҫ�������ֱ����½�����Сʱ������
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int>> array) {
		int rowCount = array.size();
		int colCount = array[0].size();
		int i, j;
		for (i = rowCount - 1, j = 0; i >= 0 && j < colCount;) {
			if (target == array[i][j])return true;
			else if (target < array[i][j]) {
				i--;
			}
			else {
				j++;
			}
		}
		return false;
	}
};

int main() {
	vector<vector<int>> array = { {1,2,3},{4,5,6},{7,8,9} };
	Solution s;
	cout<<s.Find(7, array);
	getchar();
	return 0;
}