/*
Method:
  �ⷨ1��ȡ�Գ����֣����Գ�λ�õ��������ֽ��бȽϣ�
  �ⷨ2���������������з�ת��Ȼ��Ƚ��������֣�
  �ⷨ3��������ת�����ַ�������ֻ��Ҫ�Ƚ϶ԳƵ�����Ԫ�أ�ʡȥ������ȡ���ֵļ������

Note:
  1��������ʱ�����ַ��������д���Ч�ʸ��ߣ�
  2��to_string��C++���õĺ�������ֱ��ʹ�ã�
  3����ʱ�临�Ӷ���˵��ÿһ�αȽ϶Գ�λ�úͷ�ת��֮��Ƚ�һ����
  4��returnֻҪ��֤���еĵط��о��У�ֻҪ�����յ���return����ͣ��
*/

class Solution {
public:
	bool isPalindrome(int x) {
		long num = 0;
		if (x == 0) return true;
		else if (x < 0) return false;
		else
		{
			int r = x;
			while (x)
			{
				num = 10 * num + x % 10;
				x /= 10;
			}
			if (num == r) return true;
			else return false;
		}
	}
};

