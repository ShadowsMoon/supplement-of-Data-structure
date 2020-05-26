//对主流的排序算法的总结,简单原理以及复杂度
#include <iostream>
#include<stack>
#include <cstdio>
#include<vector>
#include<stdio.h>
#include<cstring>     //memset
using namespace std;

//-----归并排序-----------------//
//分治策略，向量与列表通用, 算法复杂度 O(nlogn)
//序列一分为二   //O(1)
//子序列递归排序// 2*T(n/2)
//合并有序序列//   O(n)

class merge_sort_test {
public:
	void merge_main(vector<int>::iterator proot,int lo,int hi)
	{
		if (lo >= hi)
			return;
		int mi = (lo + hi) >> 1;
		merge_main(proot , lo, mi);        //左路
		merge_main(proot, mi + 1, hi);
		merge_core(proot, lo, mi,hi);
	}
	//注意，使用递归时，不仅要考虑分开后的最后一个阶段，合并阶段也非常重要
	void merge_core(vector<int>::iterator proot,int lo,int mi,int hi)
	{
		int lenl = mi - lo + 1; int *temp = new int[lenl];
		int lenr = hi - mi;  vector<int>::iterator temm = proot + mi+1;      //
		for (int i = 0; i + lo <= mi; temp[i++] = proot[i + lo]);      //注意i=0，而不是i=lo，因为temp是从0开始算起的
		                //注意for循环的执行顺序是执行完中间项为真，然后再到for括号内的语句，然后才到for的第三个条件
		for (int i = 0, j = 0, k = 0; j < lenl || k < lenr;)
		{
			if (j < lenl && (k >= lenr || temp[j] <= temm[k])) //&&后面第一个判断条件是指，当temm后面数据已经没有了之后，就要把temp的数据全部填进去
			{
				proot[i+lo] = temp[j]; i++, j++;                  //容易忽视点：proot[i+lo]而不是proot[i]，每次递归分开的阶段，对其合并的数据段并不都是根节点
			}
			if (k < lenr && (j >= lenl || temp[j] > temm[ k]))
			{
				proot[i+lo] = temm[k]; i++; k++;      
			}
		}
		delete[] temp;
	}
	
};
//快速排序：仍然采用分治思想：将原序列分为两个序列，其中核心思想：左边序列一定小于等于右边序列
// 归并排序的计算量和难点在于合并，快速排序在于分，依靠轴点pivot(它左边的元素比他小，右边的比他大)
//快速排序和归并排序本质上区别在于其不需要合并，当它达到分的界限后也就代表其已经顺序了，而归并排序则子序列需要合并才能有序。
class quickSort_test {
public:
	void QuickSort(vector<int>::iterator proot,int lo,int hi)
	{
		if (lo >= hi)   //递归终止条件为单个点时
			return;
		int pivotkey = proot[lo];   //简单起见，轴数设置为第一个数
		int low = lo, hig = hi;
		while (low < hig)            
		{
			while (low < hig&&pivotkey <= proot[hig])
				hig--;
			if (low < hig)
			{
				proot[low] = proot[hig];
				low++;
			}
			while (low < hig&&pivotkey >= proot[low])
				low++;
			if (low < hig)
			{
				proot[hig] = proot[low];
				hig--;
			}
		}
		proot[low] = pivotkey;  //最后别忘了 把轴数放在循环停止的位置，以分成比轴数大和小的两个序列
		QuickSort(proot, lo, low - 1);
		QuickSort(proot, low + 1, hi);   //注意，这里递归调用变量必须为括号中，而不是(low+1,hig),此时low=hig
	}

	void quick_way2(vector<int>::iterator proot, int lo, int hi)
	{
		if (lo >= hi)
			return;
		int pivoty = proot[lo];
		int low = lo,hig = hi;
		while (low < hig)
		{
			while (low < hig&&proot[hig] >= pivoty)
				hig--;
			while (low < hig&&proot[lo] <= pivoty)
				low++;
			if (low < hig)
			{
				proot[hig] = proot[hig] + proot[low];
				proot[low] = proot[hig] - proot[low];
				proot[hig] = proot[hig] - proot[low];
			}

		}
		proot[lo] = proot[low];                   //把基准数和最后停止位置的数交换
		proot[low] = pivoty;
		quick_way2(proot, lo, low);
		quick_way2(proot, low + 1, hig);
	}
	
};

//简单选择排序：描述：给定待排序序列A[ 1......n ] ，选择出第i小元素，并和A[i]交换，这就是一趟简单选择排序。
//总时间为(n - 1)*(n - i) = n ^ 2 - (i + 1)*n + i。时间复杂度为O（n ^ 2）。
//不管是最坏还是最佳情况下，比较次数都是一样的，所以简单选择排序平均时间、最坏情况、最佳情况 时间复杂度都为O（n ^ 2）
class SimpleSelectSort_test {
	public:
	void SelectSort_main(vector<int>::iterator proot,int lo,int hi)
	{
		if (lo >= hi)
			return;
		int smallest_index=lo;
		for (int j = lo + 1; j<= hi; j++)
		{
			if (proot[smallest_index] > proot[j])
			{
				smallest_index = j;
		    }
		}
		if (smallest_index != lo)
		{
			proot[lo] = proot[lo] + proot[smallest_index];
			proot[smallest_index] = proot[lo] - proot[smallest_index];
			proot[lo] = proot[lo] - proot[smallest_index];
		}
		SelectSort_main(proot, lo + 1, hi);

	}
};


class bubblesort {
public:
	void bubble_test(vector<int>&a)
	{
		bool sortindex = false;
		while (!sortindex)
		{
			sortindex = true;
			int len = a.size();
			for (int i = 1; i<len; i++)
			{
				if (a[i - 1] > a[i])
				{
					swap(a, i);
					sortindex = false;
				}

			}
			len--;
		}
	}
	void swap(vector<int>&a,int n)
	{
		a[n - 1] = a[n - 1] + a[n];
		a[n] = a[n - 1] - a[n];
		a[n - 1] = a[n - 1] - a[n];
	}
};


//void test1()
//{
//	vector<int>test1 = { 6,3,2,7,1,5,8,4 };
//	//merge_sort_test t1;
//	//t1.merge_main(test1.begin(), 0, 7);
//	//SimpleSelectSort_test t1;
//	//t1.SelectSort_main(test1.begin(), 0, 7);
//	//quickSort_test t1;
//	//t1.QuickSort(test1.begin(), 0, 7);
//
//	bubblesort t1;
//	t1.bubble_test(test1);
//	for (int i = 0; i < test1.size(); i++)
//		cout << test1[i];
//}
//void test2()
//{
//	vector<int>test1 = { 7,6,5,4,3,2,1};
//	//merge_sort_test t1;
//	//t1.merge_main(test1.begin(), 0, 5);
//	//SimpleSelectSort_test t2;
//	//t2.SelectSort_main(test1.begin(), 0, 5);
//	quickSort_test t2;
//	t2.QuickSort(test1.begin(), 0, 6);
//	for (int i = 0; i < test1.size(); i++)
//		cout << test1[i];
//}

//int main()
//{
//	test1();
//  //  test2();
//	cin.get(); cin.get();
//}





//桶排序
//#include <cstdio>
//#include <climits>
//
//#define INF INT_MAX
//
//#define ELEMENT_COUNT 100000
//#define ELEMENT_RANGE (1 << 17)
//#define GROUP_RANGE (1 << 2)
//
//using namespace std;
//
//int n, d[ELEMENT_COUNT];
//
//struct node
//{
//	int v, next;
//}A[ELEMENT_COUNT + 1];
//int head[ELEMENT_RANGE / GROUP_RANGE], cnt[ELEMENT_RANGE / GROUP_RANGE], vc = 1;
//
//void insert(int v)
//{
//	int group = v / GROUP_RANGE;
//	A[vc].next = head[group];
//	head[group] = vc;
//	A[vc].v = v;
//	cnt[group]++;
//	vc++;
//}
//
//void bucket_sort()
//{
//	for (int i = 0; i < n; i++)
//	{
//		insert(d[i]);
//	}
//	int ptr = 0;
//	for (int i = 0; i < ELEMENT_RANGE / GROUP_RANGE; i++)
//	{
//		for (int j = 0; j < cnt[i]; j++)
//		{
//			int minv = INF, ord;
//			for (int cur = head[i]; cur != 0; cur = A[cur].next)
//			{
//				if (A[cur].v < minv)
//				{
//					minv = A[cur].v;
//					ord = cur;
//				}
//			}
//			d[ptr++] = minv;
//			A[ord].v = INF;
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &d[i]);
//	}
//	bucket_sort();
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", d[i]);
//	}
//	return 0;
//}


