//�κ�ϰ����ҵ�Լ���Ӧ֪ʶ�㲹��
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
#include<stdlib.h>  
#include<ctime>
#include<list>
#include<array>
#include<vector>
#include<stack>
#include<queue>
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



//------------------------------ָ�볤��--------------------------
//int main()
//{
//	char a[] = { 'a','b' };
//	int b[] = { 1,2 };
//	char *a1 = a;
//	int  *b1 = b;
//	cout << "size of a:"<<sizeof(a) << endl;
//	cout << "size of *a:"<<sizeof(a1)<<endl;   //ָ�붼���ĸ��ֽڣ��������޹�
//	cout << "size of b:" << sizeof(b) << endl;
//	cout << "size of *b:" << sizeof(b1) << endl;
//	cin.get(); cin.get();
//}




//--------------------------------------------------//
//argv �� argument vector����д����ʾ����main�����Ĳ������л�ָ�룬���ҵ�һ������argv[0]һ���ǳ�������ƣ�
//���Ұ����˳������ڵ�����·��������ȷ�е�˵��Ҫ���������main�����Ĳ�������Ӧ����argc-1����
//argc �� argument count����д����ʾ����main�����Ĳ���������
//void main(int argc, char *argv[])    
//{
//	for (int i = 0; i < argc; i++)
//	{
//		cout << i << ": " << argv[i] << endl;
//	}
//	system("pause");
//}








