//�κ�ϰ����ҵ�Լ���Ӧ֪ʶ�㲹��
#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<stdlib.h>  
#include<ctime>
#include<list>
#include<array>
#include<vector>
#include<stack>
#include"data_structe.h"
using namespace std;
//int main()
//{
//	cout << "rand(1): " << rand() % 10 << endl;     // rand�������������ʹ��a+rand%b�ɵõ� [a��b]��Χ������
//	cout << "rand(2): " << rand() % 10 << endl;
//	cout << "rand(2): " << rand() % 10 << endl;
//	srand(time(NULL));     //srand ��֤randÿ�β��������������һ������Ϊtime(NULL)Ϊ��ǰʱ�䡣
//	for (int i = 0; i < 10; i++)
//		cout << 100 + rand() % 200 << endl;
//

//int main()
//{
//
//	double secs;
//	clock_t start = clock();
//	clock_t delay = clock() - start;               //��ʱ ʹ��
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "delay=: " << secs << endl;
//	cin.get(); cin.get();
//	return 0;
//}



	//----------1-12-�ж������Ķ�����1�ĸ���-----------------------------------------------------------------------
	//----way 1: ���Ӷȣ�o(log(n))-------------------
	//int n = 441; int ones = 0; int m;
	//m = n >> 1;    // is equal to /
	//cout << m << endl;
	//while (0 < n)
	//{
	//  ones += (1 & n);   //������������ ���жϸ������Ķ�����1�ĸ���
	//  n >>= 1;
 //    }
	//cout << ones << endl;
	//------way2:���Ӷȣ�o(n*), ����������n��1�ĸ���
	//int n = 441; int ones = 0; 
	//while (n > 0)
	//{
	//	ones = +1;
	//	n &= n - 1;    //ÿһ�ζ���n���ұ�Ϊ1��������������
	//}
	//-----------------------------------------------------------------------------------------------------------

	//--------ʹ������������ת��������------------------------------------------------------------------------
  //  	int temp; int n = 8;
		//temp = n;
		//vector<int>L;
		//while (temp != 0)
		//{
		//	L.push_back(temp % 2);
		//	temp = temp>>1;
		//}
		//////-------------------------��vector����ȫ����ӡ---------------------------------------
		////// way1:
		//int na= L.size() - 1;
		//for (int m = 0; m < na; m++)
		//{
		//	cout << L[m] << endl;
		//}
		////way2:
		/*for (vector<int>::iterator iter = L.begin(); iter != L.end(); iter++)
			cout<<*iter;
		cout<<endl;*/
		////way3:

		//const int *f = &L.front();  const int *s = &L.back();
		//for (; f <= s; f++)
		//{
		//	cout << *f << endl;
		//}
//-----------------------------------------------------------------------------
	//-------1-13------------------------------�ݹ����2^n------
	//int n = 10; __int64 p1; __int64 p2;
	//p1 = power_1(n);
	//p2 = power_2(n);
	//cout << "way1:" << p1 << " way2:" << p2 << endl;
	//------------------------------------------------------------------------

//------------��ż�ж�-------------------------------------------------------------------
	//int a = 16;
	//if (!(a & 1)) { cout << "ż��" << endl; };
//----------------------------------------------------------------------------------------


//------------��̬�ռ�------------------------------
//int main()
//{
//	vector<int>a = { 1,2,3,4,5 };
//	vector<int>b(5);                      //directly copy  is same as array
//	b = a;
//	for (vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
//		cout << *iter << endl;
//	for (auto it = b.begin(); it < b.end(); it++)
//		cout << *it << endl;
//
//	cin.get(); cin.get();
//	return 0;
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



//----------------ջ����----------------------------------------------------//
//stack<char>& cvt(stack<char>&s, int n, int base)
//{
//	char digit[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//	while (n > 0)
//	{
//		s.push(digit[n%base]);
//		n = n / base;
//	}
//	return s;
//}
//
//int main()
//{
//	stack<char> s;
//	stack<char>s1 = cvt(s, 58, 2);
// //   s1.pop();     //s1 ���������������ͣ��޷����ʵ������
//	while (!s1.empty())
//	{
//		//printf("c%", s1.pop());  //ֱ��pop��ӡ�����
//		cout << s1.top() << endl;  // top��ʾջ��������
//		s1.pop();
//	}
//	//s.push('1');
//	//char a = s.top();
//	//cout << a << endl;
//	cin.get(); cin.get();
//	return 0;
//}
//-------------------------------------------------------------------------------------//


//---------------------------------------��ƥ��------------------------------------//
//
//typedef  int Size_t;
//int main()
//{
//	char a = 's';  //�ַ������ַ������б�������
//	char an[10] = "beat";
//	const char *p= "abaabbabaab" ; //�ַ���ʵ���ϱ�ʾ���ǵ�ַ����˽���ַ����ָ��//�ַ�������ֵ�ǳ��������ʹ��const
//	Size_t  m = strlen(p),j=0;
//	int *N = new int[m];
//	int t = N[0] = -1;
//	while (j < m - 1)
//		if (0 > t || p[j] == p[t])
//			N[++j] = ++t;
//		else//
//			t = N[t];
//	for (int i = 0; i <= m; i++)
//		cout << N[i] << endl;
//	cin.get(); cin.get();
//	return 0;
//}
//------------------------------------------------
//int main()
//{
//	const char *B= "abaabbabaab";
//	Size_t  m = strlen(B);
//    int *F = new int[m];
//	int t = F[0] = -1;
//	for (int i = 1; i < m; i++)
//	{
//		int j = F[i - 1];
//		while ((B[j + 1] != B[i]) && (j >= 0))
//			j = F[j];
//		if (B[j + 1] == B[i])
//			F[i] = j + 1;
//		else
//			F[i] = -1;
//	}
//		for (int i = 0; i <m; i++)
//		    cout << F[i] << endl;
//	cin.get(); cin.get();
//	return 0;
//}

//--------------------------------------------------//
//argv �� argument vector����д����ʾ����main�����Ĳ������л�ָ�룬���ҵ�һ������argv[0]һ���ǳ�������ƣ�
//���Ұ����˳������ڵ�����·��������ȷ�е�˵��Ҫ���������main�����Ĳ�������Ӧ����argc-1����
//argc �� argument count����д����ʾ����main�����Ĳ���������
void main(int argc, char *argv[])    
{
	for (int i = 0; i < argc; i++)
	{
		cout << i << ": " << argv[i] << endl;
	}
	system("pause");
}

