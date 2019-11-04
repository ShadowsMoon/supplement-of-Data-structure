#include<iostream>

//面试题16
//给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
//保证base和exponent不同时为0
#include<cmath>
//class Solution {
//public:
//	double Power(double base, int exponent) {
//		bool invailed = false;
//		if (equal(base, 0.0) && exponent < 0)
//		{
//			invailed = true; return 0.0;
//		}
//		unsigned int absExp = (unsigned)exponent;
//		if (exponent < 0)
//			absExp = -exponent;
//		double result = PowerwithUnsignedExponent(base, absExp);
//		if (exponent < 0)
//			result = 1 / result;
//		return result;
//	}
//	bool equal(double num1, double num2) //注，double型数据不能直接等价比较，只有整数才可以 ==
//	{
//		if ((num1 - num2 > -0.0000001) && (num1 - num2 < 0.0000001))
//			return true;
//		else
//			return false;
//	}
//	double PowerwithUnsignedExponent(double base, int exp)
//	{
//		if (exp == 0)
//			return 1;
//		if (exp == 1)
//			return base;
//		double result = PowerwithUnsignedExponent(base, exp >> 1);
//		result *= result;
//		if (exp & 0x1 == 1)
//			result *= base;
//		return result;
//	}
//};

// 面试题17：打印1到最大的n位数
// 题目：输入数字n，按顺序打印出从1最大的n位十进制数。比如输入3，则
// 打印出1、2、3一直到最大的3位数即999。
//关键：数很大，超出现有的数据类型-> 考虑用字符数组来模拟

//void printfbignumber(int n)
//{
//	
//	char * test=new char[n+1];  //char  test[n]; 直接这样定义会出错
//	memset(test, '0', n);
//}
//int main()
//{
//	char test[4];
//	memset(test, '0', 4);
//	test[3] = '\0';  
//	int len = 4-1;
//	while (len >=0)
//	{
//		int tenorder = 0;
//		while (tenorder < 9)
//		{
//			test[len] += 1;
//			std::cout << test + len << '\t';
//			tenorder += 1;
//		}
//		test[len] ='0';
//		len--;
//		std::cout << std::endl;
//	}
////	std::cout << test+3 << std::endl;
//	std::cin.get(); std::cin.get();
//	return 0;
//}

//


// 面试题21：调整数组顺序使奇数位于偶数前面
// 题目：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有
// 奇数位于数组的前半部分，所有偶数位于数组的后半部分。（不要求相对位置和原来一样）
//bool ifeven(int *pt);   //保持可扩展性，直接修改该函数即可实现不同功能
//void adjustoddeven(int *ptr, int length)
//{
//	int *pbegin = ptr;        //两个指针分别相对而移动,直到相遇
//	int *pend = ptr + length-1 ;    //注意是否需要减一
//	while (pbegin < pend)
//	{
//		while (pbegin < pend&&ifeven(pbegin))
//			pbegin++;
//		while (pbegin < pend&&!ifeven(pend))
//			pend--;
//		if (pbegin < pend)
//		{
//			int temp = *pbegin;
//			*pbegin = *pend;
//			*pend = temp;
//		}
//	}
//}
//bool ifeven(int *pr)
//{
//	if ((*pr) & 0x1 == 1)
//		return true;
//	return false;
//}
//int main()
//{
//	int test1[] = { 1,2,3,4,5,6,7 };
//    int leng = sizeof(test1) / sizeof(int);
//	adjustoddeven(test1, leng);
//	for (int i = 0; i < leng - 1; i++)
//		std::cout << test1[i] << std::endl;
//	std::cin.get(); std::cin.get();
//	return 0;
//}


// 面试题22：链表中倒数第k个结点
// 题目：输入一个链表，输出该链表中倒数第k个结点。为了符合大多数人的习惯，
// 本题从1开始计数，即链表的尾结点是倒数第1个结点。例如一个链表有6个结点，
// 从头结点开始它们的值依次是1、2、3、4、5、6。这个链表的倒数第3个结点是
// 值为4的结点。
//using std::cout; using std::cin; using std::endl;
//struct ListNode
//{
//	int val;
//	ListNode *mNext;
//};
//ListNode* listcreat(int *number)
//{
//	int len = sizeof(number) / sizeof(int);
//	ListNode *phead; ListNode *pre;
//	phead = nullptr; pre = nullptr;
//	for (int i = 0; i < len; i++)
//	{
//		ListNode *pnext = new ListNode;
//		pnext->val = number[i];
//		pnext->mNext = nullptr;
//		if (phead == nullptr)
//		{
//			phead = pnext; pre = pnext;
//		}
//		else
//		{
//			ListNode *mid = pre;
//		}
//	}
//}
//int kthnode(int k,ListNode *phead)
//{
//	ListNode *p1 = phead;
//	ListNode *p2 = phead + k - 1;   //保持k-1，因此当他到达尾节点时，p1到达倒数kth节点
//	while (p2->mNext != nullptr)
//	{
//		p1++; p2++;
//	}
//	return p1->val;
//}
//
//int main()
//{
//	int number[] = { 1,2,3,4,5 };
//	int len = sizeof(number) / sizeof(int);
//	cout << len;
//	cin.get(); cin.get();
//}