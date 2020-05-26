//记录C++面试重要语法考点
//
#include<fstream>
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::endl; using std::string;
using std::ostream;
using std::fstream; //在定义文件流对象是可以自己设置为in或者out
using std::ios;                  //打开文件的方式在类ios(是所有流式I/O类的基类)中定义
using std::ifstream; //将文件作为输入的源
using std::ofstream;//将文件作为输出destination
//ofstream是从内存到硬盘，ifstream是从硬盘到内存，其实所谓的流缓冲就是内存空间
//atoi函数把     字符串     转换成整型数。其含义是ASCII to integer 的缩写。
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
//	file0.open(fileName, ios::app);  //ios::app 每次添加内容，从文件尾部开始
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
//	while (!fileIn1.eof())   //.eof 读文件到文件尾的时候返回true
//	{
//		fileIn1 >> ch;   //输入完后，下一次自动跳动下一个字符
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
