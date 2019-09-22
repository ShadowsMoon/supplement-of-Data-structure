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






//
// struct ListNode {
// int val;
//    ListNode *next;
// ListNode(int x) : val(x), next(NULL) {}
//  };
// 
//class Solution {
//public:
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
//};
//int main()
//{
//	struct ListNode *head, *q;
//	int t, n;
//	cin >> n;
//	for(i=0; identity	)
//	Solution s1()
//}



