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
//注意 思想：定义两个指针，可以实现只遍历一次即可
//using std::cout; using std::cin; using std::endl;
//struct ListNode
//{
//	int val;
//	ListNode *mNext;
//};
//ListNode* listcreat(int *number,int len)
//{
//	//int len = sizeof(number) / sizeof(int);         //注意。该对象的size只是1，不同于主函数中求大小，区别？
//	ListNode *phead; ListNode *pre;
//	phead = nullptr; pre = nullptr;
//	for (int i = 0; i < len; i++)
//	{
//		ListNode *pnext = new ListNode;
//		pnext->val = number[i];
//		pnext->mNext = nullptr;
//		if (phead == nullptr)
//		{
//			phead = pnext; 
//		}
//		else
//		{
//			pre->mNext = pnext;
//		}
//		pre = pnext;
//	}
//	return phead;
//}
////考虑极端情况和边界条件
//int kthnode(int len,ListNode *phead)
//{
//	if (phead == nullptr)   //1，空指针
//		return 0;
//	int k; cin >> k;
//	if (k <= 0 || k >= len)  //2,k>总长和 3,k=0，虽然不符合，但还是符合语法，会被执行
//		return 0;
//	ListNode *p1 = phead;
//	ListNode *p2 = p1;
//	for (int i = 0; i < k-1; i++)
//	{
//		p2 = p2->mNext;   //保持k-1，因此当他到达尾节点时，p1到达倒数kth节点,（不是连续地址空间）
//	}
//	while (p2->mNext != nullptr)
//	{
//		p1=p1->mNext;
//		p2=p2->mNext;
//	}
//	return p1->val;
//}
//void test1()
//{
//	int number[] = { 1,2,3,4,5 };
//	int len = sizeof(number) / sizeof(int);
//	ListNode *phead = listcreat(number, len);
//	int knode = kthnode(len, phead);
//	cout << "kth node is: " << knode;
//}
//int main()
//{
//	test1();
//	cin.get(); cin.get();
//}

// 面试题24：反转链表
// 题目：定义一个函数，输入一个链表的头结点，反转该链表并输出反转后链表的
// 头结点。
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//}; 
//class Solution {
//public:
//	ListNode* ReverseList(ListNode* pHead)
//	{
//		if (pHead == nullptr || pHead->next == nullptr)
//			return pHead;
//		ListNode *pfir = nullptr;
//		ListNode *psec = pHead;
//		ListNode *pthr = pHead->next;
//		while (pthr != nullptr)
//		{
//			psec->next = pfir;
//			pfir = psec;
//			psec = pthr;
//			pthr = pthr->next;
//		}
//		psec->next = pfir;
//		return psec;
//	}
//};



//面试题25：输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
//using std::cout; using std::cin; using std::endl;
//struct ListNode {
//	int val;
//	struct ListNode *next;
//}; 
//ListNode* listcreat(int *number,int len)
//{
//	//int len = sizeof(number) / sizeof(int);         //注意。该对象的size只是1，不同于主函数中求大小，区别？
//	ListNode *phead; ListNode *pre;
//	phead = nullptr; pre = nullptr;
//	for (int i = 0; i < len; i++)
//	{
//		ListNode *pnext = new ListNode;
//		pnext->val = number[i];
//		pnext->next = nullptr;
//		if (phead == nullptr)
//		{
//			phead = pnext; 
//		}
//		else
//		{
//			pre->next = pnext;
//		}
//		pre = pnext;
//	}
//	return phead;
//}
////
//ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
//{
//	ListNode *p1 = pHead1;
//	ListNode *p2 = pHead2;
//	ListNode *pcur = nullptr;
//	ListNode *head = nullptr;
//	if (p1 == nullptr || p2 == nullptr)
//		return nullptr;
//	else if (p1 == nullptr&&p2 != nullptr)
//		return p2;
//	else if (p2 == nullptr&&p1 != nullptr)
//		return p1;
//	if (p1->val <= p2->val)
//	{
//		head = p1; pcur = p1;
//		p1 = p1->next;
//	}
//	else
//	{
//		head = p2; pcur = p2;
//		p2 = p2->next;
//	}
//	while (p1 != nullptr&&p2 != nullptr)
//	{
//		if (p1->val <= p2->val)
//		{
//			pcur->next = p1;
//			p1 = p1->next;
//		}
//		else
//		{
//			pcur->next = p2;
//			p2 = p2->next;
//		}
//		pcur = pcur->next;
//	}
//	if (p1 == nullptr&&p2 != nullptr)
//	{
//		pcur->next = p2;
//	}
//	else if (p2 == nullptr&&p1 != nullptr)
//	{
//		pcur->next = p1;
//	}
//	return head;
//
//}
//void test1()
//{
//	int p1[] = { 1,3,5 };
//	int p2[] = { 2,4,6 };
//	ListNode *phead1 = listcreat(p1, 3);
//	ListNode *phead2 = listcreat(p2, 3);
//	ListNode *merg = Merge(phead1, phead2);
//	while (merg != nullptr)
//	{
//		cout << merg->val << endl;
//		merg = merg->next;
//	}
//	
//}
//void test2()
//{
//	int p1[] = { 1,3,5 };
//
//	ListNode *phead1 = listcreat(p1, 3);
//	ListNode *phead2 = nullptr;
//	ListNode *merg = Merge(phead1, phead2);
//	while (merg != nullptr)
//	{
//		cout << merg->val << endl;
//		merg = merg->next;
//	}
//
//}
//int main()
//{
//	test2();
//	cin.get(); cin.get();
//}

//面试题26：输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
//使用递归，分成两个部分  1，首先判断根节点是否相同，2，判断子树是否相同   注意递归终止条件为  空指针 

//using std::cout; using std::cin; using std::endl;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//bool doestree1hastree2(TreeNode* pRoot1, TreeNode* pRoot2);
//TreeNode* CreateBinaryTreeNode(int dbValue)
//{
//	TreeNode* pNode = new TreeNode();
//	pNode->val = dbValue;
//	pNode->left = nullptr;
//	pNode->right = nullptr;
//
//	return pNode;
//}
//
//void ConnectTreeNodes(TreeNode* pParent, TreeNode* pLeft, TreeNode* pRight)
//{
//	if (pParent != nullptr)
//	{
//		pParent->left = pLeft;
//		pParent->right = pRight;
//	}
//}
//bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//{
//	bool results = false;
//	if (pRoot1 != nullptr&&pRoot2 != nullptr)
//	{
//		if (pRoot1->val == pRoot2->val)
//			results = doestree1hastree2(pRoot1, pRoot2);
//		if (!results)
//			results = HasSubtree(pRoot1->left, pRoot2);
//		if (!results)
//			results = HasSubtree(pRoot1->right, pRoot2);
//	}
//	return results;
//}
//bool doestree1hastree2(TreeNode* pRoot1, TreeNode* pRoot2)
//{
//	if (pRoot2 == nullptr)
//		return true;
//	if (pRoot1 == nullptr)
//		return false;
//	if (pRoot1->val != pRoot2->val)
//		return false;
//	return  doestree1hastree2(pRoot1->left, pRoot2->left) && doestree1hastree2(pRoot1->right, pRoot2->right);
//
//}
//
//
//void Test1()
//{
//	TreeNode* pNodeA1 = CreateBinaryTreeNode(8);
//	TreeNode* pNodeA2 = CreateBinaryTreeNode(8);
//	TreeNode* pNodeA3 = CreateBinaryTreeNode(7);
//	TreeNode* pNodeA4 = CreateBinaryTreeNode(9);
//	TreeNode* pNodeA5 = CreateBinaryTreeNode(3);
//	TreeNode* pNodeA6 = CreateBinaryTreeNode(4);
//	TreeNode* pNodeA7 = CreateBinaryTreeNode(7);
//
//	ConnectTreeNodes(pNodeA1, pNodeA2, pNodeA3);
//	ConnectTreeNodes(pNodeA2, pNodeA4, pNodeA5);
//	ConnectTreeNodes(pNodeA5, pNodeA6, pNodeA7);
//
//	TreeNode* pNodeB1 = CreateBinaryTreeNode(8);
//	TreeNode* pNodeB2 = CreateBinaryTreeNode(9);
//	TreeNode* pNodeB3 = CreateBinaryTreeNode(2);
//
//	ConnectTreeNodes(pNodeB1, pNodeB2, pNodeB3);
//
//	bool result=HasSubtree(pNodeA1, pNodeB1);
//	cout << result << endl;
//	//DestroyTree(pNodeA1);
//	//DestroyTree(pNodeB1);
//}
//int main()
//{
//	Test1();
//	cin.get(); cin.get();
//}