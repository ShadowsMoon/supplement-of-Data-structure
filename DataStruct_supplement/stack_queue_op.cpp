
#include<stack>
#include<vector>
#include<iostream>



//----------------ջ����----------------------------------------------------//
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



//-----------------stack ʵ����10����ת��n����---------------------------------------------------------------//

//stack<char>& cvt(stack<char>&s, int n, int base)
//{
//	char digit[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//	while (n>0)
//	{
//		s.push(digit[n%base]);
//		n = n / base;
//	}
//	return s;
//}
//
// int main()
//{
//	stack<char> s;
//   stack<char>s1= cvt(s, 58, 2);
//	while (!s1.empty())
//	{
//		printf("c%", s1.pop());
//		//cout << s1.pop() << endl;
//	}
//	cin.get(); cin.get();
//	return 0;
//}

//-----------------stack ����ƥ�����⣺�ж������Ƿ�ƥ�䣿---------------//
//˼�룺ȥ�����ڵ����ŶԲ�Ӱ����������е�״̬����ȥ�����ڵķ�ʽ����ջ��ʵ�֣�
//˼�����ü����������ķ�ʽҲ����ʵ�֣����ǶԶ����ͬ����ƥ������Ͳ��У���ջ��Ȼ��Ч
//bool paren(const char exp[], int lo, int hi)
//{
//	stack<char>ju;
//	for (int i = lo; i < hi; i++)
//		if (exp[i] == '(')
//			ju.push(exp[i]);
//		else if (exp[i] == ')')
//		{
//			if (!ju.empty())
//				ju.pop();
//			else
//				return false;
//			   //break;
//		}
//		else
//			cout << ju.size() << endl;
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
