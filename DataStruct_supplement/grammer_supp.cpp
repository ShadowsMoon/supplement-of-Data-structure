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
//	//cout << "rand(1): " << rand() % 10 << endl;     // rand�������������ʹ��a+rand%b�ɵõ� [a��a+b]��Χ������   ͷ�ļ� stdio.h
//	//cout << "rand(2): " << rand() % 10 << endl;
//	//cout << "rand(2): " << rand() % 10 << endl;
//	srand(time(NULL));     //srand ��֤randÿ�β��������������һ������Ϊtime(NULL)Ϊ��ǰʱ�䡣
//	for (int i = 0; i < 10; i++)
//		cout << 100 + rand() % 200 << endl;
//	cin.get(); cin.get();
//}
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

//#include <iomanip>  
//cout << setiosflags(ios::fixed) << setprecision(2) << a << endl;  С���㱣����λ


//λͼ�ṹ(���ڴ��ģ���ݵĴ��ڵ�ȷ��)
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
//		_v.resize((num >> 5) + 1);       //num/32,ȷ������
//	}
//
//	void Set(size_t num) //set 1
//	{
//		size_t index = num >> 5;
//		size_t pos = num % 32;     //ȷ���˸���������ƶ���λ
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
//	vector<size_t> _v;     //�������Ͳ�ͬ����Ӱ����λ����������char���ͣ�һ���ֽڣ�8b����� >>3 ;  int���ͣ�>>5
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
////���ڼ������λ�Ĳ����ȳ˳�������Ч�ʣ��������i / 32������λ�Ʋ�����i >> 5������i % 32������i & 31��
///* URL https://blog.csdn.net/yanerhao/article/details/72848524 */
//void test2(int value,int m)
//{
//	int v1 = value >> m;    //�ȼ��� value/2^m;
//	int v2 = value & (m-1);   //�ȼ��� value%m
//	cout << "value/2^m: " << v1<<endl;
//	cout << "value%2^m: " << v2<<endl;
//}
//int main()
//{
//    //test1();
//    test2(29, 3);
//	int t3 = 5 >> 1;
//	int t4 = 5 << 2;
//	cout << "t3: "<<t3<<" t4: "<<t4;
//	cin.get(); cin.get();
//}


// BitMap test: (100000�����ݿ����ж����е����Ƿ����)
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
//	// Test1();
//	 int num = 35;
//	 int a = 1 << (num & 31);
//	 cout << a;
//	 cin.get(); cin.get();
// }


//���������38���ֵ����㷨
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
//		for (j = len - 2; j >= 0 && arry[j] > arry[j + 1]; j--);//ע��˴� j >= 0 �ж�������ǰ
//		
//		if (j < 0) { return ; }//����
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


//void a(char **p,int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void main(void)
//{
//	char *str = NULL;
//	 a(&str,100);
//	 strcpy(str, "hello");
//	cout << str;
//	cin.get(); cin.get();
//}


//void a(char **p,int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void main(void)
//{
//	char *str = (char*)malloc(100);
//	 strcpy(str, "hello");
//	 free(str);
//	 if (str != NULL)
//	 {
//		 strcpy(str, "world");
//		 cout << str;
//	 }
//	cin.get(); cin.get();
//}




// String

//class String
//{
//public:
//	String(const char *str = NULL); // ��ͨ���캯��
//	String(const String &other); // �������캯��
//	~String(void);     //
//	String & operator =(const String &other); // ��ֵ����
//private:
//	char *m_data;
//};
//
//
//String::String(const char *str)
//{
//	if (str == NULL)
//	{
//		m_data = new char[1];
//		m_data = '\0';
//	}
//	else
//	{
//		int dataL = strlen(str);
//	  	m_data = new char[dataL + 1];
//		if (m_data != nullptr)
//			strcpy_s(m_data, (dataL + 1), str);
//		else
//			return;
//	}
//}
//
//
//
//String::~String(void)
//{
//	delete[] m_data;
//}
//
//String::String(const String &other)
//{
//	int length = strlen(other.m_data);
//	m_data = new char[length + 1];
//	if (m_data != nullptr)
//		strcpy_s(m_data, (length + 1), other.m_data);
//	else
//		return;
//
//}
//
//String & String::operator=(const String &other)
//{
//	if (this == &other)
//		return *this;
//
//	delete[] m_data;
//	int length = strlen(other.m_data);
//	m_data = new char[length + 1];
//	if (m_data != nullptr)
//	{
//		strcpy_s(m_data, (length + 1), other.m_data);
//		return *this;
//	}
//}
//
//
//
//
//
//
//
//
//
//#define Max_num 1000
//
//void myreverse(char *str, int n);
//int LoopMove(char * pcStr, int iSteps)
//{
//	char str[Max_num];
//	int n = strlen(pcStr);
//	if (iSteps <= 0)
//		return -1;
//	iSteps %= n;
//	myreverse(pcStr, n - iSteps);     //���ƣ�myreverse(str,m);  
//	myreverse(pcStr + n - iSteps, iSteps);   //���ƣ�myreverse(str+m,n-m);  
//	myreverse(pcStr, n);
//	return 0;
//}
//
//void myreverse(char *str, int n)
//{
//	int p1 = 0, p2 = n - 1;
//	char tmp;
//	while (p1 < p2)
//	{
//		tmp = str[p1];
//		str[p1] = str[p2];
//		str[p2] = tmp;
//		p1++;
//		p2--;
//	}
//}
//
//int main()
//{
//	char str[] = "abcd";
//	 LoopMove(str,  2);
//	 cout << str;
//	 cin.get(); cin.get();
//	return 0;
//}




