/*
Method:
  1�������㷨��ÿһ��Ԫ�ض�ȥѰ��һ������һ����Ԫ�أ�Ȼ���ж�����Ԫ��֮����ַ����ǲ��ǻ����ַ�����
  2���������������ַ�����������Ȼ���ж������ַ�������ͬ���ַ�����
  3��������չ�㷨��ÿһԪ�ػ���ÿ������ͬ��Ԫ�أ�������������������չ��ֱ��������ͬ�ĶԳ�Ԫ�أ�

Note:
  1���е��������Էŵ�for����whileѭ�����У������ܹ��ó�������������
  2�������б߽��������˵�����Կ��ǽ����������жϺ����ۼӣ����������ۼ����жϣ�ͨ���ı�������λ�ü���ʵ�֣�
 */

class Solution {
public:
	string longestPalindrome(string s) {
		if (s.empty()) return "";
		else
		{
			int l = s.length();
			int i = 0, start = 0, end = 0;
			int len = 0, len_max = 0, index = 0;
			while (i < l)
			{
				start = i;
				end = i;
				while (s[end] == s[end + 1] && end < l - 1) ++end;
				i = end + 1;
				while (start > 0 && end < l - 1 && s[start - 1] == s[end + 1])
				{
					--start;
					++end;
				}
				len = end - start + 1;
				if (len > len_max)
				{
					index = start;
					len_max = len;
				}
			}
			return s.substr(index, len_max);
		}
	}
};

