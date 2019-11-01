#include<vector>
#include<iostream>
#include<stdio.h>
#include<ctime>
#include <cstdio>
#include <string>
#include <stack>
//面试题10：递归和循环， Fib数列
//using std::cout; using std::cin; using std::endl;
//int fib_r(int n)     //普通递归
//{
//	if (n <= 1)
//		return n;
//	return fib_r(n - 1) + fib_r(n - 2);
//}
//__int64 fib_rw(int n, __int64 a = 0, __int64 b=1)   //注意尾递归形式
//{
//	if (n <= 1)return b;
//	return fib_rw(n - 1,b,a+b);
//}
//__int64 fib_dp(int n) //动态规划
//{
//	__int64 a = 0, b = 1;
//	while (n > 1)
//	{
//		b = a + b;
//		a = b - a;
//		n--;
//	}
//	return b;
//}
////矩阵迭代式
//void test_fib_r()
//{
//	int n = 30; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_r(n);
//	clock_t delay = clock() - start;               //计时 使用
//	cout << "the fibr final value: " << value << endl;
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "test1 delay=: " << secs << endl;
//}
//void test_fib_rw()
//{
//	int n = 70; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_rw(n);
//	clock_t delay = clock() - start;               //计时 使用
//	cout << "the fibrw final value: " << value << endl;
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "test2 delay=: " << secs << endl;
//}
//void test_fib_dp()
//{
//	int n = 70; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_dp(n);
//	clock_t delay = clock() - start;               //计时 使用
//	cout << "the fibdb final value: " << value << endl;
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "test3 delay=: " << secs << endl;
//}
//int main()
//{
//	test_fib_r();
//	//test_fib_rw();
//	//test_fib_dp();
//	cin.get(); cin.get();
//	return 0;
//}

//：排序和查找
//using std::cout; using std::cin; using std::endl; using std::swap; //swap ,需要名称空间符号
//int partquicksort(int *arr, int left, int right)   //快速排序
//{
//	int key = arr[right],end=right;
//	while (left< right)     //注意不能是left+1<right,因为只有两个时，会无法排序，直接跳过
//	{
//		while (arr[left] <= key&&left<right)   //必须都有=，否则会遗漏
//			left++;
//		while (arr[right] >= key&&left<right)
//			right--;
//		swap(arr[left], arr[right]);
//	}
//	swap(arr[right], arr[end]);
//	int index = right;
//	return index;
//}
//void quicksort(int *arr, int left, int right)
//{
//	if (left >= right)
//		return;
//	int index = partquicksort(arr, left, right);
//	quicksort(arr, left, index-1);
//	quicksort(arr, index + 1, right);
//}
//void test()
//{
//	int a[10];
//	cout << "primal: " << endl;
//	srand(time(NULL));
//	for (int i = 0; i <= 9; i++)
//	{
//		a[i] = rand() % 10;
//		cout<< a[i] << ",";
//	}
//	cout << "" << endl;
//	quicksort(a, 0, 9);
//	cout << "now: " << endl;
//	for (int i = 0; i <= 9; i++)
//		cout<<a[i] << ' ';
//}
//int main()
//{
//	test();
//	cin.get(); cin.get();
//	return 0;
//}

//旋转数组的最小数字,,
//using std::cout; using std::cin; using std::endl;
//int dirMin(int *arr, int index1, int index2)
//{
//	int result = arr[index1];
//	for (; index1 <= index2; index1++)
//	{
//		if (result > arr[index1])
//			result = arr[index1];
//	}
//	return result;
//}
//int Min(int *arr,int length)
//{
//	if (arr == nullptr || length <= 0)
//		return -1;
//	int index1 = 0, index2 = length - 1;
//	int indexmid = index1;
//	while (arr[index1] >= arr[index2])
//	{
//		if (index2 - index1 == 1)
//		{
//			indexmid = index2;
//			break;
//		}
//		indexmid = (index1 + index2) / 2;      //这是一种特殊的顺序数组，也可以用二分法
//		//
//		if (arr[index1] == arr[index2] && arr[index1] == arr[indexmid])
//		{
//			int min = dirMin(arr, index1, index2);
//			return min;
//		}
//		//
//		if (arr[indexmid] >= arr[index1])
//			index1 = indexmid;
//		else if (arr[indexmid] <= arr[index2])
//			index2 = indexmid;
//	}
//	return arr[indexmid];
//}
//void test1()
//{
//	int t1[] = { 3,4,5,6,7,1,2 };
//	int len = sizeof(t1) / sizeof(int);
//	int min = Min(t1, len);
//	cout << "min t1: " << min << endl;
//}
//void test2()
//{
//	int t1[] = { 5,6,7,8,9,1,2,3,4};
//	int len = sizeof(t1) / sizeof(int);
//	int min = Min(t1, len);
//	cout << "min t2: " << min << endl;
//}
////还需考虑特殊情况，当出现很多相等的值时，无法辨别，只能顺序查找。
//void test3()
//{
//	int t1[] = { 1,0,1,1,1 };
//	int len = sizeof(t1) / sizeof(int);
//	int min = Min(t1, len);
//	cout << "min t3: " << min << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	cin.get(); cin.get();
//}


// 面试题12：矩阵中的路径
// 题目：请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有
// 字符的路径。路径可以从矩阵中任意一格开始，每一步可以在矩阵中向左、右、
// 上、下移动一格。如果一条路径经过了矩阵的某一格，那么该路径不能再次进入
// 该格子。例如在下面的3×4的矩阵中包含一条字符串“bfce”的路径（路径中的字
// 母用下划线标出）。但矩阵中不包含字符串“abfb”的路径，因为字符串的第一个
// 字符b占据了矩阵中的第一行第二个格子之后，路径不能再次进入这个格子。
// A B T G    （c++没有矩阵数据，暂用行来模拟）
// C F C S
// J D E H
//using std::cout; using std::cin; using std::endl;
//bool haspathcore(const char* matrix, const char *str, int rows, int cols, int row, int col, int &pathlength, bool *visited);
//bool haspath(const char * martrix, const char*str,int rows,int cols)
//{
//	if (martrix == nullptr || rows < 0 || cols < 0 || str == nullptr)
//		return false;
//	int pathlength = 0;
//	bool *visited = new bool[rows*cols];
//	memset(visited, false, rows*cols);   //visited全部初始化为false
//	for (int row = 0; row < rows; row++)
//	{
//		for (int col = 0; col < cols; col++)
//		{
//			if (haspathcore(martrix,str,rows,cols,row,col,pathlength,visited) == true)
//				return true;
//		}
//	}
//	return false;
//}
//bool haspathcore(const char* matrix, const char *str, int rows, int cols, int row, int col, int &pathlength, bool *visited)
//{
//	if (str[pathlength] == '\0')
//	{
//		return true;
//	}
//
//	bool haspath = false;
//	if (row>=0&&row < rows &&col>=0&& col < cols && matrix[row*cols+col] == str[pathlength] && !visited[row*cols + col])
//	{
//		++pathlength;
//		visited[row*cols + col] = true;
//		haspath = haspathcore(matrix, str, rows, cols, row - 1, col, pathlength, visited) || haspathcore(matrix, str, rows, cols, row + 1, col, pathlength, visited) ||
//			haspathcore(matrix, str, rows, cols, row, col - 1, pathlength, visited) || haspathcore(matrix, str, rows, cols, row, col + 1, pathlength, visited);
//		if (haspath != true)
//		{
//			--pathlength;
//			visited[row*cols + col] = false;
//		}
//	}
//	return haspath;
//}
//void test1()
//{
//	const char *t1 = { "abtgcfcsjdeh" };
//	const char *tr1 = { "bfce" };
//	int rows = 3, cols = 4;
//	bool final = haspath(t1, tr1, rows, cols);
//	cout << final << endl;
//}
//int main()
//{
//	test1();
//	cin.get(); cin.get();
//	return 0;
//}

// 面试13： 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
// 注意 可使用归纳法得到 f(n)=2*f(n-1);
//class Solution {
//public:
//	int jumpFloorII(int number) {
//
//		if (number == 0)
//			return 0;
//		else if (number == 1)
//			return 1;
//		else if (number > 1)
//			return 2 * jumpFloorII(number - 1);
//	}
//};

//面试题14：减绳子，长度为n的绳子剪成2段，使 f(n)=max(f(i)*f(n-i));
//使用动态规划，划分子问题，从下至上，注意刚开始的细节
//using std::cout; using std::endl; using std::cin;
//int maxmultiply(int length)
//{
//	if (length <= 1)
//		return 0;                     //必须要切，因此
//	else if (length == 2)
//		return 1;                       //必须要切，因此
//	else if (length == 3)
//		return 2;                      //必须要切，因此
//	int *record = new int[length+1];     //动态数组的申请
//	record[0] = 0; record[1] = 1; record[2] = 2; record[3] = 3;   // 最短的原长度，不等于切的长度
//	int max = 0;
//	for (int i = 4; i <=length; i++)     //注意细节 <=
//	{
//		max = 0;
//		for (int j = 1; j <= i / 2; j++)
//		{
//			int bch = record[j] * record[i - j];
//			if (max < bch)
//				max = bch;
//			record[i] = max;
//		}
//	}
//	int fin = record[length];
//	delete [] record;
//	return fin;
//}
//int main()
//{
//	int n = 6;
//	int max = maxmultiply(n);
//	cout << max << endl;
//	cin.get(); cin.get();
//}


