
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
#include <functional>    //greater<int> //内置类型的由大到小排序   相反的为 less<int>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::multiset;        // multiset 和set 区别在于前者允许重复
using std::set;
using std::to_string;
using std::stack;
using std::sort;
using std::list;
//--------------------------------------------------------字符串类----------------------------------------------//
//面试题5
// 空格替换  (考虑string方式）
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
//	int indexori = orilen-1;             //注意这里应该不减一，因为减一后，直接指向最后一个字符，但'\0'没有被复制到最后，这样会导致会多出现一个空格。
//	int indexnew = orilen + newlen * 2-1 ;
//	if (indexnew > length)
//		return;
//	//从后往前检测
//	while (indexori >= 0 && indexnew > indexori)  //注意这里是，因为0的时候也代表正确索引
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

//面试题6
//------------------链表：从尾到头打印----------------//
// 1,使用栈， 2，使用递归（若长度很长，可能会导致函数调用栈溢出）
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

//面试题7
//-----二叉树重建----------------------------------------------------------------//
//using std::cout; using std::cin; using std::endl;
//struct BinaryTreeNode
//{
//	int val;
//	BinaryTreeNode *left;
//	BinaryTreeNode *right;
//};
////核心思想：前序遍历第一个必为根节点，中序遍历根节点左边为左子树，右边为右子树，依据递归来减小内容
//---------------vector version---------------------------//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}     //注意该形式的初始化
//};

//TreeNode*core(vector<int>::iterator prein, vector<int>::iterator preend, vector<int>::iterator midin, vector<int>::iterator midend);
//TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
//
//	if (pre.size() <= 0 || vin.size() <= 0)
//		return nullptr;
//	return core(pre.begin(), pre.end() - 1, vin.begin(), vin.end() - 1);
//}
// 注意对vector迭代器的操作，以及注意指向最后一个数据应该是 pre.end()-1
//TreeNode* core(vector<int>::iterator prein, vector<int>::iterator preend, vector<int>::iterator midin, vector<int>::iterator midend)
//{
//	TreeNode* root = new TreeNode(prein[0]);   //初始化
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
//	//前序遍历第一个值为根节点
//	int rootval = startpreod[0];
//	BinaryTreeNode *root = new BinaryTreeNode;
//	root->val = rootval;
//	root->left = nullptr; root->right = nullptr;
//	if (startpreod == endpreod)
//		return root;
//	//中序遍历找到根节点，就能区分左子树和右子树
//	int *rootinod = startinod;
//	while (rootinod <= endinod && *rootinod != rootval)
//		++rootinod;
//	//if()
//	int leftlength = rootinod - startinod;
//	int *leftendpreod=startpreod+leftlength;
//	if (leftlength > 0)   //注意与第二个判断语句的不同，主要原因 ：左右的区别
//	{
//		root->left = constructcore(startpreod + 1, leftendpreod, startinod, rootinod - 1);
//	}
//	if (leftlength < endpreod - startpreod)
//	{
//		root->right = constructcore(leftendpreod + 1, endpreod, rootinod + 1, endinod);
//	}
//	return root;
//}
////递归终止条件需进一步思考
//void FirstOrder(BinaryTreeNode *pf)     //先序排列（递归版本）
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


// 面试题8：二叉树的下一个结点
// 题目：给定一棵二叉树和其中的一个结点，如何找出中序遍历顺序的下一个结点？
// 树中的结点除了有两个分别指向左右子结点的指针以外，还有一个指向父结点的指针。
//version1：根据中序遍历的特点来寻找下一个节点 
//version2：直接进行中序遍历，然后找到下一节点

//using std::cout; using std::cin; using std::endl;
//struct BinaryTreeNode         //对应描述的二叉树结构体
//{
//	int val;
//	BinaryTreeNode *left;
//	BinaryTreeNode *right;
//	BinaryTreeNode *parent;
//};
//BinaryTreeNode * CreaBinTreeNode(int valu)       //首先生成对应值的各二叉树结点，然后有下面函数链接
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
//中序遍历下一节点特点： 
//1，一个节点有右子树，则下一个节点是他的右子树的最左节点（当没有最左，等价于右节点的左节点为空，因此就等于该右节点）
//2，无右子树，且节点是他父节点的左节点，则下一节点为父节点。
//3，无右子树，且为父节点的右节点，则往父节点向上寻找，知道找到某节点是其父节点的左子节点，则该左子节点的父节点就是目标节点的下一节点
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

//面试题9：用两个栈实现队列
//template<typename T>class Cqueue
//{
//public:
//	Cqueue(void);
//	~Cqueue(void);
//	void appendTail(const T& node);
//	T deleteHead();
//private:
//	std::stack<T>s1;      //stack 需要有相应的头文件和作用域解析运算符，否则出错
//	std::stack<T>s2;
//};
//template <typename T> Cqueue<T>::Cqueue(void)
//{
//}
//
//template <typename T> Cqueue<T>::~Cqueue(void)
//{
//}
////队列类操作
//template<typename T>void Cqueue<T>::appendTail(const T& ele)   //模板类与类格式的差异
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



//将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0
//输入一个字符串,包括数字字母符号,可以为空
//如果是合法的数值表达则返回该数字，否则返回0
//输入 +2147483647    输出 2147483647        输入  1a33    输出 0
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
//		return res;                           //不考虑溢出的情况
//	}
//};


//面试题
//给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。
//不能使用除法。（注意：规定B[0] = A[1] * A[2] * ... * A[n-1]，B[n-1] = A[0] * A[1] * ... * A[n-2];）
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






//面试题
//请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流中只读出前两个字符"go"时，
//第一个只出现一次的字符是"g"。当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。

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



//面试题
//请实现一个函数用来匹配包括'.'和'*'的正则表达式。
//模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次）。
//在本题中，匹配是指字符串的所有字符匹配整个模式。
//例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配
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

//面试题
//请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。
//例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。
//但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。
//有限状态自动机  （困难)

//class Solution {
//public:
//	char arr[10] = "+-n.ne+-n";      //对应状态的语义
//	int turn[10][9] = {
//		 //+  -  n   .  n  e  +   -  n
//		 {1, 1, 1, 1, 0, 0, 0, 0, 0},    // # start     0                       //行为状态，列为 输入，里面的值0，1代表是否可以跳跃，跳跃到输入的状态
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
//				if (turn[cur][j]) {      //当前cur 表示此时所处的状态，此时所处的状态从状态表可以看出只有 一些输入可使得该状态跳到下一个状态
//					if (('0' <= string[i] && string[i] <= '9' && arr[j] == 'n') ||
//						(string[i] == 'E' && arr[j] == 'e') ||     //因为 E和e一样 所以作为下面判断条件的补充。
//						string[i] == arr[j]) {          // 该语句包含三个判断条件：string=='+'    string=='-'    string=='e'      arr[10] = "+-n.ne+-n";
//						cur = j + 1;
//						break;
//					}                                           // "+-n.ne+-n"每一个字符代表一个状态，数组的1和0代表状态之间是否能直接跳跃，循环里的cur代表当前状态的行索引，
//                                                             //  arr数组维护列索引对应状态的语义，内部遍历列索引是要找下一个能跳转的状态，并改变行索引。
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

// offer 67 方法(易理解)
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


//用于求得某数组的平均值，并且得到离平均值最近的m个数

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
//			record.push_back(number[lo]);   ///注意赋值
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
//		int co= (value - aver)*(value-aver); //注意没有 绝对值号||,和平方号, ^2
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



//简单将 "12+25-30"变成正常运算结构后， 返回最终结果, (字符串)
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


//给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null。
//可以采用hashset方法，他不允许重复的插入
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


//在一个排序的链表中，存在重复的结点，
//请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5

//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//		val(x), next(NULL) {
//	}
//};
////在牛课上编译有问题
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