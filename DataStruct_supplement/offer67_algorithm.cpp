#include<vector>
#include<iostream>
#include<stdio.h>
#include<ctime>
#include <cstdio>
#include <string>
#include <stack>
//������10���ݹ��ѭ���� Fib����
//using std::cout; using std::cin; using std::endl;
//int fib_r(int n)     //��ͨ�ݹ�
//{
//	if (n <= 1)
//		return n;
//	return fib_r(n - 1) + fib_r(n - 2);
//}
//__int64 fib_rw(int n, __int64 a = 0, __int64 b=1)   //ע��β�ݹ���ʽ
//{
//	if (n <= 1)return b;
//	return fib_rw(n - 1,b,a+b);
//}
//__int64 fib_dp(int n) //��̬�滮
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
////�������ʽ
//void test_fib_r()
//{
//	int n = 30; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_r(n);
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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

//������Ͳ���
//using std::cout; using std::cin; using std::endl; using std::swap; //swap ,��Ҫ���ƿռ����
//int partquicksort(int *arr, int left, int right)   //��������
//{
//	int key = arr[right],end=right;
//	while (left< right)     //ע�ⲻ����left+1<right,��Ϊֻ������ʱ�����޷�����ֱ������
//	{
//		while (arr[left] <= key&&left<right)   //���붼��=���������©
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

//��ת�������С����,,
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
//		indexmid = (index1 + index2) / 2;      //����һ�������˳�����飬Ҳ�����ö��ַ�
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
////���迼����������������ֺܶ���ȵ�ֵʱ���޷����ֻ��˳����ҡ�
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


// ������12�������е�·��
// ��Ŀ�������һ�������������ж���һ���������Ƿ����һ������ĳ�ַ�������
// �ַ���·����·�����ԴӾ���������һ��ʼ��ÿһ�������ھ����������ҡ�
// �ϡ����ƶ�һ�����һ��·�������˾����ĳһ����ô��·�������ٴν���
// �ø��ӡ������������3��4�ľ����а���һ���ַ�����bfce����·����·���е���
// ĸ���»��߱�������������в������ַ�����abfb����·������Ϊ�ַ����ĵ�һ��
// �ַ�bռ���˾����еĵ�һ�еڶ�������֮��·�������ٴν���������ӡ�
// A B T G    ��c++û�о������ݣ���������ģ�⣩
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
//	memset(visited, false, rows*cols);   //visitedȫ����ʼ��Ϊfalse
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

// ����13�� һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������
// ע�� ��ʹ�ù��ɷ��õ� f(n)=2*f(n-1);
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

//������14�������ӣ�����Ϊn�����Ӽ���2�Σ�ʹ f(n)=max(f(i)*f(n-i));
//ʹ�ö�̬�滮�����������⣬�������ϣ�ע��տ�ʼ��ϸ��
//using std::cout; using std::endl; using std::cin;
//int maxmultiply(int length)
//{
//	if (length <= 1)
//		return 0;                     //����Ҫ�У����
//	else if (length == 2)
//		return 1;                       //����Ҫ�У����
//	else if (length == 3)
//		return 2;                      //����Ҫ�У����
//	int *record = new int[length+1];     //��̬���������
//	record[0] = 0; record[1] = 1; record[2] = 2; record[3] = 3;   // ��̵�ԭ���ȣ��������еĳ���
//	int max = 0;
//	for (int i = 4; i <=length; i++)     //ע��ϸ�� <=
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


