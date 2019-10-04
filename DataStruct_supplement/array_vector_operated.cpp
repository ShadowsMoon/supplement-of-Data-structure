
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

//--------使用容器将整数转换二进制------------------------------------------------------------------------
  //  	int temp; int n = 8;
		//temp = n;
		//vector<int>L;
		//while (temp != 0)
		//{
		//	L.push_back(temp % 2);
		//	temp = temp>>1;
		//}
		//////-------------------------将vector内容全部打印---------------------------------------
		////// way1:
		//int na= L.size() - 1;
		//for (int m = 0; m < na; m++)
		//{
		//	cout << L[m] << endl;
		//}
		////way2:
		/*for (vector<int>::iterator iter = L.begin(); iter != L.end(); iter++)
			cout<<*iter;
		cout<<endl;*/
		////way3:

		//const int *f = &L.front();  const int *s = &L.back();
		//for (; f <= s; f++)
		//{
		//	cout << *f << endl;
		//}
//------------------------------------------------------------------------------------------------

//------------动态空间------------------------------
//int main()
//{
//	vector<int>a = { 1,2,3,4,5 };
//	vector<int>b(5);                      //directly copy  is same as array
//	b = a;
//	for (vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
//		cout << *iter << endl;
//	for (auto it = b.begin(); it < b.end(); it++)
//		cout << *it << endl;
//
//	cin.get(); cin.get();
//	return 0;
//}
//----------------------------------------------------




//---------------------------二维数组---------------------
//int main()
//{
//	vector<int>a = { 1,2,3,4 };
//	vector<vector<int> >array1(3, vector<int>(4));
//	int row = array1.size();
//	int coul = array1[0].size();
//	cout << "row: " << row << " coul: " << coul;
//	array1[0] = a;
//	cout << array1[0][2] << endl;
//	cin.get(); cin.get();
//}

//---------------------------------------


//--------数组排序--------------------------------------------------//(success)

//#include<vector>
//#include<iostream>
//
//using namespace std;
//vector<int> sorted(vector<int> a, bool b)
//{
//	int lo = 0; int hi = a.size();
//	bool sorted = false;
//	if (b == true)
//	{
//		
//		for (int i = hi; i > 0; i--)
//		{
//			int lo = 0;
//			if (sorted == false)
//			{
//				bool sorted = true; //整体有序标志
//				while (++lo < hi) //自左向右，逐一检查各对相邻元素
//					if (a[lo - 1] > a[lo]) { //若逆序，则
//						sorted = false; //意味着尚未整体有序，并需要
//						swap(a[lo - 1], a[lo]); //通过交换使局部有序
//					}
//			}
//			else
//				break;
//		}
//	}
//	else
//	{
//		for (int i = hi; i > 0; i--)
//		{
//			int lo = 0;
//			if (sorted == false)
//			{
//				bool sorted = true; //整体有序标志         小技巧：外面值false，里面置true
//				while (++lo < hi) //自左向右，逐一检查各对相邻元素
//					if (a[lo - 1] < a[lo]) { //若逆序，则
//						sorted = false; //意味着尚未整体有序，并需要
//						swap(a[lo - 1], a[lo]); //通过交换使局部有序
//					}
//			}
//			else
//				break;
//		}
//	}
//	return a;
//}
//
//int main()
//{
//	vector<int> a = { 2,1,5,4 ,8,3};
//	bool t = false;
//	vector<int> b = sorted(a, t);
//	for (int i = 0; i < b.size(); i++)
//		cout << b[i] << endl;
//	cin.get(); cin.get();
//	return 0;
//}

//










//--------------起泡排序改进版本-----------------
//template<typename T>
//int bubble_fur(vector<T>&v1, int lo, int hi)
//{
//	int last = lo;
//	while (++lo < hi)
//	{
//		if (v1[lo - 1] > v1[lo])
//		{
//			last = lo;
//			swap(v1[lo - 1], v1[lo]);
//		}
//	}
//	return last;
//}
//
//
//template<typename T>
//vector<T> &bubblesort_fur(vector<T>&v1, int lo, int hi)
//{
//	while (lo < (hi = bubble_fur(v1, lo,  hi)));
//	return v1;
//}

//---无法以头文件形式放入，估计只能以类才可以，因为涉及到模板------

//int main()
//{
//	vector<int>a = { 2, 1, 4, 3, 5, 6, 7, 8};   //此算法只能保证这个可行，但 { 2, 1, 8, 7, 3, 4, 5, 6}不可行
//	vector<int>b(8);
//	int lo = 0; int hi = 7;
//    bubblesort_fur(a, lo, hi);
//	for (auto b = a.begin(); b < a.end(); b++)
//		cout <<*b << endl;
//	cin.get(); cin.get();
//};
