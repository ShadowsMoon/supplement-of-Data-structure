//�������������㷨���ܽ�,��ԭ���Լ����Ӷ�
#include <iostream>
#include<stack>
#include <cstdio>
#include<vector>
#include<stdio.h>
#include<cstring>     //memset
using namespace std;

//-----�鲢����-----------------//
//���β��ԣ��������б�ͨ��, �㷨���Ӷ� O(nlogn)
//����һ��Ϊ��   //O(1)
//�����еݹ�����// 2*T(n/2)
//�ϲ���������//   O(n)

class merge_sort_test {
public:
	void merge_main(vector<int>::iterator proot,int lo,int hi)
	{
		if (lo >= hi)
			return;
		int mi = (lo + hi) >> 1;
		merge_main(proot , lo, mi);        //��·
		merge_main(proot, mi + 1, hi);
		merge_core(proot, lo, mi,hi);
	}
	//ע�⣬ʹ�õݹ�ʱ������Ҫ���Ƿֿ�������һ���׶Σ��ϲ��׶�Ҳ�ǳ���Ҫ
	void merge_core(vector<int>::iterator proot,int lo,int mi,int hi)
	{
		int lenl = mi - lo + 1; int *temp = new int[lenl];
		int lenr = hi - mi;  vector<int>::iterator temm = proot + mi+1;      //
		for (int i = 0; i + lo <= mi; temp[i++] = proot[i + lo]);      //ע��i=0��������i=lo����Ϊtemp�Ǵ�0��ʼ�����
		                //ע��forѭ����ִ��˳����ִ�����м���Ϊ�棬Ȼ���ٵ�for�����ڵ���䣬Ȼ��ŵ�for�ĵ���������
		for (int i = 0, j = 0, k = 0; j < lenl || k < lenr;)
		{
			if (j < lenl && (k >= lenr || temp[j] <= temm[k])) //&&�����һ���ж�������ָ����temm���������Ѿ�û����֮�󣬾�Ҫ��temp������ȫ�����ȥ
			{
				proot[i+lo] = temp[j]; i++, j++;                  //���׺��ӵ㣺proot[i+lo]������proot[i]��ÿ�εݹ�ֿ��Ľ׶Σ�����ϲ������ݶβ������Ǹ��ڵ�
			}
			if (k < lenr && (j >= lenl || temp[j] > temm[ k]))
			{
				proot[i+lo] = temm[k]; i++; k++;      
			}
		}
		delete[] temp;
	}
	
};
//����������Ȼ���÷���˼�룺��ԭ���з�Ϊ�������У����к���˼�룺�������һ��С�ڵ����ұ�����
// �鲢����ļ��������ѵ����ںϲ��������������ڷ֣��������pivot(����ߵ�Ԫ�ر���С���ұߵı�����)
//��������͹鲢�����������������䲻��Ҫ�ϲ��������ﵽ�ֵĽ��޺�Ҳ�ʹ������Ѿ�˳���ˣ����鲢��������������Ҫ�ϲ���������
class quickSort_test {
public:
	void QuickSort(vector<int>::iterator proot,int lo,int hi)
	{
		if (lo >= hi)   //�ݹ���ֹ����Ϊ������ʱ
			return;
		int pivotkey = proot[lo];   //���������������Ϊ��һ����
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
		proot[low] = pivotkey;  //�������� ����������ѭ��ֹͣ��λ�ã��Էֳɱ��������С����������
		QuickSort(proot, lo, low - 1);
		QuickSort(proot, low + 1, hi);   //ע�⣬����ݹ���ñ�������Ϊ�����У�������(low+1,hig),��ʱlow=hig
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
		proot[lo] = proot[low];                   //�ѻ�׼�������ֹͣλ�õ�������
		proot[low] = pivoty;
		quick_way2(proot, lo, low);
		quick_way2(proot, low + 1, hig);
	}
	
};

//��ѡ��������������������������A[ 1......n ] ��ѡ�����iСԪ�أ�����A[i]�����������һ�˼�ѡ������
//��ʱ��Ϊ(n - 1)*(n - i) = n ^ 2 - (i + 1)*n + i��ʱ�临�Ӷ�ΪO��n ^ 2����
//������������������£��Ƚϴ�������һ���ģ����Լ�ѡ������ƽ��ʱ�䡢������������ ʱ�临�Ӷȶ�ΪO��n ^ 2��
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





//Ͱ����
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


