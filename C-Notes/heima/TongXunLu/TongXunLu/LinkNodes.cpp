#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
	if (head->next == NULL) return head;
	//设置虚拟节点 解决删除第一个节点的情况
	ListNode* dummyNode = new ListNode(0);
	dummyNode->next = head;
	ListNode* cur = dummyNode;
	ListNode* pre = dummyNode;
	while (n-- && cur != NULL)
	{
		cur = cur->next;
	}
	cur = cur->next;
	while (cur != NULL)
	{
		cur = cur->next;
		pre = pre->next;
	}
	pre->next = pre->next->next;
	return dummyNode->next;
}


//int main()
//{
//	ListNode* test = new ListNode;
//	ListNode* cur = test;
//	for (int i = 0; i < 1; ++i)
//	{
//		ListNode* node = new ListNode(i + 1);
//		cur->next = node;
//		cur = cur->next;
// 	}
//	cout << test->next->val << endl;
//	removeNthFromEnd(test, 1);
//	cout << 1 << endl;
//	return 0;
//}