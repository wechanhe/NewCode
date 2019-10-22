/*
��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
*/
#include<vector>
using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int low = 0; int high = rotateArray.size() - 1;
		while (low < high) {
			int mid = low + (high - low) / 2;
			if (rotateArray[mid] > rotateArray[high]) {
				low = mid + 1;
			}
			else if (rotateArray[mid] == rotateArray[high]) {
				high = high - 1;
			}
			else {
				high = mid;
			}
		}
		return rotateArray[low];
	}
};
