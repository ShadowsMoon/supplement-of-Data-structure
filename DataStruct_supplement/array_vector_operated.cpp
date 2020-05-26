
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;



//https://blog.csdn.net/latte_z/article/details/17049479
//#include<algorithm>    //sort 排序算法，默认从小到大，可以进行修改
//bool cmp(int a, int b)
//{
//	if (a < b)
//		return true;
//	return false;
//}
//int main()
//{
//	vector<int>t1 = { 5,2,1,7,4,8,3 };
//	sort(t1.begin(), t1.end(), cmp);
//	for (int i = 0; i < t1.size(); i++)
//		cout << t1[i] << endl;
//	cin.get(); cin.get();
//	return 0;
//}
//


//--------使用容器将整数转换二进制------------------------------------------------------------------------
//int main()
//{
//	  	int temp; int n = 8;
//		  temp = n;
//		  vector<int>L;
//		  while (temp != 0)
//		  {
//		  	L.push_back(temp % 2);
//		  	temp = temp>>1;
//		  }
//		  ////-------------------------将vector内容全部打印---------------------------------------
//		  //// way1:
//		  int na= L.size() - 1;
//		  for (int m = 0; m <=na; m++)
//		  {
//		  	cout << L[m] << endl;
//		  }
//		  ////way2:
//		  /*for (vector<int>::iterator iter = L.begin(); iter != L.end(); iter++)
//			  cout<<*iter;
//		  cout<<endl;*/
//		  ////way3:
//
//		  //const int *f = &L.front();  const int *s = &L.back();
//		  //for (; f <= s; f++)
//		  //{
//		  //	cout << *f << endl;
//		  //}
//		  cin.get(); cin.get();
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
//using std::vector; using std::cout; using std::cin; using std::endl;
//int main()
//{
//	// way 1:
//	//vector<int>a = { 1,2,3,4 };
//	//vector<vector<int> >array1(3, vector<int>(4));
//	//int row = array1.size();
//	//int coul = array1[0].size();
//	//cout << "row: " << row << " coul: " << coul<<endl;
//	//array1[0] = a;
//	//cout << array1[0][2] << endl;
//	//way 2
//	int twodim[2][2] = { {1,2},{3,4} };
//	const char *data[] = { "first","second" };    //  注意二维数组申请的区别
//	char datS[][20] = { "fir","sec" };         //      区别
//	for (int i = 0; i < 2; i++)
//	{
//		cout << data[i] <<" >"<<datS[i]<< ":\t";            //注意前面表示指向行第一个数据。
//		for (int j = 0; j < 2; j++)
//		{
//			cout << twodim[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << twodim[1]<< "\t";   //注意与字符串形式的结果的不同，
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

//int main()
//{
//
//	vector<int>a = { 1,2,3,4,5 };
//	vector<int>b = { 2,3,4,5,6,7,8 };
//	vector<int>c;
//	vector<int>::iterator iter = a.begin();
//	cout << c.size() << endl;
//	while (*iter != 4)
//		iter++;
//	int length = iter - a.begin();
//	vector<int>::iterator bb = b.begin() + length;
//	cout << *(bb+1)<< endl;
//	cout << *(b.begin()) << endl;
//	cout << *(b.end()-1) << endl;
//	/*cout << *(iter + 1) << endl;
//	cout << c.size() << endl;*/
//	cin.get(); cin.get();
//}










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


//
//#include<string>
//using std::cout; using std::cin; using std::endl; using std::string;
//int main()
//{
//
//	int b[2][4] = { {1,2,3,4},{5,6,7,8} };
//	const char*a = "jilhl";
//	string aa = "wfwc";
//	cout << b << endl;
//	cout << a +1<< endl;
//	cout << aa<< endl;
//	cin.get(); cin.get();
//}


//using namespace std;
//int main()
//{
//	vector<int>test1 = { 1,2,3};
//	vector<int>test2 = { 4,5};
//	vector<int>test3 = { 7 };
//	vector<vector<int>>matrix;
//	matrix.push_back(test1);
//	matrix.push_back(test2);
//	matrix.push_back(test3);
//	/*cout << "col: " << matrix.size() << endl;   
//	vector<int>rows = matrix[1];
//	cout << "row: " << matrix[1].size() << endl;*/
//	cin.get(); cin.get();
//}

//如何对vector或者有初始化列表的结构体声明一段空间
//using namespace std;
//struct  Test
//{
//	int val;
//	Test *next;
//	Test(int x) :val(x), next(nullptr) {}
//};
//int main()
//{
//	int test = 1;
//	int *t2 = new int;
//	*t2 = test;
//	delete t2;
//	Test *test2 = new Test(3);
//	vector<int>*a = new vector<int>{ 1,2,3 };
//	cin.get(); cin.get();
//}

//using namespace std;
//int main()
//{
//
//	vector<int> a;
//	a.push_back(10);
//	a.push_back(5);
//	a.push_back(3);
//
//   a.resize(6);  //resize扩容后实在原数据 的基础上向后扩容
//
//
//	printf("%d\n", a[0]);
//	printf("%d\n", a[1]);
//	cin.get(); cin.get();
//	return 0;
//}

//
//using namespace std;
//void test(vector<int>::iterator f, vector<int>::iterator s)
//{
//	while (f < s)
//	{
//		cout << *f << endl;
//		++f;
//	}
//}
//int main()
//{
//	vector<int>a = { 1,2,3,4,5 };
//	vector<int>::iterator iter = a.begin();
//	cout << *(iter + 2) << endl;
//	test(iter + 2, iter+4);
//	cin.get(); cin.get();
//}
