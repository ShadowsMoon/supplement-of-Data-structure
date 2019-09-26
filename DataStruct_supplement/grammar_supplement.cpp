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

	//--------使用容器将整数转换二进制------------------------------------------------------------------------
  //  	int temp; int n = 8;
		//temp = n;
		//vector<int>L;
		//while (temp != 0)
		//{
		//	L.push_back(temp % 2);
		//	temp = temp>>1;
		//}
		//////-------------------------将vector内容全部打印---------------------------------------
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


//------------动态空间------------------------------
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

//列表生成方式：（举例）
//struct listnode
//{
//	int val;
//	listnode *next;
//};
//int main()
//{
//	listnode *head, *pre;  //头指向第一个
//	head = nullptr; pre = nullptr;
//	int a;
//	for (int i = 0; i < 5; i++)   //长度为5的列表
//	{
//		listnode *mi = new listnode;
//		cin >> a;
//		(*mi).val = a;
//		(*mi).next = nullptr;
//		if (head == nullptr)
//			head = mi;
//		else
//			pre->next = mi;
//		pre = mi;
//	}
//	while (head)
//	{
//		cout << head->val << " ";
//		head = head->next;
//	}
//	cin.get(); cin.get();
//}

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
//----------------栈举例----------------------------------------------------//
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
//	stack<char>b;
//	stack<char>s1 = cvt(s, 58, 2);
// //   s1.pop();     //s1 不完整的数据类型，无法完成实例操作
//	while (!s1.empty())
//	{
//		//printf("c%", s1.pop());  //直接pop打印会出错
//		cout << s1.top() << endl;  // top表示栈顶的引用
//		s1.pop();
//	}
//	//s.push('1');
//	//char a = s.top();
//	//cout << a << endl;
//	cin.get(); cin.get();
//	return 0;
//}
//-------------------------------------------------------------------------------------//

// char  compare string//

//int main()
//{
//
//	const char * a = "string1";      //常量char型，无法修改内容，但可以修改指向的地址
//	char b[] = "string2";
//	cout << "a: " << a << endl;
//	a = b;
//	a = a + 1;       //可通过该方法来近似删除首数据
//	cout << "a: " << a << endl;
//	int a_len = strlen(a);
//	cout << "a_len: " << a_len << endl;
//	//给定另一个char数组，将a的部分赋值的方法，注意末尾必须为   '\0'
//	char at[10]; 
//	int i = 0;
//	for (; i < a_len - 2; i++)
//	{
//		at[i] = *a; a++;
//	}
//	for (; i < 10-1; i++)
//	{
//		at[i] = '\0';
//	}
//	cout << at << endl;
//	const char* co = nullptr;   //赋值为空

	//------------------string --------------------------------------------------------------//

	//string a1 = { "string1" };
	//string b1 = nullptr;
	//string str = "HelloWorld!";     //初始化string类型，并具体赋值
	//const char* constc = nullptr;         //初始化const char*类型，并赋值为空
	//constc = str.c_str();                 //string类型转const char*类型
	//cout << constc << endl;


	//const char* cab = "Hello World!";     //初始化const char* 类型，并具体赋值
	//string strr;                        //初始化string类型
	//strr = cab;  //const char*类型转string类型
	//cout << str << endl;

//	cin.get(); cin.get();
//}

// char operator
//int main()
//{
//	//char a1[] = "abc def";
//	//char a2[] = "gh";
//	//strcpy_s(a1, a2);   //将a2复制到a1   // strcpy(a1, a2);  old version 
//	//cout << a1 << endl;
//	//cout << strlen(a1) << endl;
//	char b1[] = "abc def";
//	char b2[] = "   a";
//	//strcat(b1, b2);                   //old version
//	int len = strlen(b1) + strlen(b2) + 1;
//	strcat_s(b1, len, b2);
//	cout << b1 << endl;
//	cout << strlen(b1) << endl;
//	char *b12 = b1 + strlen(b1)-1;
//	char *b11 = b1 + 4;
//	cout << b11 << endl;
//	cout<< b12 << endl;
//	char b3[100]= "abcdfegh";      //定义了100，但实际上还是8，因为处理字符串的函数根据空字符的位置，而不是数组长度来进行处理。
//	cout <<"length: "<< strlen(b3) << endl;
//	char b4[] = "ab\0cd";
//	cout << "b4 length: " << strlen(b4) << endl;
//
//
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

//---------------------------二维数组---------------------
//int main()
//{
//	vector<int>a = { 1,2,3,4 };
//	vector<vector<int> >array1(3, vector<int>(4));
//	int row = array1.size();
//	int coul = array1[0].size();
//	cout << "row: " << row << " coul: " << coul;
//	array1[0] = a;
//	cout << array1[0][2] << endl;
//	cin.get(); cin.get();
//}


//---------------------------------------





















//---------------------------------------串匹配------------------------------------//
//
//typedef  int Size_t;
//int main()
//{
//	char a = 's';  //字符串和字符常量有本质区别。
//	char an[10] = "beat";
//	const char *p= "abaabbabaab" ; //字符串实际上表示的是地址，因此将地址付给指针//字符串字面值是常量，因此使用const
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