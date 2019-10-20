#pragma once
#ifndef  DATA01_SUM
#define DATA01_SUM
#include <stack>
#include <exception>

//-----------------------------------
__int64 power_1(int n);
__int64 power_2(int n);
//-----------------------------------
//-------类模板，将数组倒转测试----------------------
template<class T> class Reverse
{
private:
	int lo; int hi;
	std::vector<T>a_final;
public:
	Reverse(std::vector<T> A, int n) { rev1(A,n); };
	void rev1(std::vector<T> A, int n);
	 void rev2(std::vector<T>A, int a, int b);

};

template<class T>
void Reverse<T>::rev1(std::vector<T> A, int n)
{
	 rev2(A, 0, n - 1);
}
template<class T>
void Reverse<T>:: rev2(std::vector<T>A, int a, int b)
{
	lo = a; hi = b;
	int mid;
	while (lo < hi)
	{
		mid = A[lo]; A[lo] = A[hi]; A[hi] = mid;
		lo++; hi--;
	}
	a_final.assign(A.begin(), A.end());
	std::cout << a_final.at(0);
};
//实现队列类；
//两个栈实现队列类
template<typename T>class Cqueue
{
public:
	Cqueue(void) {};
	~Cqueue(void) {};
	void appendTail(const T& node);
	T deleteHead();
private:
	std::stack<T>s1;      //stack 需要有相应的头文件和作用域解析运算符，否则出错
	std::stack<T>s2;
};
//template <typename T> Cqueue<T>::Cqueue(void)
//{
//}
//
//template <typename T> Cqueue<T>::~Cqueue(void)
//{
//}
//队列类操作
template<typename T>void Cqueue<T>::appendTail(const T& ele)   //模板类与类格式的差异
{
	std::cout << ele << ",";
	s1.push(ele);
}
template<typename T>T Cqueue<T>::deleteHead()
{
	if (s2.size() <= 0)
	{
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
	}
	//if (s2.size() == 0)
	//	 throw new exception("queue is empty");
	T data = s2.top();
	s2.pop();
	return data;
}



#endif