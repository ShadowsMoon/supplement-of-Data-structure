//异常
//方法1：调用abort()：直接终止错误程序，不会跳回到main
#include<cstdlib>   //abort
//void hmean(double a, double b);
//int main()
//{
//	int n = 10;
//	double a, b;
//	cout << "test: " << endl;
//	while (n--)
//	{
//		cin >> a >> b;
//		hmean(a, b);
//	}
//	cin.get(); cin.get();
//}
//void hmean(double a, double b)
//{
//	if (a == -b)
//	{
//		cout << "false: it is limited" << endl;
//		abort();
//	}
//	double c = a * b / (a + b);
//	cout << "the result is" << "\t";
//	cout << c;
//}

//方法2 返回错误码
#include<cfloat>   //定义了浮点型数据的最大值，例如本例 DBL_MAX
//bool hmean(double a, double b, double &ans);
//int main()
//{
//	int n = 11;
//	double a, b, z;
//	cout << "test: " << endl;
//	while (n--)
//	{
//		cin >> a >> b;
//		if (hmean(a, b, z))
//			cout << "that true:" << "\t" << z << endl;
//		else
//			cout << z<<"  :is limited,try again" << " ";
//		cout << "enter  <q> to quit"<<endl;
//	}
//	cin.get(); cin.get();
//	return 0;
//}
//bool hmean(double a, double b, double &ans)
//{
//	if (a == -b)
//	{
//		ans = DBL_MAX;
//		return false;
//	}
//	else
//	{
//		ans = a * b / (a + b);
//		return true;
//	}
//}


//方法3 使用异常机制来处理
//double hmean(double a, double b);
//int main()
//{
//	double a, b, z;
//	while (cin >> a >> b)
//	{
//		try {
//			z = hmean(a, b);
//		}
//		catch(const char *s)  //程序查找与异常类型匹配的catch块，该catch为char*，与引发异常类型匹配，将throw后的语句付给s，
//		{
//			cout << s << endl;
//			cout << "enter a new pair"<<endl;
//			continue;  //跳过循环剩余部分。
//		}
//		cout << "that true: " << z << endl;
//		cout << "enter q to quit" << endl;
//	}
//	cin.get(); cin.get();
//	return 0;
//}
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw "a=-b not allowed"; //throw 语句跳转，当出错命令程序返回main，搜索hmean由try块调用的
//	return a * b / (a + b);
//}

//方法3 进一步提升
//#include"data_structe.h";
//double hmean(double a, double b);
//double gmean(double a, double b);
//inline void bad_hmean::hmf()  // 内联函数，返回类型，类名，类中函数名
//{
//	cout << v1 << "= " << v2 << "hmean: invaild argument: a=-b" << std::endl;
//};
//inline const char * bad_gmean::gmf()
//{
//	return "gmean() arguments should be >0 ";
//};
//int main()
//{
//	double a, b, z;
//	while (cin >> a >> b)
//	{
//		try {
//			z = hmean(a, b);
//			cout << "hmean true: " << z << endl;
//			cout << "gmean true: " << gmean(a,b) << endl;
//		}
//		catch(bad_hmean &hm)  //   ??
//		{
//			hm.hmf();
//			cout << "try again\t"<<endl;
//			continue;  //跳过循环剩余部分。
//		}
//		catch (bad_gmean &gm)  //
//		{
//			const char*lin = gm.gmf();      //注：字符串一般可以这种形式定义，因为字符串字符本质是地址
//			cout << lin << endl;  // *lin指标是第一个字符
//			cout << "enter a new pair" << endl;
//			continue;  //跳过循环剩余部分。
//		}
//		cout << "enter q to quit" << endl;
//	}
//	cin.get(); cin.get();
//	return 0;
//}
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw bad_hmean(a,b); //    返回类对象，会在catch中匹配同样的类对象
//	return a * b / (a + b);
//};
//double gmean(double a, double b)
//{
//	if (a<0||b<0)
//		throw bad_gmean(a,b); //
//	return sqrt(a*b);
//};

//exception类
#include<exception>


//----静态成员函数和静态成员变量
// 原文链接：https ://blog.csdn.net/qq_37375427/article/details/78747636
// example 1:
//统计在程序运行期间某个类的对象的数目
//保证程序的安全性（不能使用全局变量）
//随时可以获取当前对象的数目
#include <stdio.h>
#include<iostream>
using std::cout; using std::cin; using std::endl; using std::string;
//class Test
//{
//private:
//	int mCount;
//public:
//	Test() : mCount(0)
//	{
//		mCount++;
//	}
//	~Test()
//	{
//		--mCount;
//	}
//	int getCount()
//	{
//		return mCount;
//	}
//};
//Test gTest;  //一个全局对象
//int main()
//{
//	Test t1;  //局部对象
//	Test t2;   //局部对象
//	cout << "first: "<<gTest.getCount() << endl;
//	cout << "second: " <<t1.getCount() << endl;
//	cout << "three: " << t2.getCount() << endl;
//	cin.get(); cin.get();
//	return 0;
//}


//使用静态成员变量之后
#include <stdio.h>

//class Test
//{
//private:
//	//类的所有对象都共享一个静态成员，若有10个对象，会有10个testtt，但只有一个cCount，PS：书本426
//	static int cCount;     
//	//const int testtt = 0;  //类内进行初始化值时，必须为常量
//public:
//	Test()
//	{
//		cCount++;
//	}
//	~Test()
//	{
//		--cCount;
//	}
//   int GetCount()
//	{
//		return cCount;
//	}
//};
////静态类成员可单独在类声明外初始化，因为静态类是单独存储的，不是对象的组成成分 （书本428）
//int Test::cCount = 0;   // 注意：不能在类声明初始化静态成员变量，（声明描述如何分配内存，但并不分配内存）
//Test test;
//int main()
//{
//	cout<<"count =  "<< test.GetCount()<<endl;
//
//	Test t1;
//	Test t2;
//
//	cout << "count =  " << t1.GetCount()<<endl;
//	cout << "count =  " << t2.GetCount()<<endl;
//
//	Test* pt = new Test();
//
//	cout<<"count = "<< pt->GetCount()<<endl;
//
//	delete pt;
//
//	cout<<"count = "<<test.GetCount();
//	cin.get(); cin.get();
//	return 0;
//}


// 原文链接：https ://blog.csdn.net/shansusu/article/details/44780873
// 文本文件格式与二进制格式的区别
//#include<iostream>
//using namespace std;
//
//void write(int *p, char *path) {
//	FILE *fp;
//	if ((fp = fopen(path, "wb")) == NULL) {
//		cout << "文件打开失败！" << endl;
//		exit(0);    //程序退出，系统级
//	}
//
//	if (fwrite(p, sizeof(int), 1, fp) != 1) {
//		cout << "写入失败！" << endl;
//	}
//	fclose(fp);
//}
//
//int read(char *path) {
//	int a;
//	FILE *fp;
//	if ((fp = fopen(path, "r")) == NULL) {
//		cout << "文件打开失败！" << endl;
//	}
//
//	fseek(fp, 0L, SEEK_END);
//	int len = ftell(fp);
//	rewind(fp);
//
//	if (fread(&a, 1, len, fp) != len) {
//		cout << "读取失败" << endl;
//	}
//	fclose(fp);
//
//	return a;
//}
//
//int main() {
//	//char *name = "I'm a student.李雷";
//	char path[] = "./test.txt";
//	int b = 22;
//	write(&b, path);
//
//	//char *content;
//	int a;
//	a = read(path);
//
//	cout << "content:" << a << endl;
//	cin.get(); cin.get();
//	return 0;
//}


