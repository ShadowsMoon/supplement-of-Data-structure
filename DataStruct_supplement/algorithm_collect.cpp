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



