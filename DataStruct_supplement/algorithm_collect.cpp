//---典型编程题展示，求解-----//
#include<stack>
#include<vector>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//----------------------------题1-----------------------------------------------------------//
//从字符串string开始完整匹配子串sub，返回匹配到的字符个数。
//sub中如果出现'?'表示可以匹配一到三个除'\0'以外的任意字符。
//如果sub还有找不到匹配的字符，则说明不能完整匹配。
//如果能完整匹配，返回匹配到的字符个数，如果有多种匹配方式，返回匹配字符数最少的那个，如果不能完整匹配，返回 - 1
//

////-----------------------------------------------------------------//
//int main()
//{
//	char str[1005];
//	char sub[105];
//	cin >> str >> sub;
//	int i, j;
//	i = j = 0;
//	int lena = strlen(str);
//	int lenb = strlen(sub);
//	int t = 0;
//	int cnt = 0;
//	while (i < lena&&j < lenb)
//	{
//		if (str[i] == sub[j])
//		{
//			i++;
//			j++;
//			cnt++;
//			t = 0;
//		}
//		else
//		{
//			if (sub[j + 1] == str[i])
//			{
//				i++;
//				j += 2;
//				t = 0;
//				cnt++;
//			}
//			else  if (sub[j] == '?'&&t < 3)
//			{
//				i++;
//				cnt++;
//				t++;
//			}
//			else break;
//		}
//	}
//	if (j == lenb)cout << cnt << endl;
//	else cout << -1 << endl;
//	cin.get(); cin.get();
//	return 0;
//}


//---字符串减除问题，如"  abcd  "减除为"abcd'',两边只要涉及"  " and "|"，就去掉，中间的不用去-----//
//char类型大小为一个字节，int为4个字节
//传统char风格：
//void Out(char *in,char*out)
//{
//	int len = strlen(in);
//	int i = 0,n; 
//	n = len - 1;
//	while (in[i] == '|' || in[i] == ' ')
//		i++;
//	while (in[n] == '|' || in[n] == ' ')
//		n--;
//
//	
//	for (int j = 0; i <=n; i++, j++)
//	{
//		cout<<*(in+i);
//		out[j] = in[i];   //赋值有问题？考虑string
//	}
//
//
//}
//
//string & sout(string s1)
//{
//
//}
//
//
//int main()
//{
//	//----------char *----------------------------//
//	char in1[] = { "|| |ab| afa  ||" };
//	char out[8];
//	Out(in1, out);
//	out[7] = '\0';
//	cout << " " << endl;
//	cout << "the remain: " << out << endl;
//	//--------------string-------------------------//
//
//	cin.get(); cin.get();
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int chu_yue(int x, int y)   
//{
//	int z = y;
//	while (x%y != 0)
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return z;
//}
//
//int chu_bei(int x, int y)   
//{
//	int a = 0, b = 0;
//	int temp = 0;
//	if (x < y)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	a = x * y;
//	while (y != 0)
//	{
//		b = x % y;
//		x = y;
//		y = b;
//	}
//	return a / x;
//
//}
//int main() {
//	int x, y, z;
//	cout << "请输入3个正整数 中间用空格隔开" << endl;
//	cin >> x >> y ;   
//	cout << "使用辗转相除求最大公约数得 " << chu_yue(x, y) << endl;          //辗转相除求最大公约数 
//	cout << "使用辗转相除求最小公倍数得 " << chu_bei(x, y) << endl;			//辗转相除求最小公倍数 
//	cin.get(); cin.get();
//	return 0;
//}





//------------------------------链表---------------------------------------//
//------------------链表生成方式 1(success)---------------------------------------------//
//注意与失败版的区别：（指向指针的指针，同样每次调用都会使用初始地址，但其指向的指针一旦被赋值，再次调用便不会初始）
//struct  ListNode {
//	int  val;
//	ListNode *next;
//};
//void Addtolist(ListNode** phead, int value)
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





//--------数组排序--------------------------------------------------//(success)

//#include<vector>
//#include<iostream>
//
//using namespace std;
//vector<int> sorted(vector<int> a, bool b)
//{
//	int lo = 0; int hi = a.size();
//	bool sorted = false;
//	if (b == true)
//	{
//		
//		for (int i = hi; i > 0; i--)
//		{
//			int lo = 0;
//			if (sorted == false)
//			{
//				bool sorted = true; //整体有序标志
//				while (++lo < hi) //自左向右，逐一检查各对相邻元素
//					if (a[lo - 1] > a[lo]) { //若逆序，则
//						sorted = false; //意味着尚未整体有序，并需要
//						swap(a[lo - 1], a[lo]); //通过交换使局部有序
//					}
//			}
//			else
//				break;
//		}
//	}
//	else
//	{
//		for (int i = hi; i > 0; i--)
//		{
//			int lo = 0;
//			if (sorted == false)
//			{
//				bool sorted = true; //整体有序标志         小技巧：外面值false，里面置true
//				while (++lo < hi) //自左向右，逐一检查各对相邻元素
//					if (a[lo - 1] < a[lo]) { //若逆序，则
//						sorted = false; //意味着尚未整体有序，并需要
//						swap(a[lo - 1], a[lo]); //通过交换使局部有序
//					}
//			}
//			else
//				break;
//		}
//	}
//	return a;
//}
//
//int main()
//{
//	vector<int> a = { 2,1,5,4 ,8,3};
//	bool t = false;
//	vector<int> b = sorted(a, t);
//	for (int i = 0; i < b.size(); i++)
//		cout << b[i] << endl;
//	cin.get(); cin.get();
//	return 0;
//}
