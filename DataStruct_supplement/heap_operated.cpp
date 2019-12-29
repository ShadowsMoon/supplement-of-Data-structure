#include<iostream>
#include <cstdio>
#include<vector>
#include<stack>
#include<string>
#include<ctime>
#include<algorithm>
#include<set>
#include <functional>    //greater<int> //�������͵��ɴ�С����   �෴��Ϊ less<int>
//�߼����ݽṹ ��ȫ����ѣ� ��������������ṹ �� ��ȫ���������߼��ṹ����

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::multiset;        // multiset ��set ��������ǰ�������ظ�
using std::to_string;


//https ://blog.csdn.net/touch_2011/article/details/6767673
//ѡ������
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
//	//left��right��largest�ֱ�ָ��
//	//���ӡ��Һ��ӡ�{a[i],a[left]}������һ��
//	int left, right, largest;
//	largest = left = 2 * i;
//	if (left > n)
//		return;
//	right = 2 * i + 1;
//	if (right <= n && a[right] > a[left]) {
//		largest = right;
//	}
//	if (a[i] < a[largest]) {//������ֵ�������ʱ,����a[i]��a[largest]
//		a[i] = a[i] + a[largest];
//		a[largest] = a[i] - a[largest];
//		a[i] = a[i] - a[largest];
//		//���϶��µ�����
//		maxHeap(a, n, largest);
//	}
//}
//
////����
//void creatHeap(int *a, int n)
//{
//	int i;
//	//���¶��ϵ�����
//	for (i = n / 2; i >= 1; i--)
//		maxHeap(a, n, i);
//}
//
////������
//void heapSort(int *a, int n)
//{
//	int i;
//	creatHeap(a, n);//����
//	for (i = n; i >= 2; i--) {
//		//�Ѷ���¼�����һ����¼����
//		a[1] = a[1] + a[i];
//		a[i] = a[1] - a[i];
//		a[1] = a[1] - a[i];
//		//���м�¼��������һ����ɸѡ��������
//		maxHeap(a, i - 1, 1);
//	}
//}
//
//
//void main()
//{
//	int i;
//	int a[7] = { 0,3,5,8,9,1,2 };//������a[0]
//	//heapSort(a, 6);
//	SimpleSelectSort(a, 6);
//	for (i = 1; i <= 6; i++)
//		cout << a[i] << endl;
//	cin.get(); cin.get();
//}


// data�Ǵ�����0��ʼ����Ӧ��Ϊ1����Index=����+1 ,nΪ���ݸ���

void FliterDown(vector<int>&data, int index, int n)    //���˲�����һ������ɾ���󱣳ֶ�����
{
	int left=2*index,right=2*index+1,max_index=left;   //max_index=left �Ǻ��������ƣ����ֵݹ������ȥ��max_index=index,����������������ԣ����޷������ݹ飩
	if (left > n)
		return;     //��Ҷ�ӽڵ�
	//�ȱȽ����ҽڵ�����Ǻ͸��ڵ�Ƚϣ����������� 1����ԭ��������ԣ���������������(�����������ڣ��������ز�����)
	// 2���������㣬�����ұ���һ������ߣ�ʹmax_index ���ڽ������Ǹ��ڵ㣬��ʱ���ڵ��ֵ�͵��˸ýڵ㣬�ýڵ��Ӧ�����������˸ı䣬��˼��������Ա�֤������
	if (right <= n && data[right - 1] > data[max_index - 1])
	{
		max_index = right;
	}
	if (data[max_index - 1] > data[index-1])  
	{//ע�⣺�����˲���Ĭ�ϣ���������������ԡ���ˣ�ֻ�ڷ����ı�ʱ�������¼�������
		data[index-1] = data[index-1] + data[max_index-1];
		data[max_index-1] = data[index-1] - data[max_index-1];
		data[index-1] = data[index-1] - data[max_index-1];
		FliterDown(data, max_index, n);
	}

}
//ֻ��ĩҶ�ڵ�ű��ֶ����ԣ��������Ͻ���
void creatHeap(vector<int>&data,int n)
{
	for (int i = n / 2; i >=1; i--)
		FliterDown(data, i, n);
}
//ɾ�����ֵ  1��������һ�������һ��ֵ��2����1~n-1�������˱��ֶ���
int del_max(vector<int>&data)
{
	int max_v = data[0];
	data[0] = data[0] + data[data.size() - 1];
	data[data.size()-1]= data[0] -data[data.size() - 1];
	data[0] = data[0] - data[data.size() - 1];
	FliterDown(data, 1, data.size() - 1);
	return max_v;
}

//���룬1�Ȱ����ݷ������һ����Ȼ��͸��ڵ�Ƚϣ���ֹ����1��û�и��ڵ㣬2���ȸ��ڵ�С
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
//������
void HeapOrder(vector<int>&data, int n)
{
	creatHeap(data, n);
	for (int i = n; i >1; i--)
	{
		data[0] = data[0] + data[i - 1];
		data[i - 1] = data[0] - data[i - 1];
		data[0] = data[0] - data[i - 1];
		FliterDown(data, 1, i-1);     //���ֶ���ʹ���ڵ�Ϊ ���ֵ
	}
}


//int main()
//{
//	int i;
//	vector<int> a= { 0,3,5,8,9,1,2 };//������a[0]
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