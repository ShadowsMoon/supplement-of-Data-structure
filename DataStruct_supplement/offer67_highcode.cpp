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
//ע�� ˼�룺��������ָ�룬����ʵ��ֻ����һ�μ���
//using std::cout; using std::cin; using std::endl;
//struct ListNode
//{
//	int val;
//	ListNode *mNext;
//};
//ListNode* listcreat(int *number,int len)
//{
//	//int len = sizeof(number) / sizeof(int);         //ע�⡣�ö����sizeֻ��1����ͬ�������������С������
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
////���Ǽ�������ͱ߽�����
//int kthnode(int len,ListNode *phead)
//{
//	if (phead == nullptr)   //1����ָ��
//		return 0;
//	int k; cin >> k;
//	if (k <= 0 || k >= len)  //2,k>�ܳ��� 3,k=0����Ȼ�����ϣ������Ƿ����﷨���ᱻִ��
//		return 0;
//	ListNode *p1 = phead;
//	ListNode *p2 = p1;
//	for (int i = 0; i < k-1; i++)
//	{
//		p2 = p2->mNext;   //����k-1����˵�������β�ڵ�ʱ��p1���ﵹ��kth�ڵ�,������������ַ�ռ䣩
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

// ������24����ת����
// ��Ŀ������һ������������һ�������ͷ��㣬��ת�����������ת�������
// ͷ��㡣
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



//������25�����������������������������������ϳɺ��������Ȼ������Ҫ�ϳɺ���������㵥����������
//using std::cout; using std::cin; using std::endl;
//struct ListNode {
//	int val;
//	struct ListNode *next;
//}; 
//ListNode* listcreat(int *number,int len)
//{
//	//int len = sizeof(number) / sizeof(int);         //ע�⡣�ö����sizeֻ��1����ͬ�������������С������
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

//������26���������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
//ʹ�õݹ飬�ֳ���������  1�������жϸ��ڵ��Ƿ���ͬ��2���ж������Ƿ���ͬ   ע��ݹ���ֹ����Ϊ  ��ָ�� 

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