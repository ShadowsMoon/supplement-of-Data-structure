//-----c++ 知识进一步补充-----------------------------//
//---------------------类模板-----------------------------//
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

//--------------起泡排序改进版本-----------------
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

//---无法以头文件形式放入，估计只能以类才可以，因为涉及到模板------

//int main()
//{
//	vector<int>a = { 2, 1, 4, 3, 5, 6, 7, 8};   //此算法只能保证这个可行，但 { 2, 1, 8, 7, 3, 4, 5, 6}不可行
//	vector<int>b(8);
//	int lo = 0; int hi = 7;
//    bubblesort_fur(a, lo, hi);
//	for (auto b = a.begin(); b < a.end(); b++)
//		cout <<*b << endl;
//	cin.get(); cin.get();
//};


//-----------------stack 实例：10进制转换n进制---------------------------------------------------------------//

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

//-----蛮力算法实现串匹配-------------------------------//
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
//				i = i - (j - 1); j = 0;   //失败，i回退到下一个匹配字符，j置0
//			}
//
//		 }
//		m = i - j;
//		cout << m;
//		cin.get(); cin.get();
//		return 0;
//}




	//**********way 2*************************//
//int main()
//{
//	string a, b;
//	getline(cin, a); getline(cin, b);
//	bool ju = false;
//	int fin = 0;
//    int num = 3;
//	int n = a.size(); int m = b.size();
//	int i = 0; int j = 0; 
//	while (i < n&&j < m)
//	{
//    	if (a[i] == b[j]) 
//		{
//			i++, j++; 
//		}
//		else if (b[j] == '?')
//		{
//			for (; num > 0; num--)
//			{
//				int i_old = i;int j_old = j;
//				for (; i_old< n&&j_old < m;  j_old++)
//				{
//
//					if (b[j_old + 1] != a[i_old + num])
//						break;
//
//				}
//				if (j_old == m - 1)
//				{
//					fin = m + num;
//					break;
//				}
//				fin = -1;
//			
//			}
//		}
//		else
//		{ 
//			i = i - (j - 1); j = 0;   //失败，i回退到下一个匹配字符，j置0
//		}
//	}
//	cout << fin<<endl;
//	cin.get(); cin.get();
//	return 0;
//}
//-----------------------------------------------------------------//



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
