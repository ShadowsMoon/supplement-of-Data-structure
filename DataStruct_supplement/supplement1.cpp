//-----c++ ֪ʶ��һ������-----------------------------//
//---------------------��ģ��-----------------------------//
#include<iostream>
#include<stdio.h>
#include<string>
#include   <stdlib.h>  
#include<ctime>
#include<list>
#include<array>
#include<vector>
#include"data_structe.h"
using namespace std;

//--------------��������Ľ��汾-----------------
template<typename T>
int bubble_fur(vector<T>&v1, int lo, int hi)
{
	int last = lo;
	while (++lo < hi)
	{
		if (v1[lo - 1] > v1[lo])
		{
			last = lo;
			swap(v1[lo - 1], v1[lo]);
		}
	}
	return last;
}


template<typename T>
vector<T> &bubblesort_fur(vector<T>&v1, int lo, int hi)
{
	while (lo < (hi = bubble_fur(v1, lo,  hi)));
	return v1;
}

//---�޷���ͷ�ļ���ʽ���룬����ֻ������ſ��ԣ���Ϊ�漰��ģ��------

int main()
{
	vector<int>a = { 2, 1, 4, 3, 5, 6, 7, 8};   //���㷨ֻ�ܱ�֤������У��� { 2, 1, 8, 7, 3, 4, 5, 6}������
	vector<int>b(8);
	int lo = 0; int hi = 7;
    bubblesort_fur(a, lo, hi);
	for (auto b = a.begin(); b < a.end(); b++)
		cout <<*b << endl;
	cin.get(); cin.get();
};
