/*
Method:
  �ⷨ:�����ֵĴӺ���ȡ������Ȼ��һ����Ū���µı����ĺ���ȥ

Note:
  ans = ans * 10 + x % 10; x /= 10;һ�������з�ת
*/

class Solution {
public:
	int reverse(int x) {
		long ans = 0;
		while (x != 0) {
			ans = ans * 10 + x % 10;
			x /= 10;
		}
		return (ans > INT_MAX || ans < INT_MIN) ? 0 : ans;
	}
};

