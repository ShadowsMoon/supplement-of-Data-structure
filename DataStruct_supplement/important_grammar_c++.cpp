//��¼C++������Ҫ�﷨����
//
#include<fstream>
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl; using std::string;
using std::ostream;
using std::fstream; //�ڶ����ļ��������ǿ����Լ�����Ϊin����out
using std::ios;                  //���ļ��ķ�ʽ����ios(��������ʽI/O��Ļ���)�ж���
using std::ifstream; //���ļ���Ϊ�����Դ
using std::ofstream;//���ļ���Ϊ���destination
//ofstream�Ǵ��ڴ浽Ӳ�̣�ifstream�Ǵ�Ӳ�̵��ڴ棬��ʵ��ν������������ڴ�ռ�
//atoi������     �ַ���     ת�������������京����ASCII to integer ����д��
//void test1()
//{
//	ofstream my_file;
//	my_file.open("example.txt",ios::app);
//	if (my_file.is_open())    	/*open is successful, proceed with output*/
//     	my_file << "abcd";
//	my_file.close();
//}
//void test2()
//{
//	const char* fileName = "test.txt";
//	ofstream file0;
//	file0.open(fileName, ios::app);  //ios::app ÿ��������ݣ����ļ�β����ʼ
//	for (int i = 1; i < 6; i++)
//	{
//		if (i % 2 == 1)
//			file0 << i*2 << ',';
//		else
//			file0 << "$*,";
//	}
//	file0.close();
//	ifstream fileIn1;
//	char ch;
//	fileIn1.open(fileName, ios::app);
//	while (!fileIn1.eof())   //.eof ���ļ����ļ�β��ʱ�򷵻�true
//	{
//		fileIn1 >> ch;   //���������һ���Զ�������һ���ַ�
//		cout << ch;
//	}
//	fileIn1.close();
//	cout << endl;
//}
//
//
//
//int main()
//{
//	//test1();
//     test2();
//
//	
//	const char* a = "1";
//	int m = atoi(a);
//	cout << m;
//	cin.get(); cin.get();
//	return 0;
//}


//
