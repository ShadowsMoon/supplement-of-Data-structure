
#include<iostream>
#include <cstdio>
#include<vector>
#include<stack>
#include<list>
#include <cstdio>
#include<string>
#include<ctime>
#include<algorithm>
#include<set>
#include <functional>    //greater<int> //�������͵��ɴ�С����   �෴��Ϊ less<int>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::multiset;        // multiset ��set ��������ǰ�������ظ�
using std::set;
using std::to_string;
using std::stack;
using std::sort;
using std::list;
//--------------------------------------------------------�ַ�����----------------------------------------------//
//������5
// �ո��滻  (����string��ʽ��
//void replaceSpace(char *str, int length)
//{
//	if (str == nullptr&&length < 0)
//		return;
//	int orilen = 0; int newlen = 0;
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		++orilen;
//		if (str[i] == ' ')
//			++newlen;
//		++i;
//	}
//	int indexori = orilen-1;             //ע������Ӧ�ò���һ����Ϊ��һ��ֱ��ָ�����һ���ַ�����'\0'û�б����Ƶ���������ᵼ�»�����һ���ո�
//	int indexnew = orilen + newlen * 2-1 ;
//	if (indexnew > length)
//		return;
//	//�Ӻ���ǰ���
//	while (indexori >= 0 && indexnew > indexori)  //ע�������ǣ���Ϊ0��ʱ��Ҳ������ȷ����
//	{
//		if (str[indexori] == ' ')
//		{
//			str[indexnew--] = '0';
//			str[indexnew--] = '2';
//			str[indexnew--] = '%';
//		}
//		else
//		{
//			str[indexnew--] = str[indexori];
//		}
//		indexori--;
//	}
//}
//
//
//int main()
//{
//	char str1[20] = " helloworld";
//	int len = 20;
//	replaceSpace(str1, len);
//	std::cout << str1 <<std::endl;
//	std::cin.get(); std:: cin.get();
//}

//������6
//------------------������β��ͷ��ӡ----------------//
// 1,ʹ��ջ�� 2��ʹ�õݹ飨�����Ⱥܳ������ܻᵼ�º�������ջ�����
//#include<stack>
//
//struct Listnode {
//	char val;
//	Listnode *next;
//};
//std::vector<char> printListver(Listnode *phead)
//{
//	std::stack<char> midlist;
//	std::vector<char> fin;
//	if (phead == nullptr)
//		return fin;
//	while (phead)
//	{
//		midlist.push(phead->val);
//		phead = phead->next;
//	}
//	int listlen = midlist.size();
//	for (int i = 0; i < listlen; i++)
//	{
//		std::cout << midlist.top() << std::endl;
//		fin.push_back( midlist.top());                  //if using fin[i] would be wrong!!
//		midlist.pop();
//	}
//	return fin;
//}
//
//int main()
//{
//	int len;
//	std::cin >> len;
//	Listnode *phead = nullptr;
//	Listnode *pre = nullptr;
//	for (int i = 0; i < len; i++)
//	{
//		char a;
//		std::cin >> a;
//		Listnode *pnew = new Listnode;
//		pnew->val = a;
//		pnew->next = nullptr;
//		if (phead == nullptr)
//		{
//			phead = pnew; pre = pnew;
//		}
//		else
//		{
//			Listnode *pnode = pnew;
//			pre->next = pnode;
//			pre = pnode;
//		}	
//	}
//	//while (phead)
//	//{
//	//	std::cout << phead->val <<std::endl;
//	//	phead = phead->next;
//	//}
//	std::vector<char>a=printListver(phead);
//	std::cin.get(); std::cin.get();
//}

//������7
//-----�������ؽ�----------------------------------------------------------------//
//using std::cout; using std::cin; using std::endl;
//struct BinaryTreeNode
//{
//	int val;
//	BinaryTreeNode *left;
//	BinaryTreeNode *right;
//};
////����˼�룺ǰ�������һ����Ϊ���ڵ㣬����������ڵ����Ϊ���������ұ�Ϊ�����������ݵݹ�����С����
//---------------vector version---------------------------//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}     //ע�����ʽ�ĳ�ʼ��
//};

//TreeNode*core(vector<int>::iterator prein, vector<int>::iterator preend, vector<int>::iterator midin, vector<int>::iterator midend);
//TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
//
//	if (pre.size() <= 0 || vin.size() <= 0)
//		return nullptr;
//	return core(pre.begin(), pre.end() - 1, vin.begin(), vin.end() - 1);
//}
// ע���vector�������Ĳ������Լ�ע��ָ�����һ������Ӧ���� pre.end()-1
//TreeNode* core(vector<int>::iterator prein, vector<int>::iterator preend, vector<int>::iterator midin, vector<int>::iterator midend)
//{
//	TreeNode* root = new TreeNode(prein[0]);   //��ʼ��
//	//root->val = prein[0];
//	//root->left = nullptr;
//	//root->right = nullptr;
//	if (prein == preend)
//		return root;
//	int firstval = prein[0];
//	vector<int>::iterator rootin = midin;
//	while (rootin <= midend && *rootin != firstval)
//		rootin++;
//	int length = rootin - midin;
//	vector<int>::iterator preleftend = prein + length;
//	if (length > 0)
//		root->left = core(prein + 1, preleftend, midin, rootin - 1);
//	if (length < preend - prein)
//		root->right = core(preleftend + 1, preend, rootin + 1, midend);
//	return root;
//}

//BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod);
//BinaryTreeNode *construct(int* preorder, int* inorder, int length)
//{
//	if (preorder == nullptr || inorder == nullptr || length <= 0)
//		return nullptr;
//	return constructcore(preorder, preorder + length - 1, inorder, inorder + length - 1);
//}
//BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod)
//{
//	//ǰ�������һ��ֵΪ���ڵ�
//	int rootval = startpreod[0];
//	BinaryTreeNode *root = new BinaryTreeNode;
//	root->val = rootval;
//	root->left = nullptr; root->right = nullptr;
//	if (startpreod == endpreod)
//		return root;
//	//��������ҵ����ڵ㣬����������������������
//	int *rootinod = startinod;
//	while (rootinod <= endinod && *rootinod != rootval)
//		++rootinod;
//	//if()
//	int leftlength = rootinod - startinod;
//	int *leftendpreod=startpreod+leftlength;
//	if (leftlength > 0)   //ע����ڶ����ж����Ĳ�ͬ����Ҫԭ�� �����ҵ�����
//	{
//		root->left = constructcore(startpreod + 1, leftendpreod, startinod, rootinod - 1);
//	}
//	if (leftlength < endpreod - startpreod)
//	{
//		root->right = constructcore(leftendpreod + 1, endpreod, rootinod + 1, endinod);
//	}
//	return root;
//}
////�ݹ���ֹ�������һ��˼��
//void FirstOrder(BinaryTreeNode *pf)     //�������У��ݹ�汾��
//{
//	if (pf == nullptr)
//		return;
//	cout << pf->val << endl;
//	FirstOrder(pf->left);
//	FirstOrder(pf->right);
//}
//
//
//int main()
//{
//	int preord[] = { 1, 2, 4, 5, 3, 6, 7 };
//	int inord[] = { 4, 2, 5, 1, 6, 3, 7 };
//	int len = sizeof(preord) / sizeof(int);
//	BinaryTreeNode *p = construct(preord, inord, len);
//	cout << "the original pre: " << endl;
//	for (int i = 0; i < len;i++)
//		cout << preord[i] << " ";
//	cout << "the final pre:" << endl;
//	FirstOrder(p);
//	cin.get(); cin.get();
//
//}


// ������8������������һ�����
// ��Ŀ������һ�ö����������е�һ����㣬����ҳ��������˳�����һ����㣿
// ���еĽ������������ֱ�ָ�������ӽ���ָ�����⣬����һ��ָ�򸸽���ָ�롣
//version1����������������ص���Ѱ����һ���ڵ� 
//version2��ֱ�ӽ������������Ȼ���ҵ���һ�ڵ�

//using std::cout; using std::cin; using std::endl;
//struct BinaryTreeNode         //��Ӧ�����Ķ������ṹ��
//{
//	int val;
//	BinaryTreeNode *left;
//	BinaryTreeNode *right;
//	BinaryTreeNode *parent;
//};
//BinaryTreeNode * CreaBinTreeNode(int valu)       //�������ɶ�Ӧֵ�ĸ���������㣬Ȼ�������溯������
//{
//	BinaryTreeNode *Pnode = new BinaryTreeNode;
//	Pnode->val = valu;
//	Pnode->left = nullptr;
//	Pnode->right = nullptr;
//	Pnode->parent = nullptr;
//	return Pnode;
//}
//void ConnectTreeNodes(BinaryTreeNode *mParent, BinaryTreeNode *mLeft, BinaryTreeNode *mRight)
//{
//	if (mParent != nullptr)
//	{
//		mParent->left = mLeft;
//		mParent->right = mRight;
//		if (mLeft != nullptr)
//			mLeft->parent = mParent;
//		if (mRight != nullptr)
//			mRight->parent = mParent;
//	}
//}
//���������һ�ڵ��ص㣺 
//1��һ���ڵ���������������һ���ڵ�������������������ڵ㣨��û�����󣬵ȼ����ҽڵ����ڵ�Ϊ�գ���˾͵��ڸ��ҽڵ㣩
//2�������������ҽڵ��������ڵ����ڵ㣬����һ�ڵ�Ϊ���ڵ㡣
//3��������������Ϊ���ڵ���ҽڵ㣬�������ڵ�����Ѱ�ң�֪���ҵ�ĳ�ڵ����丸�ڵ�����ӽڵ㣬������ӽڵ�ĸ��ڵ����Ŀ��ڵ����һ�ڵ�
//BinaryTreeNode *GetNextNode(BinaryTreeNode *Pnode)
//{
//	if (Pnode == nullptr)
//		return nullptr;
//	BinaryTreeNode *Pnext = nullptr;
//	if (Pnode->right != nullptr)
//	{
//		BinaryTreeNode *Pright = Pnode->right;
//		while (Pright->left != nullptr)
//			Pright = Pright->left;
//		Pnext = Pright;
//	}
//	else
//	{
//		BinaryTreeNode *ppar = Pnode->parent;
//		if (ppar->left != Pnode)
//		{
//			BinaryTreeNode *pplf = ppar;
//			ppar = ppar->parent;
//			while (ppar->left != pplf)
//			{
//				pplf = ppar; ppar = ppar->parent;
//			}
//			Pnext = ppar;
//		}
//		else
//			Pnext = ppar;
//
//	}
//	return Pnext;
//}
//
//void DestoryBinTree(BinaryTreeNode *Pnode)
//{
//	if (Pnode == nullptr)
//		return;
//	BinaryTreeNode *pleft = Pnode->left;
//	BinaryTreeNode *pright = Pnode->right;
//	delete Pnode;
//	Pnode = nullptr;
//	DestoryBinTree(pleft);
//	DestoryBinTree(pright);
//}
////            8
////        6      10
////       5 7    9  11
//void test1()
//{
//	BinaryTreeNode* pNode8 = CreaBinTreeNode(8);
//	BinaryTreeNode* pNode6 = CreaBinTreeNode(6);
//	BinaryTreeNode* pNode10 = CreaBinTreeNode(10);
//	BinaryTreeNode* pNode5 = CreaBinTreeNode(5);
//	BinaryTreeNode* pNode7 = CreaBinTreeNode(7);
//	BinaryTreeNode* pNode9 = CreaBinTreeNode(9);
//	BinaryTreeNode* pNode11 = CreaBinTreeNode(11);
//
//	ConnectTreeNodes(pNode8, pNode6, pNode10);
//	ConnectTreeNodes(pNode6, pNode5, pNode7);
//	ConnectTreeNodes(pNode10, pNode9, pNode11);
//
//	BinaryTreeNode *ptest = GetNextNode(pNode6);    BinaryTreeNode *pfact = pNode7;
//	if (pfact == ptest)
//		cout << "correct" << endl;
//	else
//		cout << "wrong" << endl;
//	DestoryBinTree(pNode8);
//}
//
//int main(int argc, char* argv[])
//{
//	test1();
//	cin.get(); cin.get();
//}

//������9��������ջʵ�ֶ���
//template<typename T>class Cqueue
//{
//public:
//	Cqueue(void);
//	~Cqueue(void);
//	void appendTail(const T& node);
//	T deleteHead();
//private:
//	std::stack<T>s1;      //stack ��Ҫ����Ӧ��ͷ�ļ��������������������������
//	std::stack<T>s2;
//};
//template <typename T> Cqueue<T>::Cqueue(void)
//{
//}
//
//template <typename T> Cqueue<T>::~Cqueue(void)
//{
//}
////���������
//template<typename T>void Cqueue<T>::appendTail(const T& ele)   //ģ���������ʽ�Ĳ���
//{
//	std::cout << ele << ",";
//	s1.push(ele);
//}
//template<typename T>T Cqueue<T>::deleteHead()
//{
//	if (s2.size() <= 0)
//	{
//		while (!s1.empty())
//		{
//			s2.push(s1.top());
//			s1.pop();
//		}
//	}
//	//if (s2.size() == 0)
//	//	 throw new exception("queue is empty");
//	T data = s2.top();
//	s2.pop();
//	return data;
//}



//��һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯���� ��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0
//����һ���ַ���,����������ĸ����,����Ϊ��
//����ǺϷ�����ֵ����򷵻ظ����֣����򷵻�0
//���� +2147483647    ��� 2147483647        ����  1a33    ��� 0
//using std::string;
//
//class Solution {
//public:
//	int StrToInt(string str) {
//		if (str.size() < 1)
//			return 0;
//		int len = str.size(),s=1;
//		if (str[0] == '-') s = -1;
//		int res=0;
//		for (int i = (str[0] == '-' || str[0] == '+') ? 1 : 0; i < len; i++)
//		{
//			if (str[i]<'0'&&str[i]>'9') return 0;
//			res = res << 1 + res << 3 + str[i] & 0xf;   //str[i]-'0'
//		}
//		res = res * s;
//		return res;                           //��������������
//	}
//};


//������
//����һ������A[0,1,...,n-1],�빹��һ������B[0,1,...,n-1],����B�е�Ԫ��B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]��
//����ʹ�ó�������ע�⣺�涨B[0] = A[1] * A[2] * ... * A[n-1]��B[n-1] = A[0] * A[1] * ... * A[n-2];��
//class Solution {
//public:
//	vector<int> multiply(const vector<int>& A) 
//	{
//		if (A.size() < 2)
//			return A;
//		vector<int>record{A};
//		int len = A.size();
//		record[0] = 1;
//		for (int i = 1; i < len; ++i)
//		{
//			record[i] = record[i - 1] * A[i - 1];
//		}
//		int temp = 1;
//		for (int j = len - 2; j >= 0; j--)
//		{
//			temp *= A[j + 1];
//			record[j] *= temp;
//		}
//		return record;
//	}
//};






//������
//��ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ������磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ��
//��һ��ֻ����һ�ε��ַ���"g"�����Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"��

//class Solution
//{
//public:
//	//Insert one char from stringstream
//	string s;
//	int hash[256] = { 0 };
//	void Insert(char ch)
//	{
//		s += ch;
//		hash[ch]++;
//	}
//	//return the first appearence once char in current stringstream
//	char FirstAppearingOnce()
//	{
//
//		int size = s.size();
//		for (int i = 0; i < size; ++i)
//		{
//			if (hash[s[i]] == 1)
//				return s[i];
//		}
//		return '#';
//	}
//
//};



//������
//��ʵ��һ����������ƥ�����'.'��'*'��������ʽ��
//ģʽ�е��ַ�'.'��ʾ����һ���ַ�����'*'��ʾ��ǰ����ַ����Գ�������Σ�����0�Σ���
//�ڱ����У�ƥ����ָ�ַ����������ַ�ƥ������ģʽ��
//���磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ�䣬������"aa.a"��"ab*a"����ƥ��
//class Solution {
//public:
//	bool match(char* str, char* pattern)
//	{
//		if (str == nullptr&&pattern == nullptr)
//			return false;
//		if (str == '\0'&&pattern == '\0')
//			return true;
//		if (str != '\0'&&pattern == '\0')
//			return false;
//		if (*(pattern + 1) == '*')
//		{
//			if (*str == *pattern || (*pattern == '.'&&str != '\0'))
//			{
//				return match(str + 1, pattern + 2) || match(str + 1, pattern) || match(str, pattern+2);
//			}
//			else
//				return match(str, pattern + 2);
//		}
//		else
//		{
//			if (*str == *pattern || (*pattern == '.'&&str != '\0'))
//				return match(str + 1, pattern + 1);
//		}
//		return false;
//	}
//};

//������
//��ʵ��һ�����������ж��ַ����Ƿ��ʾ��ֵ������������С������
//���磬�ַ���"+100","5e2","-123","3.1416"��"-1E-16"����ʾ��ֵ��
//����"12e","1a3.14","1.2.3","+-5"��"12e+4.3"�����ǡ�
//����״̬�Զ���  ������)

//class Solution {
//public:
//	char arr[10] = "+-n.ne+-n";      //��Ӧ״̬������
//	int turn[10][9] = {
//		 //+  -  n   .  n  e  +   -  n
//		 {1, 1, 1, 1, 0, 0, 0, 0, 0},    // # start     0                       //��Ϊ״̬����Ϊ ���룬�����ֵ0��1�����Ƿ������Ծ����Ծ�������״̬
//		 {0, 0, 1, 1, 0, 0, 0, 0, 0},    // +             1
//		 {0, 0, 1, 1, 0, 0, 0, 0, 0},    // -              2
//		 {0, 0, 1, 1, 0, 1, 0, 0, 0},    // n              3
//		 {0, 0, 0, 0, 1, 0, 0, 0, 0},    // .               4
//		 {0, 0, 0, 0, 1, 1, 0, 0, 0},    // n              5   
//		 {0, 0, 0, 0, 0, 0, 1, 1, 1},    // e              6
//		 {0, 0, 0, 0, 0, 0, 0, 0, 1},    // +              7
//		 {0, 0, 0, 0, 0, 0, 0, 0, 1},    // -               8
//		 {0, 0, 0, 0, 0, 0, 0, 0, 1}     // n              9
//	};
//	bool isNumeric(char* string) {
//		int cur = 0;
//		for (int j, i = 0; string[i]; i++) {
//			for (j = 0; j < 9; j++) {
//				if (turn[cur][j]) {      //��ǰcur ��ʾ��ʱ������״̬����ʱ������״̬��״̬����Կ���ֻ�� һЩ�����ʹ�ø�״̬������һ��״̬
//					if (('0' <= string[i] && string[i] <= '9' && arr[j] == 'n') ||
//						(string[i] == 'E' && arr[j] == 'e') ||     //��Ϊ E��eһ�� ������Ϊ�����ж������Ĳ��䡣
//						string[i] == arr[j]) {          // �������������ж�������string=='+'    string=='-'    string=='e'      arr[10] = "+-n.ne+-n";
//						cur = j + 1;
//						break;
//					}                                           // "+-n.ne+-n"ÿһ���ַ�����һ��״̬�������1��0����״̬֮���Ƿ���ֱ����Ծ��ѭ�����cur����ǰ״̬����������
//                                                             //  arr����ά����������Ӧ״̬�����壬�ڲ�������������Ҫ����һ������ת��״̬�����ı���������
//				}
//			}
//			if (j == 9) return false;
//		}
//		if (cur == 3 || cur == 4 || cur == 5 || cur == 9)
//			return true;
//		return false;
//	}
//
//
//};

// offer 67 ����(�����)
//class Solution {
//public:
//	bool isNumeric(char* string) {
//		if (string == nullptr)
//			return false;
//		bool num = scanInterger(&string);
//		if (*string == '.')
//		{
//			++string;
//			num = num || scanUnsigned(&string);
//		}
//		if (*string == 'e' || *string == 'E')
//		{
//			++string;
//			num = num & scanInterger(&string);
//		}
//		return num;
//	}
//
//	bool scanInterger(char **str)
//	{
//		if (**str == '+' || **str == '-')
//			++(*str);
//		return scanUnsigned(str);
//	}
//	bool scanUnsigned(char **str)
//	{
//	    char *before = *str;
//		while (**str != '\0'&&**str >= '0'&&**str <= '9')
//			++(*str);
//		return *str > before;
//	}
//};
//
//void Test(const char* testName,  char* str, bool expected)
//{
//	if (testName != nullptr)
//		printf("%s begins: ", testName);
//	Solution te;
//	if (te.isNumeric(str) == expected)
//		printf("Passed.\n");
//	else
//		printf("FAILED.\n");
//}
//
//
//int main(int argc, char* argv[])
//{
//	char t1[] = ".5";
//	Test("Test1", t1, true);
//	char t2[] = "123.45e+6";
//	Test("Test2", t2, true);
//	char t3[] = "+500";
//	Test("Test3",t3, true);
//	char t4[] = "5e2";
//	Test("Test4", t4, true);
//	char t5[] = "3.1416";
//	Test("Test5", t5, true);
//	char t6[] = "600.";
//	Test("Test6", t6, true);
//	char t7[] = "-.123";
//	Test("Test7", t7, true);
//	char t8[] = "-1E-16";
//	Test("Test8",t8, true);
//	char t9[] = "1.79769313486232E+308";
//	Test("Test9", t9, true);
//
//	/*printf("\n\n");
//	char t10[] = "100";
//	Test("Test10", "12e", false);
//	char t11[] = "100";
//	Test("Test11", "1a3.14", false);
//	char t2[] = "100";
//	Test("Test12", "1+23", false);
//	char t3[] = "100";
//	Test("Test13", "1.2.3", false);
//	char t4[] = "100";
//	Test("Test14", "+-5", false);
//	char t5[] = "100";
//	Test("Test15", "12e+5.4", false);
//	char t6[] = "100";
//	Test("Test16", ".", false);
//	char t7[] = "100";
//	Test("Test17", ".e1", false);
//	char t8[] = "100";
//	Test("Test18", "e1", false);
//	char t9[] = "100";
//	Test("Test19", "+.", false);
//	char t10[] = "100";
//	Test("Test20", "", false);
//	char t11[] = "100";*/
//	//Test("Test21", nullptr, false);
//	cin.get(); cin.get();
//	return 0;
//}


//�������ĳ�����ƽ��ֵ�����ҵõ���ƽ��ֵ�����m����

//class Solution {
//public:
//	vector<int> min_aver(vector<int>number, int m)
//	{
//		if (number.size() <= m)
//			return number;
//		 aver_num(number,number.size());
//		int lo = 0, small_index ;
//		vector<int>record;
//		for (; lo < m; lo++)
//		{
//			small_index = lo;
//			for (int j = lo; j < number.size(); j++)
//			{
//				if (aver_dis(number[small_index]) >aver_dis(number[j]))
//				{
//					small_index = j;
//				}
//			}
//			if (small_index != lo)
//			{
//				number[lo] = number[lo] + number[small_index];
//				number[small_index] = number[lo] - number[small_index];
//				number[lo] = number[lo] - number[small_index];
//			}
//			record.push_back(number[lo]);   ///ע�⸳ֵ
//		}
//		return record;
//	}
//	void aver_num(vector<int>&number,int len)
//	{
//		for (int i = 0; i < len; i++)
//			aver = aver + number[i];
//		aver = aver / len;
//	}
//	int aver_dis(int value)
//	{
//		int co= (value - aver)*(value-aver); //ע��û�� ����ֵ��||,��ƽ����, ^2
//		return co;
//	}
//	int aver=0;
//};
//
//void test()
//{
//	vector<int>t1 = { 2,5,3,10,15 };
//	Solution te;
//	vector<int>record=te.min_aver(t1,3);
//	for (int i = 0; i < 3; i++)
//		cout << record[i]<<endl;
//}
//
//int main()
//{
//	test();
//	cin.get(); cin.get();
//	return 0;
//}



//�򵥽� "12+25-30"�����������ṹ�� �������ս��, (�ַ���)
//class Solution {
//public:
//	int count_num(string str)
//	{
//		if (str.size()<=1)
//			return 0;
//
//		for (int lo = 0; lo < str.size();)
//		{
//			if (str[lo] >= '0'&&str[lo] <= '9')
//			{
//				num_index(str, lo);
//			}
//			if (lo < str.size() && (str[lo] == '+' || str[lo] == '-'))
//			{
//				comput.push_back(str[lo++]);
//			}
//		}
//		return operat();
//	}
//	void num_index(string &str,int& lo)
//	{
//		int temp = 0;
//		while (str[lo] >= '0'&&str[lo] <= '9'&&lo<str.size())
//		{
//			temp = temp*10 + str[lo++] - '0';
//		}
//		num.push_back(temp);
//	}
//	int operat()
//	{
//		for (int i = 0,j=0; i < num.size()-1; i++)
//		{
//			if (comput[j++] == '+')
//				num[i + 1] = num[i] + num[i + 1];
//			else 
//				num[i + 1] = num[i] - num[i + 1];
//		}
//		return num[num.size() - 1];
//	}
//
//	vector<int>num;
//	vector<char>comput;
//};
//void test()
//{
//	string str = { "12+25-30-10" };
//	Solution t1;
//	int value=t1.count_num(str);
//	cout << value;
//}
//
//int main()
//{
//	test();
//	cin.get(); cin.get();
//}


//��һ�����������а����������ҳ�������Ļ�����ڽ�㣬�������null��
//���Բ���hashset���������������ظ��Ĳ���
//HashSet<ListNode> set = new HashSet<ListNode>();
//while (pHead != null) {
//
//	if (!set.add(pHead)) {
//
//		return pHead;
//
//	}
//
//	pHead = pHead.next;
//
//}
//returnnull;


//��һ������������У������ظ��Ľ�㣬
//��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 ���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5

//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
////��ţ���ϱ���������
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		if (pHead == nullptr)
//			return nullptr;
//		ListNode *proot = pHead;
//
//		vector<ListNode*>record;
//		ListNode*re = pHead;
//		ListNode*cur = pHead->next;
//		ListNode*temp;
//		while (re != nullptr)
//		{
//			if (cur == nullptr || re->val != cur->val)
//			{
//				record.push_back(re);
//				re = cur;
//				if (re == nullptr)
//					break;
//				cur = cur->next;
//			}
//			else if(re->val == cur->val)
//			{
//				temp = cur;
//				re = cur->next;
//				cur = re->next;
//				if (re != nullptr&&cur == nullptr)
//				{
//					if (temp->val == re->val)
//						break;
//				}
//			}
//		}
//		for (int i = 0; i < record.size(); i++)
//		{
//			proot = record[i];
//			if (i + 1 >= record.size())
//			{
//				return record[0];
//			}
//			proot->next = record[i + 1];
//		}
//		return nullptr;
//	}
//};
//
//ListNode* creatList(vector<int>a)
//{
//	ListNode *proot=new ListNode(a[0]);
//	ListNode *phead=proot;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (i + 1 < a.size())
//		{
//			ListNode *pnext = new ListNode(a[i + 1]);
//			proot->next = pnext;
//			proot = proot->next;
//		}
//		else
//			break;
//	}
//	return phead;
//}
//void test()
//{
//	vector<int> a1 = { 1,2,3,3,4,4,5 };
//	vector<int> a2 = { 1,1,1,1,2 };
//	ListNode *phead = creatList(a2);
//	Solution t1;
//	ListNode*final= t1.deleteDuplication(phead);
//	while (final != nullptr)
//	{
//		cout << final->val;
//		final = final->next;
//	}
//
//}
//int main()
//{
//	test();
//	cin.get(); cin.get();
//}