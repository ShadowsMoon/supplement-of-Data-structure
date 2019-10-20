#pragma once
#ifndef  DATA01_SUM
#define DATA01_SUM
#include <stack>
#include <exception>

//-----------------------------------
__int64 power_1(int n);
__int64 power_2(int n);
//-----------------------------------
//-------��ģ�壬�����鵹ת����----------------------
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
//ʵ�ֶ����ࣻ
//����ջʵ�ֶ�����
template<typename T>class Cqueue
{
public:
	Cqueue(void) {};
	~Cqueue(void) {};
	void appendTail(const T& node);
	T deleteHead();
private:
	std::stack<T>s1;      //stack ��Ҫ����Ӧ��ͷ�ļ��������������������������
	std::stack<T>s2;
};
//template <typename T> Cqueue<T>::Cqueue(void)
//{
//}
//
//template <typename T> Cqueue<T>::~Cqueue(void)
//{
//}
//���������
template<typename T>void Cqueue<T>::appendTail(const T& ele)   //ģ���������ʽ�Ĳ���
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