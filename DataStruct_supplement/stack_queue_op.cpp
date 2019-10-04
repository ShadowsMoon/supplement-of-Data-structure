
#include<stack>
#include<vector>
#include<iostream>



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



//-----------------stack 实例：10进制转换n进制---------------------------------------------------------------//

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

//-----------------stack 括号匹配问题：判断括号是否匹配？---------------//
//思想：去掉紧邻的括号对不影响该括号序列的状态，（去掉紧邻的方式可用栈来实现）
//思考：用计数器计数的方式也可以实现，但是对多个不同类型匹配问题就不行，而栈依然有效
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
