#include<iostream>
#include <cstdio>
#include<vector>
#include<stack>
#include<string>
#include<ctime>
#include<algorithm>
#include<set>
#include <functional>    //greater<int> //内置类型的由大到小排序   相反的为 less<int>
//高级数据结构 完全二叉堆， 基于向量的物理结构 和 完全二叉树的逻辑结构构建

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::multiset;        // multiset 和set 区别在于前者允许重复
using std::to_string;


//https ://blog.csdn.net/touch_2011/article/details/6767673
//选择排序
//void SimpleSelectSort(int *a, int n)
//{
//	if (n <= 1)
//		return;
//	int index,i;
//	for (index = i = 0; i <=n; i++)
//	{
//		if (a[i] < a[index])
//			index = i;
//	}
//	if (index != 0)
//	{
//		a[index] = a[index] + a[0];
//		a[0] = a[index] - a[0];
//		a[index] = a[index] - a[0];
//	}
//	SimpleSelectSort(a + 1, n - 1);
//}
//
//void maxHeap(int *a, int n, int i)
//{
//	//left、right、largest分别指向
//	//左孩子、右孩子、{a[i],a[left]}中最大的一个
//	int left, right, largest;
//	largest = left = 2 * i;
//	if (left > n)
//		return;
//	right = 2 * i + 1;
//	if (right <= n && a[right] > a[left]) {
//		largest = right;
//	}
//	if (a[i] < a[largest]) {//根结点的值不是最大时,交换a[i]，a[largest]
//		a[i] = a[i] + a[largest];
//		a[largest] = a[i] - a[largest];
//		a[i] = a[i] - a[largest];
//		//自上而下调整堆
//		maxHeap(a, n, largest);
//	}
//}
//
////建堆
//void creatHeap(int *a, int n)
//{
//	int i;
//	//自下而上调整堆
//	for (i = n / 2; i >= 1; i--)
//		maxHeap(a, n, i);
//}
//
////堆排序
//void heapSort(int *a, int n)
//{
//	int i;
//	creatHeap(a, n);//建堆
//	for (i = n; i >= 2; i--) {
//		//堆顶记录和最后一个记录交换
//		a[1] = a[1] + a[i];
//		a[i] = a[1] - a[i];
//		a[1] = a[1] - a[i];
//		//堆中记录个数减少一个，筛选法调整堆
//		maxHeap(a, i - 1, 1);
//	}
//}
//
//
//void main()
//{
//	int i;
//	int a[7] = { 0,3,5,8,9,1,2 };//不考虑a[0]
//	//heapSort(a, 6);
//	SimpleSelectSort(a, 6);
//	for (i = 1; i <= 6; i++)
//		cout << a[i] << endl;
//	cin.get(); cin.get();
//}


// data是从索引0开始，对应的为1，令Index=索引+1 ,n为数据个数

void FliterDown(vector<int>&data, int index, int n)    //下滤操作，一般用于删除后保持堆序性
{
	int left=2*index,right=2*index+1,max_index=left;   //max_index=left 是很巧妙的设计，保持递归持续下去（max_index=index,当该子树满足堆序性，则无法跳出递归）
	if (left > n)
		return;     //无叶子节点
	//先比较左右节点而不是和父节点比较，是巧妙地设计 1，若原满足堆序性，则跳到左子树，(左子树不存在，右子树必不存在)
	// 2，若不满足，则左右必有一个最大者，使max_index 等于交换的那个节点，此时父节点的值就到了该节点，该节点对应的子树发生了改变，因此继续下滤以保证堆序性
	if (right <= n && data[right - 1] > data[max_index - 1])
	{
		max_index = right;
	}
	if (data[max_index - 1] > data[index-1])  
	{//注意：该下滤操作默认，左右子树满足堆性。因此，只在发生改变时，才往下继续下滤
		data[index-1] = data[index-1] + data[max_index-1];
		data[max_index-1] = data[index-1] - data[max_index-1];
		data[index-1] = data[index-1] - data[max_index-1];
		FliterDown(data, max_index, n);
	}

}
//只有末叶节点才保持堆序性，从下往上建堆
void creatHeap(vector<int>&data,int n)
{
	for (int i = n / 2; i >=1; i--)
		FliterDown(data, i, n);
}
//删除最大值  1，交换第一个和最后一个值，2，对1~n-1个数下滤保持堆性
int del_max(vector<int>&data)
{
	int max_v = data[0];
	data[0] = data[0] + data[data.size() - 1];
	data[data.size()-1]= data[0] -data[data.size() - 1];
	data[0] = data[0] - data[data.size() - 1];
	FliterDown(data, 1, data.size() - 1);
	return max_v;
}

//插入，1先把数据放在最后一个，然后和父节点比较，终止条件1，没有父节点，2，比父节点小
void insert_hp(vector<int>&data,int value)
{
	data.push_back(value);
	int len = data.size();
	while (len >> 1>0)
	{
		int parentLen = len >> 1;
		if (data[len - 1] > data[parentLen - 1])
		{
			data[parentLen - 1] = data[parentLen - 1] + data[len - 1];
			data[len - 1] = data[parentLen - 1] - data[len - 1];
			data[parentLen-1] = data[parentLen - 1] - data[len - 1];
		}
		else
			break;
		len = parentLen;
	}

}
//堆排序
void HeapOrder(vector<int>&data, int n)
{
	creatHeap(data, n);
	for (int i = n; i >1; i--)
	{
		data[0] = data[0] + data[i - 1];
		data[i - 1] = data[0] - data[i - 1];
		data[0] = data[0] - data[i - 1];
		FliterDown(data, 1, i-1);     //保持堆序，使根节点为 最大值
	}
}


//int main()
//{
//	int i;
//	vector<int> a= { 0,3,5,8,9,1,2 };//不考虑a[0]
//	HeapOrder(a, 7);
//	cout << "after order: ";
//	for (i = 0; i <= 6; i++)
//		cout << a[i];
//	vector<int>b= { 0,3,5,8,9,1,2 };
//	creatHeap(b,7);  
//	int del = del_max(b);
//	cout << "after delete: ";
//	for (i = 0; i <= 5; i++)
//		cout << b[i] ;
//
//	vector<int>c = { 0,3,5,8,9,1,2 };
//	creatHeap(c, 7);
//	insert_hp(c, 11);
//	cout << "after insert 11: ";
//	for (i = 0; i <=7 ; i++)
//		cout << c[i]<<" ";
//	cin.get(); cin.get();
//}