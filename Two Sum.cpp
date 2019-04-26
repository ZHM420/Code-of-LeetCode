/*
1�������ⷨ��ͨ������ѭ��Ƕ�ף��Ը���Ԫ��֮�ͽ��б�����
2�������ϣ���ȴ�����ϣ��Ȼ��Թ�ϣ�����������
3��һ���ϣ��˼·����һ�ߴ�����ϣ��Ĳ���Ԫ�أ�һ�߽����������������ݹ��ɣ���С���󣩣�
   ��ôĿ��ֵһ���ڴ����ĺ��棬���ԴӺ��洴�������������ȿ��Ա�֤����Ҫ���й����ظ��ļ���;

Note:
  1����ϣ�������ͷ�ļ���#include <unordered_map>��
  2����ϣ��Ĵ�����unordered_map<int, int> hash��
  3��hash.find()�������ص���ָ�������һ��int��
*/
class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> v;
		unordered_map<int, int> hash;
		for (int i = nums.size() - 1; i >= 0; hash[nums[i]] = i, i--)
		{
			if (hash.find(target - nums[i]) == hash.end()) continue;
			v.push_back(i);
			v.push_back(hash[target - nums[i]]);
		}
		return v;
	}
};