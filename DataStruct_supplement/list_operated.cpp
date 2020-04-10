#include<iostream>
#include<stdio.h>
#include<list>
using namespace std;




//列表生成方式：（举例）
//struct listnode
//{
//	int val;
//	listnode *next;
//};
//int main()
//{
//	listnode *head, *pre;  //头指向第一个
//	head = nullptr; pre = nullptr;
//	int a;
//	for (int i = 0; i < 5; i++)   //长度为5的列表
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

//------------------------------链表---------------------------------------//
//------------------链表生成方式 1(success)---------------------------------------------//
//注意与失败版的区别：（指向指针的指针，同样每次调用都会使用初始地址，但其指向的指针一旦被赋值，再次调用便不会初始）
//struct  ListNode {
//	int  val;
//	ListNode *next;
//};
//void Addtolist(ListNode** phead, int value)    //关键点：phead表示指针的指针，其地址再调用时不改变；*phead表示链表的第一个节点，**phead指向它
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
//		ListNode *pnode = *phead;  //第一个节点的地址
//		while (pnode->next != nullptr)    //第n个情况，第n-2个节点的next有地址，则跳到第n-1个节点，此时他没有next，赋值n的地址给他，而n为null
//			pnode = pnode->next;
//		pnode->next = pnew;     //赋值next给他
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
//(经典反例：错误原因：比较成功版，因为每次调用函数，其定义的函数指针都会被置为初始定义的地址，因此无法完成赋值)
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


//-------------------------有序列表删除重复元素-----------------------------------
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