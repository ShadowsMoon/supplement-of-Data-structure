//-----c++ ֪ʶ��һ������-----------------------------//
//---------------------��ģ��-----------------------------//
#include<iostream>
#include<stdio.h>
#include<string>
#include   <stdlib.h>  
#include<ctime>
#include<list>
#include<array>
#include<vector>
#include<stack>
#include"data_structe.h"
using namespace std;

//--------------��������Ľ��汾-----------------
//template<typename T>
//int bubble_fur(vector<T>&v1, int lo, int hi)
//{
//	int last = lo;
//	while (++lo < hi)
//	{
//		if (v1[lo - 1] > v1[lo])
//		{
//			last = lo;
//			swap(v1[lo - 1], v1[lo]);
//		}
//	}
//	return last;
//}
//
//
//template<typename T>
//vector<T> &bubblesort_fur(vector<T>&v1, int lo, int hi)
//{
//	while (lo < (hi = bubble_fur(v1, lo,  hi)));
//	return v1;
//}

//---�޷���ͷ�ļ���ʽ���룬����ֻ������ſ��ԣ���Ϊ�漰��ģ��------

//int main()
//{
//	vector<int>a = { 2, 1, 4, 3, 5, 6, 7, 8};   //���㷨ֻ�ܱ�֤������У��� { 2, 1, 8, 7, 3, 4, 5, 6}������
//	vector<int>b(8);
//	int lo = 0; int hi = 7;
//    bubblesort_fur(a, lo, hi);
//	for (auto b = a.begin(); b < a.end(); b++)
//		cout <<*b << endl;
//	cin.get(); cin.get();
//};


//-----------------stack ʵ����10����ת��n����---------------------------------------------------------------//

//stack<char>& cvt(stack<char>&s, int n, int base)
//{
//	char digit[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//	while (n>0)
//	{
//		s.push(digit[n%base]);
//		n = n / base;
//	}
//	return s;
//}
//
// int main()
//{
//	stack<char> s;
//   stack<char>s1= cvt(s, 58, 2);
//	while (!s1.empty())
//	{
//		printf("c%", s1.pop());
//		//cout << s1.pop() << endl;
//	}
//	cin.get(); cin.get();
//	return 0;
//}

//-----------------stack ����ƥ�����⣺�ж������Ƿ�ƥ�䣿---------------//
//˼�룺ȥ�����ڵ����ŶԲ�Ӱ����������е�״̬����ȥ�����ڵķ�ʽ����ջ��ʵ�֣�
//˼�����ü����������ķ�ʽҲ����ʵ�֣����ǶԶ����ͬ����ƥ������Ͳ��У���ջ��Ȼ��Ч
//bool paren(const char exp[], int lo, int hi)
//{
//	stack<char>ju;
//	for (int i = lo; i < hi; i++)
//		if (exp[i] == '(')
//			ju.push(exp[i]);
//		else if (exp[i] == ')')
//		{
//			if (!ju.empty())
//				ju.pop();
//			else
//				return false;
//			   //break;
//		}
//		else
//			cout << ju.size() << endl;
//	return  ju.empty();
//}
//
//int main()
//{
//	char exp1[] = { "((adc)dcv)bdbsvsm(jhm)" };
//   string exp2 = { "((adc)dcv)bdb)svsm(jhm)" };
//	bool li1 = paren(exp1, 0, strlen(exp1));
//	cout << "final judgement: " << li1 << endl;   //false:li1=0  
//	cin.get(); cin.get();
//
//}



//-----�����㷨ʵ�ִ�ƥ��-------------------------------//
//typedef int Size_t;
//int main()
//{
//		const char *T = "abaabaabbabaaabaabbabaab";
//		const char * p = "abaabbabaab";
//		Size_t n = strlen(T);  Size_t m = strlen(p);
//		//********way 1***********************//
//		int i =0, j = 0;
//		while (i < n&&j < m) 
//		{
//			if (p[j] == T[i]) 
//			{
//				i++, j++; 
//			}
//			else
//			{
//				i = i - (j - 1); j = 0;   //ʧ�ܣ�i���˵���һ��ƥ���ַ���j��0
//			}
//
//		 }
//		m = i - j;
//		cout << m;
//		cin.get(); cin.get();
//		return 0;
//}

//**********way 2*************************//


//
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
//	cin >> x >> y;
//	cout << "ʹ��շת��������Լ���� " << chu_yue(x, y) << endl;          //շת��������Լ�� 
//	cout << "ʹ��շת�������С�������� " << chu_bei(x, y) << endl;   //շת�������С������ 
//	cin.get(); cin.get();
//	return 0;
//}