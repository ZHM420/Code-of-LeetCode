/*
Method:
  �ⷨ1���������ѡ��һ���ַ�����Ϊ��׼��������ǰ׺���������������ַ��������жϣ����Ƿ������������˵�ǰ׺�Ӵ���
  �ⷨ2������ɨ�裺���±�0��ʼ���ж�ÿһ���ַ������±�0���ж��Ƿ�ȫ����ͬ��ֱ��������ȫ����ͬ���±ꣻ
  �ⷨ3������ɨ�裺ǰ�����ַ����ҹ����Ӵ����������͵������ַ����ҹ����Ӵ�����ֱ�����һ����

 Note:
   return���÷�ҪϤ֪����ʱ���Դ���break�����á��еĵط��Ƿ���ҪflagҪ������������ֹ�ķ���������return���м�
 */

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

		if (strs.empty()) return "";
		if (strs.size() == 1) return strs[0];

		int l = strs[0].length();
		int m = strs.size();
		string res = "";

		for (int i = 0; i < l; i++)
		{
			for (int j = 1; j < m; j++)
			{
				if (strs[j].length() < i || strs[j][i] != strs[0][i]) return res;
			}
			res += strs[0][i];
		}

		return res;
	}
};
