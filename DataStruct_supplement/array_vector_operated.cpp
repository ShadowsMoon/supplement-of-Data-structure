
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

//--------ʹ������������ת��������------------------------------------------------------------------------
  //  	int temp; int n = 8;
		//temp = n;
		//vector<int>L;
		//while (temp != 0)
		//{
		//	L.push_back(temp % 2);
		//	temp = temp>>1;
		//}
		//////-------------------------��vector����ȫ����ӡ---------------------------------------
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

//------------��̬�ռ�------------------------------
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




//---------------------------��ά����---------------------
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


//--------��������--------------------------------------------------//(success)

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
//				bool sorted = true; //���������־
//				while (++lo < hi) //�������ң���һ����������Ԫ��
//					if (a[lo - 1] > a[lo]) { //��������
//						sorted = false; //��ζ����δ�������򣬲���Ҫ
//						swap(a[lo - 1], a[lo]); //ͨ������ʹ�ֲ�����
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
//				bool sorted = true; //���������־         С���ɣ�����ֵfalse��������true
//				while (++lo < hi) //�������ң���һ����������Ԫ��
//					if (a[lo - 1] < a[lo]) { //��������
//						sorted = false; //��ζ����δ�������򣬲���Ҫ
//						swap(a[lo - 1], a[lo]); //ͨ������ʹ�ֲ�����
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










//--------------��������Ľ��汾-----------------
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

//---�޷���ͷ�ļ���ʽ���룬����ֻ������ſ��ԣ���Ϊ�漰��ģ��------

//int main()
//{
//	vector<int>a = { 2, 1, 4, 3, 5, 6, 7, 8};   //���㷨ֻ�ܱ�֤������У��� { 2, 1, 8, 7, 3, 4, 5, 6}������
//	vector<int>b(8);
//	int lo = 0; int hi = 7;
//    bubblesort_fur(a, lo, hi);
//	for (auto b = a.begin(); b < a.end(); b++)
//		cout <<*b << endl;
//	cin.get(); cin.get();
//};
