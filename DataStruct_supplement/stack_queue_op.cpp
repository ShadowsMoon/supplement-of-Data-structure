#include<stack>
#include<vector>
#include<iostream>
#include <exception>
#include<queue>
#include"data_structe.h"

using namespace std;


//////----------------ջ����----------------------------------------------------//
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
// //   s1.pop();     //s1 ���������������ͣ��޷����ʵ������
//	while (!s1.empty())
//	{
//		//printf("c%", s1.pop());  //ֱ��pop��ӡ�����
//		cout << s1.top() << endl;  // top��ʾջ��������
//		s1.pop();
//	}
//	//s.push('1');
//	//char a = s.top();
//	//cout << a << endl;
//	cin.get(); cin.get();
//	return 0;
//}
//-------------------------------------------------------------------------------------//




//-----------------stack ����ƥ�����⣺�ж������Ƿ�ƥ�䣿---------------//
//˼�룺ȥ�����ڵ����ŶԲ�Ӱ����������е�״̬����ȥ�����ڵķ�ʽ����ջ��ʵ�֣�
//˼�����ü����������ķ�ʽҲ����ʵ�֣����ǶԶ����ͬ����ƥ������Ͳ��У���ջ��Ȼ��Ч
//bool paren(const char exp[], int lo, int hi)
//{
//	stack<char>ju;
//	for (int i = lo; i < hi; i++)
//	{
//		if (exp[i] == '(')
//			ju.push(exp[i]);
//		else if (exp[i] == ')')
//		{
//			if (!ju.empty())
//				ju.pop();
//			else
//				return false;
//			//break;
//		}
//		else
//			cout << ju.size() << endl;
//	}
//	return  ju.empty();
//}
//
//int main()
//{
//	char exp1[] = { "((adc)dcv)bdbsvsm(jhm)" };
//   string exp2 = { "((adc)dcv)bdb)svsm(jhm)" };
//	bool li1 = paren(exp1, 0, strlen(exp1));
//	cout << "final judgement: " << li1 << endl;   //false:li1=0  
//	cin.get(); cin.get();
//
//}



//int main()
//{
//
//	char ch[] = {'a','b','c','d','e'};
//	Cqueue<char> test;       //�����ģ�������Ϊû�в��������б�<char>
//	for (int i = 0; i < 5; i++)
//	{
//		test.appendTail(ch[i]);
//	}
//	char testnode = test.deleteHead();    
//	if (testnode == 'a')
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//	 testnode = test.deleteHead();
//	if (testnode == 'b')
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//	test.appendTail('A');
//	testnode = test.deleteHead();
//	if (testnode == 'c')
//		cout << "true" << endl;
//	else
//		cout << "false" << endl;
//	cin.get(); cin.get();
//}

//int main() 
//{
//	stack<int> *odd = new stack<int>;
//	stack<int> even;
//	int *a = new int[10];
//	a[0] = 10;
//	even.push(2);
//	odd->push(1);
//	delete odd;
//	delete[]a;
//	cout << "test";
//	cin.get(); cin.get();
//	return 0;
//}

