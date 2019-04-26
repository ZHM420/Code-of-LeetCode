/*
Method:
  �ⷨ1�������ⷨ��������ѭ���������еĿ����ԣ�
  �ⷨ2��˫ָ�룬��������ʼ�������˵�ָ�룬���̵�һ�߲��ϵ����ڲ��ƶ����Խ��Ͷ̰�ЧӦ

Note:
  �㷨��Ҫ������Ӧ�ԣ����ǲ���Ҫ�����е�������������г������ڳ����ϣ�Ҳ�ǲ��������أ�
  ��Ϊ������ʱ�临�Ӷ����治���н��ͣ�ֻ�ܽ���Ƶ�Ρ���Ҫ�᷽ܽ��������ʱ�临�Ӷ�
*/

class Solution {
public:
	int maxArea(vector<int>& height) {
		int res = 0;
		int left = 0, right = height.size() - 1;
		while (left < right)
		{
			res = max(res, min(height[left], height[right]) * (right - left));
			(height[left] < height[right]) ? ++left : --right;
		}
		return res;
	}
};

