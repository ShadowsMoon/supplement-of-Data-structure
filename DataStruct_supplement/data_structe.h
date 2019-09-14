#pragma once
#ifndef  DATA01_SUM
#define DATA01_SUM
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
}



#endif