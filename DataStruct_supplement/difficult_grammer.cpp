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


//----��̬��Ա�����;�̬��Ա����
// ԭ�����ӣ�https ://blog.csdn.net/qq_37375427/article/details/78747636
// example 1:
//ͳ���ڳ��������ڼ�ĳ����Ķ������Ŀ
//��֤����İ�ȫ�ԣ�����ʹ��ȫ�ֱ�����
//��ʱ���Ի�ȡ��ǰ�������Ŀ
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
//Test gTest;  //һ��ȫ�ֶ���
//int main()
//{
//	Test t1;  //�ֲ�����
//	Test t2;   //�ֲ�����
//	cout << "first: "<<gTest.getCount() << endl;
//	cout << "second: " <<t1.getCount() << endl;
//	cout << "three: " << t2.getCount() << endl;
//	cin.get(); cin.get();
//	return 0;
//}


//ʹ�þ�̬��Ա����֮��
#include <stdio.h>

//class Test
//{
//private:
//	//������ж��󶼹���һ����̬��Ա������10�����󣬻���10��testtt����ֻ��һ��cCount��PS���鱾426
//	static int cCount;     
//	//const int testtt = 0;  //���ڽ��г�ʼ��ֵʱ������Ϊ����
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
////��̬���Ա�ɵ��������������ʼ������Ϊ��̬���ǵ����洢�ģ����Ƕ������ɳɷ� ���鱾428��
//int Test::cCount = 0;   // ע�⣺��������������ʼ����̬��Ա������������������η����ڴ棬�����������ڴ棩
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


// ԭ�����ӣ�https ://blog.csdn.net/shansusu/article/details/44780873
// �ı��ļ���ʽ������Ƹ�ʽ������
//#include<iostream>
//using namespace std;
//
//void write(int *p, char *path) {
//	FILE *fp;
//	if ((fp = fopen(path, "wb")) == NULL) {
//		cout << "�ļ���ʧ�ܣ�" << endl;
//		exit(0);    //�����˳���ϵͳ��
//	}
//
//	if (fwrite(p, sizeof(int), 1, fp) != 1) {
//		cout << "д��ʧ�ܣ�" << endl;
//	}
//	fclose(fp);
//}
//
//int read(char *path) {
//	int a;
//	FILE *fp;
//	if ((fp = fopen(path, "r")) == NULL) {
//		cout << "�ļ���ʧ�ܣ�" << endl;
//	}
//
//	fseek(fp, 0L, SEEK_END);
//	int len = ftell(fp);
//	rewind(fp);
//
//	if (fread(&a, 1, len, fp) != len) {
//		cout << "��ȡʧ��" << endl;
//	}
//	fclose(fp);
//
//	return a;
//}
//
//int main() {
//	//char *name = "I'm a student.����";
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


