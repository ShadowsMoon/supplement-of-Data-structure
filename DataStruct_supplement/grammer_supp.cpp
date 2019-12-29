#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
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
//	//cout << "rand(1): " << rand() % 10 << endl;     // rand产生随机整数，使用a+rand%b可得到 [a，a+b]范围的整数   头文件 stdio.h
//	//cout << "rand(2): " << rand() % 10 << endl;
//	//cout << "rand(2): " << rand() % 10 << endl;
//	srand(time(NULL));     //srand 保证rand每次产生的随机数都不一样，因为time(NULL)为当前时间。
//	for (int i = 0; i < 10; i++)
//		cout << 100 + rand() % 200 << endl;
//	cin.get(); cin.get();
//}
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

//#include <iomanip>  
//cout << setiosflags(ios::fixed) << setprecision(2) << a << endl;  小数点保持两位


//位图结构(用于大规模数据的存在的确定)
//#include <iostream>
//#include <vector>
////
//using namespace std;
////
////// for more details, please go to my csdn
////// http://blog.csdn.net/xy913741894/article/details/56299727
//class BitMap
//{
//public:
//	BitMap(size_t num)
//	{
//		_v.resize((num >> 5) + 1);       //num/32,确定区间
//	}
//
//	void Set(size_t num) //set 1
//	{
//		size_t index = num >> 5;
//		size_t pos = num % 32;     //确定了该区间的所移动的位
//		_v[index] |= (1 << pos);
//	}
//
//	void ReSet(size_t num) //set 0
//	{
//		size_t index = num >> 5;
//		size_t pos = num % 32;
//		_v[index] &= ~(1 << pos);
//	}
//
//	bool HasExisted(size_t num)//check whether it exists
//	{
//		size_t index = num >> 5;
//		size_t pos = num % 32;
//		bool flag = false;
//		if (_v[index] & (1 << pos))
//			flag = true;
//		return flag;
//
//	}
//
//private:
//	vector<size_t> _v;     //数据类型不同，会影响移位的数量，如char类型，一个字节，8b，因此 >>3 ;  int类型，>>5
//};
//
//
//void TestBitMap()
//{
//	BitMap bm((size_t)-1);//store all unsigned int 
//	bm.Set(1);
//	bm.Set(111);
//	bm.Set(222);
//	bm.Set(3333);
//	bm.Set(7777);
//	bm.Set(9999);
//	bm.Set(666666);
//	bm.ReSet(1);
//	bm.ReSet(666666);
//
//	cout << bm.HasExisted(1) << endl;
//	cout << bm.HasExisted(111) << endl;
//	cout << bm.HasExisted(222) << endl;
//	cout << bm.HasExisted(3333) << endl;
//	cout << bm.HasExisted(7777) << endl;
//	cout << bm.HasExisted(9999) << endl;
//	cout << bm.HasExisted(666666) << endl;
//}
//
//int main()
//{
//	TestBitMap();
//	cin.get(); cin.get();
//	return 0;
//}


//using namespace std;
//void test1()
//{
//	char * M;
//	int N;
//	M = new char[N = (16+ 7) / 8];
//	memset(M, 0, N);
//	int t1 = 8;
//	int ju1 = (t1 & 0x07);
//	int ju2 = 0x80 >> ju1;
//	int ju3 = t1 >> 3;
//	char fin=M[ju3] | ju2;
//}
////由于计算机对位的操作比乘除法更有效率，这里计算i / 32可以用位移操作：i >> 5；计算i % 32可以用i & 31。
///* URL https://blog.csdn.net/yanerhao/article/details/72848524 */
//void test2(int value,int m)
//{
//	int v1 = value >> m;    //等价于 value/2^m;
//	int v2 = value & (m-1);   //等价于 value%m
//	cout << "value/2^m: " << v1<<endl;
//	cout << "value%2^m: " << v2<<endl;
//}
//int main()
//{
//    //test1();
////	test2(33, 2);
//	int t3 = 1 >> 2;
//	int t4 = 1 << 2;
//	cout << "t3: "<<t3<<" t4: "<<t4;
//	cin.get(); cin.get();
//}


// BitMap test: (100000个数据快速判断其中的数是否存在)
//#include <iostream>
//#include <vector>
//using namespace std;
// class BitMap
//{
//protected:
//	   vector<int>a;
//public:
//	BitMap(int total_num) { a.resize((total_num >> 5) + 1); };
//	void Set(int num);
//	void clear(int num);
//	bool HasExited(int num);
//	~BitMap() {};
//};
// void BitMap::Set(int num)
// {
//	 a[num >> 5] |= 1 << (num & 31);
// }
// void BitMap::clear(int num)
// {
//	 a[num >> 5] &= ~(1 << (num & 31));
// }
// bool BitMap::HasExited(int num)
// {
//	 bool res = false;
//	 if (a[num >> 5] & (1 << (num & 31)))
//		 return true;
//	 return res;
// }
// void Test1()
// {
//	 BitMap test1(100000);
//	 test1.Set(1);
//	 test1.Set(10);
//	 test1.Set(111);
//	 test1.Set(1024);
//	 test1.Set(9999);
//
//	cout<< test1.HasExited(1024)<<endl;
//	cout << test1.HasExited(1) << endl;
//	cout << test1.HasExited(2) << endl;
//
//	test1.clear(9999);
//	test1.clear(1);
//	cout << test1.HasExited(1) << endl;
//	cout << test1.HasExited(9999) << endl;
//}
// int main()
// {
//	 Test1();
//	 cin.get(); cin.get();
// }


//针对面试题38的字典序算法
//using namespace std;
//void order()
//{
//	int arry[4] = { 1,2,3,4 };//len==3;
//	int len = 4;
//	int j, k;
//
//	while (true)
//	{
//		cout << "test:" << endl;
//		for (int num = 0; num < 4; num++)
//		{
//			cout << arry[num];
//		}
//		for (j = len - 2; j >= 0 && arry[j] > arry[j + 1]; j--);//注意此处 j >= 0 判断条件在前
//		
//		if (j < 0) { return ; }//结束
//
//		for (k = len - 1; k > j&&arry[k] < arry[j]; k--);
//
//		swap(arry[k], arry[j]);
//
//		for (int l = j + 1, r = len - 1; l < r; l++, r--)
//			swap(arry[l], arry[r]);
//	}
//
//}
//
//#include <algorithm>
//#include<set>
//int main()
//{
//	//order();
//	string a[] = { "abc", "bac","acb","bac","cab","cba" };
//	set<string>a;
//	sort(a, a + 6);
//	for (int i = 0; i < 6; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cin.get(); cin.get();
//}

//using namespace std;
//int main()
//{
//	int *a = new int[2];
//	a[1] = a[0] = 1;
//	int t = a[1];
//	delete[]a;
//	return 0;
//}