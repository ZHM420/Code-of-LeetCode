/*
Method:
  1�������ⷨ��ֱ�Ӱ����������֣�Ȼ�����ֱ������
  2������������������������ĳ��ȷֳ����������:
    L1>l2ʱ����ô���ϵؽ�Ԫ��֮�ʹ���֮��ŵ�l1��ֵ��;
	l1<l2ʱ����ô��l1����һλ�ǿ�ʱ����l2����l1�ĺ��棻
	��l1=l2����l2�ͱ�l1��һλʱ����Ҫ����ĩβ��λ�������

Note:
  1��%��/��Ӧ�ÿ���ʵ�ֽ�λ��˼�룻
  2��a��b:c����˼�ǣ�a������ʱ��ȡb������ȡc��
  3��new ListNode(0)���ɴ����������һ��next��
  4������������ӣ��ڳ��Ȳ��ȵ�����£����Կ��ǽ��̵Ĳ�����0��䣻
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int key = 0;
		ListNode* L = l1;

		while (l1)
		{
			key = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + key;
			l1->val = key % 10;
			key /= 10;
			if (!(l1->next) && l2 && l2->next)
			{
				l1->next = l2->next;
				l2 = NULL;
			}
			else if (!(l1->next) && !(l2 && l2->next) && key)
			{
				l1->next = new ListNode(0);
				l2 = NULL;
			}
			l1 = l1->next;
			if (l2) l2 = l2->next;
		}

		return L;
	}
};

