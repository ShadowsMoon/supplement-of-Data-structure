//---���ͱ����չʾ�����-----//
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
//	cout << "������3�������� �м��ÿո����" << endl;
//	cin >> x >> y ;   
//	cout << "ʹ��շת��������Լ���� " << chu_yue(x, y) << endl;          //շת��������Լ�� 
//	cout << "ʹ��շת�������С�������� " << chu_bei(x, y) << endl;			//շת�������С������ 
//	cin.get(); cin.get();
//	return 0;
//}

//�쳣
//����1������abort()��ֱ����ֹ������򣬲������ص�main
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

//����2 ���ش�����
#include<cfloat>   //�����˸��������ݵ����ֵ�����籾�� DBL_MAX
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


//����3 ʹ���쳣����������
//double hmean(double a, double b);
//int main()
//{
//	double a, b, z;
//	while (cin >> a >> b)
//	{
//		try {
//			z = hmean(a, b);
//		}
//		catch(const char *s)  //����������쳣����ƥ���catch�飬��catchΪchar*���������쳣����ƥ�䣬��throw�����丶��s��
//		{
//			cout << s << endl;
//			cout << "enter a new pair"<<endl;
//			continue;  //����ѭ��ʣ�ಿ�֡�
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
//		throw "a=-b not allowed"; //throw �����ת��������������򷵻�main������hmean��try����õ�
//	return a * b / (a + b);
//}

//����3 ��һ������
//#include"data_structe.h";
//double hmean(double a, double b);
//double gmean(double a, double b);
//inline void bad_hmean::hmf()  // �����������������ͣ����������к�����
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
//			continue;  //����ѭ��ʣ�ಿ�֡�
//		}
//		catch (bad_gmean &gm)  //
//		{
//			const char*lin = gm.gmf();      //ע���ַ���һ�����������ʽ���壬��Ϊ�ַ����ַ������ǵ�ַ
//			cout << lin << endl;  // *linָ���ǵ�һ���ַ�
//			cout << "enter a new pair" << endl;
//			continue;  //����ѭ��ʣ�ಿ�֡�
//		}
//		cout << "enter q to quit" << endl;
//	}
//	cin.get(); cin.get();
//	return 0;
//}
//double hmean(double a, double b)
//{
//	if (a == -b)
//		throw bad_hmean(a,b); //    ��������󣬻���catch��ƥ��ͬ���������
//	return a * b / (a + b);
//};
//double gmean(double a, double b)
//{
//	if (a<0||b<0)
//		throw bad_gmean(a,b); //
//	return sqrt(a*b);
//};

//exception��
#include<exception>




