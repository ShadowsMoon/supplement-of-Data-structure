//---典型编程题展示，求解-----//
#include<stack>
#include<vector>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//#include <iostream>
//using namespace std;
//int chu_yue(int x, int y)   
//{
//	int z = y;
//	while (x%y != 0)
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return z;
//}
//
//int chu_bei(int x, int y)   
//{
//	int a = 0, b = 0;
//	int temp = 0;
//	if (x < y)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	a = x * y;
//	while (y != 0)
//	{
//		b = x % y;
//		x = y;
//		y = b;
//	}
//	return a / x;
//
//}
//int main() {
//	int x, y, z;
//	cout << "请输入3个正整数 中间用空格隔开" << endl;
//	cin >> x >> y ;   
//	cout << "使用辗转相除求最大公约数得 " << chu_yue(x, y) << endl;          //辗转相除求最大公约数 
//	cout << "使用辗转相除求最小公倍数得 " << chu_bei(x, y) << endl;			//辗转相除求最小公倍数 
//	cin.get(); cin.get();
//	return 0;
//}

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

double hmean(double a, double b);
double gmean(double a, double b);
class hmeanf
{
private:
	   double v1; 
	   double v2;
public:
	hmeanf(double a,double b)

};


int main()
{
	double a, b, z;
	while (cin >> a >> b)
	{
		try {
			z = hmean(a, b);
			cout << "hmean true: " << z << endl;
			cout << "gmean true" << gmean << endl;
		}
		catch(const char *s)  //程序查找与异常类型匹配的catch块，该catch为char*，与引发异常类型匹配，将throw后的语句付给s，
		{
			cout << s << endl;
			cout << "enter a new pair"<<endl;
			continue;  //跳过循环剩余部分。
		}
		cout << "enter q to quit" << endl;
	}
	cin.get(); cin.get();
	return 0;
}
double hmean(double a, double b)
{
	if (a == -b)
		throw "a=-b not allowed"; //throw 语句跳转，当出错命令程序返回main，搜索hmean由try块调用的
	return a * b / (a + b);
}









