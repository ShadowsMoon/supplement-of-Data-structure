#include<iostream>
#include<stdio.h>
#include<list>
using namespace std;




//�б����ɷ�ʽ����������
//struct listnode
//{
//	int val;
//	listnode *next;
//};
//int main()
//{
//	listnode *head, *pre;  //ͷָ���һ��
//	head = nullptr; pre = nullptr;
//	int a;
//	for (int i = 0; i < 5; i++)   //����Ϊ5���б�
//	{
//		listnode *mi = new listnode;
//		cin >> a;
//		(*mi).val = a;
//		(*mi).next = nullptr;
//		if (head == nullptr)
//			head = mi;
//		else
//			pre->next = mi;
//		pre = mi;
//	}
//	while (head)
//	{
//		cout << head->val << " ";
//		head = head->next;
//	}
//	cin.get(); cin.get();
//}

//------------------------------����---------------------------------------//
//------------------�������ɷ�ʽ 1(success)---------------------------------------------//
//ע����ʧ�ܰ�����𣺣�ָ��ָ���ָ�룬ͬ��ÿ�ε��ö���ʹ�ó�ʼ��ַ������ָ���ָ��һ������ֵ���ٴε��ñ㲻���ʼ��
//struct  ListNode {
//	int  val;
//	ListNode *next;
//};
//void Addtolist(ListNode** phead, int value)    //�ؼ��㣺phead��ʾָ���ָ�룬���ַ�ٵ���ʱ���ı䣻*phead��ʾ����ĵ�һ���ڵ㣬**pheadָ����
//{
//	ListNode* pnew = new ListNode;
//	pnew->val = value;
//	pnew->next = nullptr;
//	if (*phead == nullptr)
//	{
//		*phead = pnew;
//	}
//	else
//	{
//		ListNode *pnode = *phead;  //��һ���ڵ�ĵ�ַ
//		while (pnode->next != nullptr)    //��n���������n-2���ڵ��next�е�ַ����������n-1���ڵ㣬��ʱ��û��next����ֵn�ĵ�ַ��������nΪnull
//			pnode = pnode->next;
//		pnode->next = pnew;     //��ֵnext����
//	}
//}
////
//int main()
//{
//	//-------------------version 1---------------------------//
//	ListNode *p1 = nullptr;
//	ListNode **p2 = &p1;
//	int a = 0;
//	int len = 10;
//	for (int i = 0; i < len; i++)
//	{
//		cin >> a;
//		int v1 = a;
//		Addtolist(p2, v1);
//	}
//	while (*p2)
//	{
//		cout << (*p2)->val << endl;
//		*p2 = (*p2)->next;
//	}
//}
	//------------------------------version 2--------------------------//
//(���䷴��������ԭ�򣺱Ƚϳɹ��棬��Ϊÿ�ε��ú������䶨��ĺ���ָ�붼�ᱻ��Ϊ��ʼ����ĵ�ַ������޷���ɸ�ֵ)
//struct  ListNode {
//	int  val;
//	ListNode *next;
//};
//void addList(ListNode *phead, int value)
//{
//	ListNode* pnew = new ListNode;
//	pnew->val = value;
//	pnew->next = nullptr;
//	ListNode *pre = nullptr;
//	if (phead == nullptr)
//	{
//		phead = pnew;
//		pre = pnew;
//	}
//	else
//	{
//		pre->next = pnew;
//		pre = pnew;
//	}
//
//}
//int main()
//{
//	ListNode *p1 = nullptr;
//	int len = 5; int a;
//	for (int i = 0; i < len; i++)
//	{
//		cin >> a;
//		int v1 = a;
//
//		addList(p1, v1);
//	}
//	while (p1)
//  {
//	cout << p1->val << endl;
//	 p1 = p1->next;
//
//   }
//	cin.get(); cin.get();
//}
//


//-------------------------�����б�ɾ���ظ�Ԫ��-----------------------------------
// struct ListNode {
// int val;
//   ListNode *next;
//// ListNode(int x) : val(x), next(NULL) {}
//  };
// 
//	ListNode* deleteDuplicates(ListNode* head) {
//		ListNode* cur = head;
//		while (cur != NULL) {
//			ListNode* rear = cur->next;
//			if (rear == NULL)
//				return head;
//			if (cur->val == rear->val)
//				cur->next = rear->next;
//			else
//				cur = cur->next;
//		}
//		return head;
//	}
//
//int main()
//{
//	 ListNode *head, *pre,*head2;
//	 pre = nullptr;
//	 head = nullptr;
//	int a;
//	for (int i = 0; i < 3; i++)
//	{
//		ListNode *p = new (ListNode);
//		cin >> a;
//		p->val = a;
//		p->next = nullptr;
//		if (head == nullptr)
//			head = p;
//		else
//			pre->next = p;
//		pre = p;
//	}
//	
//	head2=deleteDuplicates(head);
//	while (head2)
//	{
//		cout << head2->val<<" ";
//		head2 = head2 ->next;
//
//	}
//
//	cin.get(); cin.get();
//	return 0;
//
//}




//---------------------------------
//template <typename T>bool ct(T a, T b) 
//{
//	return a < b;
//};//less than
//int main()
//{
//	list<int> list1(10);
//	vector<int>v1 = { 2,1,3,9,4,6,8,10 };
//	for (auto i = v1.begin(); i < v1.end(); i++)
//	{
//		if (ct(*i, 8)) {
//			list1.push_back(*i);
//		}
//	}
//	cin.get(); cin.get();
//	return 0;
//}
//----------------------------------------