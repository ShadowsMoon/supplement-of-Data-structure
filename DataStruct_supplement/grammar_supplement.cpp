//课后习题作业以及相应知识点补充
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
//	cout << "rand(1): " << rand() % 10 << endl;     // rand产生随机整数，使用a+rand%b可得到 [a，b]范围的整数
//	cout << "rand(2): " << rand() % 10 << endl;
//	cout << "rand(2): " << rand() % 10 << endl;
//	srand(time(NULL));     //srand 保证rand每次产生的随机数都不一样，因为time(NULL)为当前时间。
//	for (int i = 0; i < 10; i++)
//		cout << 100 + rand() % 200 << endl;
//

//int main()
//{
//
//	double secs;
//	clock_t start = clock();
//	clock_t delay = clock() - start;               //计时 使用
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "delay=: " << secs << endl;
//	cin.get(); cin.get();
//	return 0;
//}



	//----------1-12-判断整数的二进制1的个数-----------------------------------------------------------------------
	//----way 1: 复杂度：o(log(n))-------------------
	//int n = 441; int ones = 0; int m;
	//m = n >> 1;    // is equal to /
	//cout << m << endl;
	//while (0 < n)
	//{
	//  ones += (1 & n);   //二进制与运算 ，判断该整数的二进制1的个数
	//  n >>= 1;
 //    }
	//cout << ones << endl;
	//------way2:复杂度：o(n*), 线性正比于n中1的个数
	//int n = 441; int ones = 0; 
	//while (n > 0)
	//{
	//	ones = +1;
	//	n &= n - 1;    //每一次都是n最右边为1进行与消除操作
	//}
	//-----------------------------------------------------------------------------------------------------------

	
//-----------------------------------------------------------------------------
	//-------1-13------------------------------递归计算2^n------
	//int n = 10; __int64 p1; __int64 p2;
	//p1 = power_1(n);
	//p2 = power_2(n);
	//cout << "way1:" << p1 << " way2:" << p2 << endl;
	//------------------------------------------------------------------------

//------------奇偶判断-------------------------------------------------------------------
	//int a = 16;
	//if (!(a & 1)) { cout << "偶数" << endl; };
//----------------------------------------------------------------------------------------



//------------------------------指针长度--------------------------
//int main()
//{
//	char a[] = { 'a','b' };
//	int b[] = { 1,2 };
//	char *a1 = a;
//	int  *b1 = b;
//	cout << "size of a:"<<sizeof(a) << endl;
//	cout << "size of *a:"<<sizeof(a1)<<endl;   //指针都是四个字节，和类型无关
//	cout << "size of b:" << sizeof(b) << endl;
//	cout << "size of *b:" << sizeof(b1) << endl;
//	cin.get(); cin.get();
//}




//--------------------------------------------------//
//argv 是 argument vector的缩写，表示传入main函数的参数序列或指针，并且第一个参数argv[0]一定是程序的名称，
//并且包含了程序所在的完整路径，所以确切的说需要我们输入的main函数的参数个数应该是argc-1个；
//argc 是 argument count的缩写，表示传入main函数的参数个数；
//void main(int argc, char *argv[])    
//{
//	for (int i = 0; i < argc; i++)
//	{
//		cout << i << ": " << argv[i] << endl;
//	}
//	system("pause");
//}








