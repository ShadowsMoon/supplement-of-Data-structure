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
//----------类模板 重载，构造，析构测试---------------------------对数组向左移动K位
template<class T>
class Move_ve
{
private:
	int n,lo, hi;
public:
	Move_ve();
	Move_ve(std::vector<T>&B, int k);
	~Move_ve();
};

template<class T>
Move_ve<T>::Move_ve()
{
	std::cout << " Initialization the class" << std::endl;
	n = 0; lo = 0; hi = 0;
}
template<class T>
Move_ve<T>::Move_ve(std::vector<T>&B, int k)
{
	n = B.size();
	n = n % k;

}
template<class T>
Move_ve<T>::~Move_ve()
{
	std::cout << "finish" << std::endl;
}


#endif