#include<iostream>

//������16
//����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���
//��֤base��exponent��ͬʱΪ0
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
//	bool equal(double num1, double num2) //ע��double�����ݲ���ֱ�ӵȼ۱Ƚϣ�ֻ�������ſ��� ==
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

// ������17����ӡ1������nλ��
// ��Ŀ����������n����˳���ӡ����1����nλʮ����������������3����
// ��ӡ��1��2��3һֱ������3λ����999��
//�ؼ������ܴ󣬳������е���������-> �������ַ�������ģ��

//void printfbignumber(int n)
//{
//	
//	char * test=new char[n+1];  //char  test[n]; ֱ��������������
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


// ������21����������˳��ʹ����λ��ż��ǰ��
// ��Ŀ������һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ������
// ����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�����Ҫ�����λ�ú�ԭ��һ����
//bool ifeven(int *pt);   //���ֿ���չ�ԣ�ֱ���޸ĸú�������ʵ�ֲ�ͬ����
//void adjustoddeven(int *ptr, int length)
//{
//	int *pbegin = ptr;        //����ָ��ֱ���Զ��ƶ�,ֱ������
//	int *pend = ptr + length-1 ;    //ע���Ƿ���Ҫ��һ
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


// ������22�������е�����k�����
// ��Ŀ������һ����������������е�����k����㡣Ϊ�˷��ϴ�����˵�ϰ�ߣ�
// �����1��ʼ�������������β����ǵ�����1����㡣����һ��������6����㣬
// ��ͷ��㿪ʼ���ǵ�ֵ������1��2��3��4��5��6���������ĵ�����3�������
// ֵΪ4�Ľ�㡣
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
//	ListNode *p2 = phead + k - 1;   //����k-1����˵�������β�ڵ�ʱ��p1���ﵹ��kth�ڵ�
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