/*
Method:
  �����ⷨ������ĸ����Z���У������ŵ�n�������һ�����ڣ���ôΧ�����������չ������ס���һ�����ڵ�����֪���ж��٣����Կ��Զ����һ�����ڵ�������ɸѡ����

Note:
  for(int i=0; i<��; j++)����ṹ���棬������һ��λ���ܹ����ģ��ڶ����յ���������Ҳ�����ж��
*/

class Solution {
public:
	string convert(string s, int numRows) {
		string res;
		if (numRows == 1) res = s;
		else
		{
			int n = 2 * numRows - 2;
			int l = s.length();
			int cycle = l / n;
			for (int i = 0; i < numRows; ++i)
			{
				if (i == 0 || i == numRows - 1)
				{
					for (int j = 0; j <= cycle; ++j)
					{
						if (j < cycle) res += s[i + n * j];
						else if (j == cycle && i + n * j < l) res += s[i + n * j];
					}
				}
				else
				{
					for (int j = 0; j <= cycle; ++j)
					{
						if (j < cycle)
						{
							res += s[i + n * j];
							res += s[i + n * j + n - 2 * i];
						}
						else
						{
							if (i + n * j < l) res += s[i + n * j];
							if (i + n * j + n - 2 * i < s.length()) res += s[i + n * j + n - 2 * i];
						}
					}
				}
			}
		}
		return res;
	}
};

