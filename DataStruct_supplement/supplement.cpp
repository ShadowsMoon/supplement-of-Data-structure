#include<iostream>
#include<stdio.h>
#include<string>
#include   <stdlib.h>  
#include<ctime>
#include<list>
#include<array>
#include<vector>
using namespace std;
int main()
{
	//cout << "rand(1): " << rand() % 10 << endl;     // rand�������������ʹ��a+rand%b�ɵõ� [a��b]��Χ������
	//cout << "rand(2): " << rand() % 10 << endl;
	//cout << "rand(2): " << rand() % 10 << endl;
	//srand(time(NULL));     //srand ��֤randÿ�β��������������һ������Ϊtime(NULL)Ϊ��ǰʱ�䡣
	//for (int i = 0; i < 10; i++)
	//	cout << 100 + rand() % 200 << endl;

	//-----------�ж������Ķ�����1�ĸ���-----------------------------------------------------------------------
	//----way 1: ���Ӷȣ�o(log(n))-------------------
	//int n = 441; int ones = 0; int m;
	//m = n >> 1;
	//cout << m << endl;
	//while (0 < n)
	//{
	//  ones += (1 & n);   //������������ ���жϸ������Ķ�����1�ĸ���
	//  n >>= 1;
 //    }
	//cout << ones << endl;
	//------way2:���Ӷȣ�o(n*), ����������n��1�ĸ���
	int n = 441; int ones = 0; 
	while (n > 0)
	{
		ones = +1;
		n &= n - 1;    //ÿһ�ζ���n���ұ�Ϊ1��������������
	}


	//--------ʹ������������ת��������------------------------------------------------------------------------
    	/*int temp; int n = 441;
		temp = n;
		vector<int>L;
		while (temp != 0)
		{
			L.push_back(temp % 2);
			temp = temp>>1;
		}*/
		////-------------------------��vector����ȫ����ӡ---------------------------------------
		//// way1:
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

	cin.get(); cin.get();
	return 0;
}
