//---���ͱ����չʾ�����-----//
#include<stack>
#include<vector>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//----------------------------��1-----------------------------------------------------------//
//���ַ���string��ʼ����ƥ���Ӵ�sub������ƥ�䵽���ַ�������
//sub���������'?'��ʾ����ƥ��һ��������'\0'����������ַ���
//���sub�����Ҳ���ƥ����ַ�����˵����������ƥ�䡣
//���������ƥ�䣬����ƥ�䵽���ַ�����������ж���ƥ�䷽ʽ������ƥ���ַ������ٵ��Ǹ��������������ƥ�䣬���� - 1
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


//---�ַ����������⣬��"  abcd  "����Ϊ"abcd'',����ֻҪ�漰"  " and "|"����ȥ�����м�Ĳ���ȥ-----//
//char���ʹ�СΪһ���ֽڣ�intΪ4���ֽ�
//��ͳchar���
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
//		out[j] = in[i];   //��ֵ�����⣿����string
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
//	cout << "������3�������� �м��ÿո����" << endl;
//	cin >> x >> y ;   
//	cout << "ʹ��շת��������Լ���� " << chu_yue(x, y) << endl;          //շת��������Լ�� 
//	cout << "ʹ��շת�������С�������� " << chu_bei(x, y) << endl;			//շת�������С������ 
//	cin.get(); cin.get();
//	return 0;
//}





//------------------------------����---------------------------------------//
//------------------�������ɷ�ʽ 1(success)---------------------------------------------//
//ע����ʧ�ܰ�����𣺣�ָ��ָ���ָ�룬ͬ��ÿ�ε��ö���ʹ�ó�ʼ��ַ������ָ���ָ��һ������ֵ���ٴε��ñ㲻���ʼ��
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





//--------��������--------------------------------------------------//(success)

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
//				bool sorted = true; //���������־
//				while (++lo < hi) //�������ң���һ����������Ԫ��
//					if (a[lo - 1] > a[lo]) { //��������
//						sorted = false; //��ζ����δ�������򣬲���Ҫ
//						swap(a[lo - 1], a[lo]); //ͨ������ʹ�ֲ�����
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
//				bool sorted = true; //���������־         С���ɣ�����ֵfalse��������true
//				while (++lo < hi) //�������ң���һ����������Ԫ��
//					if (a[lo - 1] < a[lo]) { //��������
//						sorted = false; //��ζ����δ�������򣬲���Ҫ
//						swap(a[lo - 1], a[lo]); //ͨ������ʹ�ֲ�����
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
