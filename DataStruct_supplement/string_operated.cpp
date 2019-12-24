
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<string>
//using namespace std;
////  https://blog.csdn.net/u010455041/article/details/50097251
//int main()
//{
//	int a = 2341, b = 234;
//	string A = "";
//	string B = "";
//	A += to_string(a);  //int类转为string类
//	A += to_string(b);
//	B += to_string(b);
//	B += to_string(a);
//	bool ju = A > B;             // string类可以直接比较大小，估计是按ascall 编码大小逐位比较
//	if (!ju)
//		cout << A << endl;
//
//	string t1 = "ab", t2 = "ac";
//	ju = t1 < t2;
//	if (ju)
//		cout << t1<< endl;
//	cin.get(); cin.get();
//}



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
	//char a1[] = "abc def";
	//char a2[] = "gh";
	//strcpy_s(a1, a2);   //将a2复制到a1   // strcpy(a1, a2);  old version 
	//cout << a1 << endl;
	//cout << strlen(a1) << endl;
	//char b1[] = "abc def";
	//char b2[] = "   a";
	//cout << strlen(b2) << endl;
	////strcat(b1, b2);                   //old version
	//int len = strlen(b1) + strlen(b2) + 1;
	//strcat_s(b1, len, b2);
	//cout << b1 << endl;
	//cout << strlen(b1) << endl;
	//char *b12 = b1 + strlen(b1)-1;
	//char *b11 = b1 + 4;
	//cout << b11 << endl;
	//cout<< b12 << endl;
	//char b3[100]= "abcdfegh";      //定义了100，但实际上还是8，因为处理字符串的函数根据空字符的位置，而不是数组长度来进行处理。
	//cout <<"length: "<< strlen(b3) << endl;
	//char b4[] = "ab\0cd";
	//cout << "b4 length: " << strlen(b4) << endl;

//
//	cin.get(); cin.get();
//}



//----------------------------题1-----------------------------------------------------------//
//从字符串string开始完整匹配子串sub，返回匹配到的字符个数。
//sub中如果出现'?'表示可以匹配一到三个除'\0'以外的任意字符。
//如果sub还有找不到匹配的字符，则说明不能完整匹配。
//如果能完整匹配，返回匹配到的字符个数，如果有多种匹配方式，返回匹配字符数最少的那个，如果不能完整匹配，返回 - 1
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


//---字符串减除问题，如"  abcd  "减除为"abcd'',两边只要涉及"  " and "|"，就去掉，中间的不用去-----//
//char类型大小为一个字节，int为4个字节
//传统char风格：
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
//		out[j] = in[i];   //赋值有问题？考虑string
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

//
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


