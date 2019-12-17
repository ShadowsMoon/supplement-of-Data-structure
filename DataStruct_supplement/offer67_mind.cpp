#include<iostream>
#include<vector>
#include<stack>
//面试题26：操作给定的二叉树，将其变换为源二叉树的镜像。
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//}; 
//class Solution {
//public:
//	void Mirror(TreeNode *pRoot)
//	{
//		if (pRoot == nullptr)          //细节注意：无返回函数的递归可以：return;
//			return;
//		if (pRoot->left == nullptr&&pRoot->right == nullptr)
//			return;
//		TreeNode *pmid = nullptr;
//		pmid = pRoot->left;
//		pRoot->left = pRoot->right;
//		pRoot->right = pmid;
//
//		if (pRoot->left)
//			Mirror(pRoot->left);
//		if (pRoot->right != nullptr)
//			Mirror(pRoot->right);
//	}
//};

//输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
//例如，如果输入如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
//#include<vector>
//using std::cout; using std::cin; using std::endl; using std::vector;
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix)
//	{
//		if (matrix.empty())
//		{
//			vector<int>nullmar;
//			return nullmar;
//		}
//		vector<int> record_mar;
//		int start = 0;
//		int row = matrix.size();  //row 为 行
//		int col = matrix[0].size();
//		while (col > start * 2 && row > start * 2)
//		{
//			printmain(matrix, col, row, start, record_mar);
//			++start;
//		}
//		return record_mar;
//	}
//	void printmain(vector<vector<int> > matrix, int col, int row, int start, vector<int>&ma)
//	{
//		int endx = col - 1 - start;
//		int endy = row - 1 - start;
//		for (int i = start; i <= endx; i++)
//		{
//			int number = matrix[start][i];
//			ma.push_back(number);         //cout<<number<<endl;
//		}
//		if (start < endy)                        //
//		{
//			for (int i = start + 1; i <= endy; i++)
//			{
//				int number = matrix[i][endx];
//				ma.push_back(number);         // cout<<number<<endl;
//			}
//		}
//		if (start < endx&&start < endy)
//		{
//			for (int i = endx - 1; i >= start; i--)
//			{
//				int number = matrix[endy][i];
//				ma.push_back(number);         // cout<<number<<endl;
//			}
//		}
//		if (start < endx&&start + 1 < endy)
//		{
//			for (int i = endy - 1; i >= start + 1; i--)
//			{
//				int number = matrix[i][start];
//				ma.push_back(number);         //cout<<number<<endl;
//			}
//		}
//
//
//	}
//
//};

//面试题31（本质：栈混洗）
//输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。
//假设压入栈的所有数字均不相等。例如序列1, 2, 3, 4, 5是某栈的压入顺序，序列4, 5, 3, 2, 1是该压栈序列对应的一个弹出序列，
//但4, 3, 5, 1, 2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）

//using std::cout; using std::cin; using std::endl; using std::vector; using std::stack;
//bool IsPopOrder(vector<int> pushV, vector<int> popV) {
//	bool eval = true;
//	if (pushV.size() != popV.size() || pushV.size() == 0)
//		return false;
//	int len = pushV.size();
//	int n = 0, i = 0;
//	stack<int>s;
//	for (; n < len; n++)
//	{
//		while (s.empty() || s.top() != popV[n])     //核心：若辅助栈为空，则从输入序列添加数据；若辅助栈顶部不等于输出数据，则加数据
//		{
//			if (i < len)
//			{
//				s.push(pushV[i]);
//				i++;
//			}
//			else
//				return false;
//		}
//		s.pop();
//	}
//	return eval;
//}
//void test1()
//{
//	vector<int>pu1 = { 1,2,3,4,5 };
//	vector<int>po1 = { 4,5,3,2,1 };
//	bool jud = IsPopOrder(pu1, po1);
//	if (jud)
//		cout << "true"<<endl;
//	else
//		cout << "false"<<endl;
//}
//void test2()
//{
//	vector<int>pu1 = { 1,2,3,4,5 };
//	vector<int>po1 = { 4,3,5,1,2 };
//	bool jud = IsPopOrder(pu1, po1);
//	if (jud)
//		cout << "true";
//	else
//		cout << "false";
//}
//int main()
//{
//
//	cout << "test1: " << endl;
//	test1();
//	cout << "test2:" << endl;
//	test2();
//	cin.get(); cin.get();
//}


//从上往下打印出二叉树的每个节点，同层节点从左至右打印。本质：层次遍历
//#include<queue>
//using namespace std;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//}; 
//TreeNode *CreateBinaryTreeNode(int val)
//{
//	TreeNode* pnode = new TreeNode(val);
//	return pnode;
//}
//void ConnectTreeNodes(TreeNode *proot, TreeNode *pleft, TreeNode *pright)
//{
//	proot->left = pleft;
//	proot->right = pright;
//
//}
////----------------------------------------------------------------------------//
//vector<int>PrintFromTopToBottom(TreeNode* root)
//{
//	vector<int>record;
//	if (root == nullptr)return record;
//	queue<TreeNode*>q;      //队列，先进先出；同样的功能 deque
//	q.push(root);
//	TreeNode *rt;
//	while (!q.empty())
//	{
//		rt = q.front();
//		record.push_back(rt->val);
//		if (rt->left != nullptr)
//			q.push(rt->left);
//		if (rt->right != nullptr)
//			q.push(rt->right);
//		q.pop();
//	}
//	return record;
//}
//void DestroyTree(TreeNode *proot)
//{
//
//	if (proot != nullptr)
//	{
//	   TreeNode* pLeft = proot->left;
//	  TreeNode* pRight = proot->right;
//
//		delete proot;
//		proot = nullptr;
//
//		DestroyTree(pLeft);
//		DestroyTree(pRight);
//	}
//
//}
////---------------------------------------------------------------------//
//void Test1()
//{
//	TreeNode* pNodeA1 = CreateBinaryTreeNode(8);
//	TreeNode* pNodeA2 = CreateBinaryTreeNode(1);
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
//	vector<int>result = PrintFromTopToBottom(pNodeA1);
//	vector<int>:: iterator val = result.begin();
//	while (val<result.end())
//	{
//		cout << *val<< endl;
//		++val;
//	}
//
//	DestroyTree(pNodeA1);
//	
//}
//int main()
//{
//	Test1();
//	cin.get(); cin.get();
//}

//面试题31
//输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
//using namespace std;
//bool JudgeBackOrder(vector<int>::iterator fir, vector<int>::iterator sec);
//bool VerifySquenceOfBST(vector<int> sequence)
//{
//	if (sequence.size()==0)
//		return false;
//	if (sequence.size() == 1)
//		return true;
//	vector<int>::iterator Firstseq = sequence.begin();
//	vector<int>::iterator Finalseq = sequence.end();
//	return  JudgeBackOrder(Firstseq, Finalseq);
//}
//bool JudgeBackOrder(vector<int>::iterator fir, vector<int>::iterator sec)
//{
//	int finalnode = *(sec - 1);
//	int i = 0;
//	for (; i + fir < sec - 1; i++)
//	{
//		if (*(i + fir) > finalnode)
//			break;
//	}
//	int j = i;
//	for (; j + fir < sec - 1; j++)
//	{
//		if (*(fir + j) < finalnode)
//			return false;
//	}
//	bool left = true;
//	if (i > 0)
//		left = JudgeBackOrder(fir, i + fir);
//	bool right = true;
//	if (j + fir < sec - 1)
//		right = JudgeBackOrder(fir + i, sec - 1);
//	return left && right;
//}
//
//void Test1()
//{
//	vector<int>test1 = { 5,7,6,9,11,10,8 };
//	cout << VerifySquenceOfBST(test1);
//}
//
//void Test2()
//{
//	vector<int>test2 = { 4, 8, 6, 12, 16, 14, 10 };
//	cout << VerifySquenceOfBST(test2);
//}
//
//void Test3()
//{
//	vector<int>test3 = { 7, 4, 6, 5 };
//	cout << VerifySquenceOfBST(test3);
//}
//int main() 
//{
//	cout << "test1:";
//	Test1();
//	cout << " test2:";
//	Test2();
//	cout << " test3: ";
//	Test3();
//	cin.get(); cin.get();
//}

//面试题32：输入一颗二叉树的跟节点和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
//路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。(注意: 在返回值的list中，数组长度大的数组靠前)
//using namespace std;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//void goalong(vector<vector<TreeNode* >>&AllPath, TreeNode* root, vector<TreeNode* >path, int expectNumber, int currentsum);
//vector<vector<TreeNode* > > FindPath(TreeNode* root, int expectNumber)
//{
//	int currentsum = 0;
//	vector<TreeNode* >path;
//	vector<vector<TreeNode* >>AllPath;
//	goalong(AllPath, root, path, expectNumber, currentsum);
//	return AllPath;
//}
//void goalong(vector<vector<TreeNode* >>&AllPath,TreeNode* root, vector<TreeNode* >path,int expectNumber,int currentsum)
//{
//	currentsum += root->val;
//	path.push_back(root);
//	if ((root->left == nullptr&&root->right == nullptr)&& (expectNumber==currentsum))
//	{
//		AllPath.push_back(path);
//	}
//	if (root->left != nullptr)
//			goalong(AllPath,root->left, path, expectNumber, currentsum);
//	if(root->right!=nullptr)
//			goalong(AllPath,root->right, path, expectNumber, currentsum);
//	if(path.size()>0)
//	    path.pop_back();
//}
//
//void ConnectTreeNodes(TreeNode *proot, TreeNode *pleft, TreeNode *pright)
//{
//	proot->left = pleft;
//	proot->right = pright;
//
//}
//void Test1()
//{
//	TreeNode* pNode10 = new TreeNode(10);
//	TreeNode* pNode5 =  new TreeNode(5);
//	TreeNode* pNode12 = new TreeNode(12);
//	TreeNode* pNode4 = new TreeNode(4);
//	TreeNode* pNode7 = new TreeNode(7);
//
//	ConnectTreeNodes(pNode10, pNode5, pNode12);
//	ConnectTreeNodes(pNode5, pNode4, pNode7);
//	printf("Two paths should be found in Test1.\n");
//	int expectnum = 22;
//	vector<vector<TreeNode* > >result=FindPath(pNode10,expectnum);
//	int i = 0;
//	while (i<result.size())
//	{
//		int j = 0;
//		vector<TreeNode* >rr = result[i];
//		i++;
//		while (j <rr.size())
//		{
//			cout << rr[j]->val<<" " ;
//			j++;
//		}
//		cout << " next: " << endl;
//	}
//	
//}
//int main()
//{
//	Test1();
//	cin.get(); cin.get();
//}

// 另外解法
//class Solution {
//public:
//	vector<vector<int> > buffer;      //关键点：buffer ,tmp 都是共享数据，函数无法这样
//	vector<int> tmp;
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//		if (root == NULL)  //递归终止条件
//			return buffer;
//		tmp.push_back(root->val);
//		if ((expectNumber - root->val) == 0 && root->left == NULL && root->right == NULL)//  判断条件
//		{
//			buffer.push_back(tmp);
//		}
//		FindPath(root->left, expectNumber - root->val);    //
//		FindPath(root->right, expectNumber - root->val);  //
//		if (tmp.size() != 0)
//			tmp.pop_back();
//		return buffer;
//	}
//};

// 面试题35：复杂链表的复制
// 题目：请实现函数ComplexListNode* Clone(ComplexListNode* pHead)，复
// 制一个复杂链表。在复杂链表中，每个结点除了有一个m_pNext指针指向下一个
// 结点外，还有一个m_pSibling 指向链表中的任意结点或者nullptr。
//该题难点：复制后的链表 里面的地址和原链表是不一致的（如果一致复制将毫无意义）
//struct ComplexListNode
//{
//	int                 m_nValue;
//	ComplexListNode*    m_pNext;
//	ComplexListNode*    m_pSibling;
//	ComplexListNode(int x) :
//			m_nValue(x), m_pNext(NULL), m_pSibling(NULL) {
//	}
//};
//// 首先节点交替变成两倍长
//void CloneNodes(ComplexListNode* pHead)
//{
//	ComplexListNode* pnode = pHead;
//	while (pnode != nullptr)
//	{
//		ComplexListNode* CloneNode=new ComplexListNode(0);
//		CloneNode->m_nValue = pnode->m_nValue;
//		CloneNode->m_pNext = pnode->m_pNext;
//		CloneNode->m_pSibling = nullptr;
//		pnode->m_pNext = CloneNode;
//		pnode = CloneNode->m_pNext;
//	}
//}
////将节点中新复制的节点的随机节点复制
//void CloneRand(ComplexListNode* pHead)
//{
//	ComplexListNode* pnode = pHead;
//	ComplexListNode* CloneNode = pHead->m_pNext;
//	while (CloneNode->m_pNext != nullptr)   //该判断条件针对最后一个节点没有随机节点的情况
//	{
//		if (pnode->m_pSibling != nullptr) //中间某个节点的随机节点为空，就不会存在下个节点
//		{
//			CloneNode->m_pSibling = (pnode->m_pSibling)->m_pNext;
//		}
//		else
//		{
//			CloneNode->m_pSibling = nullptr;
//		}
//
//		pnode = CloneNode->m_pNext;
//		CloneNode = pnode->m_pNext;
//	}
//
//}
////将一条链拆成两段
//ComplexListNode* Clone(ComplexListNode* pHead)
//{
//	ComplexListNode*node = pHead;
//	ComplexListNode* clonehead = node->m_pNext;
//	ComplexListNode*clonenode = node->m_pNext;
//	while (clonenode->m_pNext != nullptr)                                 //该判断条件针对最后一个节点没有随机节点的情况
//	{
//		node->m_pNext = clonenode->m_pNext;
//		node = node->m_pNext;
//		clonenode->m_pNext = node->m_pNext;
//		clonenode = clonenode->m_pNext;
//	}
//	return clonehead;
//
//}
////
//void BuildNodes(ComplexListNode *proot, ComplexListNode *pnext, ComplexListNode *prand)
//{
//	proot->m_pNext = pnext;
//	proot->m_pSibling = prand;
//}
//void PrintList(ComplexListNode* pHead)
//{
//	ComplexListNode* pNode = pHead;
//	while (pNode != nullptr)
//	{
//		printf("The value of this node is: %d.\n", pNode->m_nValue);
//
//		if (pNode->m_pSibling != nullptr)
//			printf("The value of its sibling is: %d.\n", pNode->m_pSibling->m_nValue);
//		else
//			printf("This node does not have a sibling.\n");
//
//		printf("\n");
//
//		pNode = pNode->m_pNext;
//	}
//}
//void Test1()
//{
//	ComplexListNode* pNode1 = new ComplexListNode(1);
//	ComplexListNode* pNode2 = new ComplexListNode(2);
//	ComplexListNode* pNode3 = new ComplexListNode(3);
//	ComplexListNode* pNode4 = new ComplexListNode(4);
//	ComplexListNode* pNode5 = new ComplexListNode(5);
//
//	BuildNodes(pNode1, pNode2, pNode3);
//	BuildNodes(pNode2, pNode3, pNode5);
//	BuildNodes(pNode3, pNode4, nullptr);
//	BuildNodes(pNode4, pNode5, pNode2);
//
//	CloneNodes(pNode1);
//	CloneRand(pNode1);
//	ComplexListNode* result=Clone(pNode1);
//	PrintList(result);
//}
//using std::cin;
//int main()
//{
//	Test1();
//	cin.get(); cin.get();
//}

//面试题36：输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。
//#include <cstdio>
//using namespace std;
//struct BinaryTreeNode {
//	int m_nValue;
//	struct BinaryTreeNode *m_pLeft;
//	struct BinaryTreeNode *m_pRight;
//	BinaryTreeNode(int x) :
//		m_nValue(x), m_pLeft(NULL), m_pRight(NULL) {
//	}
//}; 
//void ConvertNode(BinaryTreeNode* pNode, BinaryTreeNode** pLastNodeInList);
//BinaryTreeNode* Convert(BinaryTreeNode* pRootOfTree)    //递归求解方式，等同于迭代版，核心都是中序遍历
//{
//	BinaryTreeNode *pLastNodeInList = nullptr;
//	ConvertNode(pRootOfTree, &pLastNodeInList);
//
//	// pLastNodeInList指向双向链表的尾结点，
//	// 我们需要返回头结点
//	BinaryTreeNode *pHeadOfList = pLastNodeInList;
//	while (pHeadOfList != nullptr && pHeadOfList->m_pLeft != nullptr)
//		pHeadOfList = pHeadOfList->m_pLeft;
//
//	return pHeadOfList;
//}
//
//void ConvertNode(BinaryTreeNode* pNode, BinaryTreeNode** pLastNodeInList)
//{
//	if (pNode == nullptr)
//		return;
//
//	BinaryTreeNode *pCurrent = pNode;
//
//	if (pCurrent->m_pLeft != nullptr)
//		ConvertNode(pCurrent->m_pLeft, pLastNodeInList);
//
//	pCurrent->m_pLeft = *pLastNodeInList;
//	if (*pLastNodeInList != nullptr)
//		(*pLastNodeInList)->m_pRight = pCurrent;
//
//	*pLastNodeInList = pCurrent;
//
//	if (pCurrent->m_pRight != nullptr)
//		ConvertNode(pCurrent->m_pRight, pLastNodeInList);
//}
///*//BinaryTreeNode* Convert(BinaryTreeNode* pRootOfTree) //迭代求解方式
////{
////	if (pRootOfTree == nullptr)
////		return nullptr;
////	BinaryTreeNode *p = pRootOfTree;
////	BinaryTreeNode *pre = nullptr;
////	BinaryTreeNode *root = nullptr;
////	stack<BinaryTreeNode*>record;
////	bool isfirst = true;
////	while (!record.empty() || p != nullptr)
////	{
////		while (p != nullptr)
////		{
////			record.push(p);
////			p = p->m_pLeft;
////		}
////		p = record.top();
////		record.pop();
////		if (isfirst)
////		{
////			root = p;
////			pre = p;
////			isfirst = false;
////		}
////		else
////		{
////			pre->m_pRight = p;
////			p->m_pLeft = pre;
////			pre = p;
////		}
////		p = p->m_pRight;
////	}
////	return root;
////};*/
////// ====================测试代码====================
//void PrintDoubleLinkedList(BinaryTreeNode* pHeadOfList)
//{
//	BinaryTreeNode* pNode = pHeadOfList;
//
//	printf("The nodes from left to right are:\n");
//	while (pNode != nullptr)
//	{
//		printf("%d\t", pNode->m_nValue);
//
//		if (pNode->m_pRight == nullptr)
//			break;
//		pNode = pNode->m_pRight;
//	}
//
//	printf("\nThe nodes from right to left are:\n");
//	while (pNode != nullptr)
//	{
//		printf("%d\t", pNode->m_nValue);
//
//		if (pNode->m_pLeft == nullptr)
//			break;
//		pNode = pNode->m_pLeft;
//	}
//
//	printf("\n");
//}
//
//void DestroyList(BinaryTreeNode* pHeadOfList)
//{
//	BinaryTreeNode* pNode = pHeadOfList;
//	while (pNode != nullptr)
//	{
//		BinaryTreeNode* pNext = pNode->m_pRight;
//
//		delete pNode;
//		pNode = pNext;
//	}
//}
//
//void Test(BinaryTreeNode* pRootOfTree)
//{
//	
//	BinaryTreeNode* pHeadOfList = Convert(pRootOfTree);
//
//	PrintDoubleLinkedList(pHeadOfList);
//}
//void ConnectTreeNodes(BinaryTreeNode *proot, BinaryTreeNode *pleft, BinaryTreeNode *pright)
//{
//	proot->m_pLeft = pleft;
//	proot->m_pRight= pright;
//
//}
////            10
////         /      \
////        6        14
////       /\        /\
////      4  8     12  16
//void Test1()
//{
//	BinaryTreeNode* pNode10 = new BinaryTreeNode(10);
//	BinaryTreeNode* pNode6 = new BinaryTreeNode(6);
//	BinaryTreeNode* pNode14 = new BinaryTreeNode(14);
//	BinaryTreeNode* pNode4 = new BinaryTreeNode(4);
//	BinaryTreeNode* pNode8 = new BinaryTreeNode(8);
//	BinaryTreeNode* pNode12 = new BinaryTreeNode(12);
//	BinaryTreeNode* pNode16 = new BinaryTreeNode(16);
//
//	ConnectTreeNodes(pNode10, pNode6, pNode14);
//	ConnectTreeNodes(pNode6, pNode4, pNode8);
//	ConnectTreeNodes(pNode14, pNode12, pNode16);
//
//	Test(pNode10);
//
//	DestroyList(pNode4);
//}
//
//
//using std::cin;
//int main(int argc, char* argv[])
//{
//	Test1();
//
//	cin.get(); cin.get();
//	return 0;
//}



//输入一个字符串,打印出该字符串中字符的所有排列。例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。

//#include <cstdio>
//
//void Permutation(char* pStr, char* pBegin);
//
//void Permutation(char* pStr)
//{
//	if (pStr == nullptr)
//		return;
//
//	Permutation(pStr, pStr);
//}
//
//void Permutation(char* pStr, char* pBegin)
//{
//	if (*pBegin == '\0')
//	{
//		printf("%s\n", pStr);
//	}
//	else
//	{
//		for (char* pCh = pBegin; *pCh != '\0'; ++pCh)
//		{
//			char temp = *pCh;
//			*pCh = *pBegin;
//			*pBegin = temp;
//
//			Permutation(pStr, pBegin + 1);
//
//			temp = *pCh;
//			*pCh = *pBegin;
//			*pBegin = temp;
//		}
//	}
//}
//
////  string版本的方法   （无法按照字典序来打印）
//class Solution {
//public:
//	vector<string> Permutation(string str) {
//		if (str.size() <= 0)
//			return record;
//		int len = 0;
//		Per(str, len);
//		for (set<string>::iterator iter = record_temp.begin(); iter != record_temp.end(); iter++)
//		{
//			record.push_back(*iter);
//		}
//		return record;
//	}
//	void Per(string &str, int len)
//	{
//		if (len >= str.size())
//			record_temp.insert(str);
//		else
//		{
//			for (int i = len; i < str.size(); i++)
//			{
//				char temp = str[i];
//				str[i] = str[len];
//				str[len] = temp;
//				Per(str, len + 1);
//				temp = str[i];
//				str[i] = str[len];
//				str[len] = temp;
//
//			}
//		}
//	}
//	vector<string> record;
//	set<string> record_temp;    //基于红黑树的关联容器，不会保存相同数据。
//};
//
////
////// ====================测试代码====================
//void Test(char* pStr)
//{
//	if (pStr == nullptr)
//		printf("Test for nullptr begins:\n");
//	else
//		printf("Test for %s begins:\n", pStr);
//
//	Permutation(pStr);
//
//	printf("\n");
//}
//using namespace std;
//int main(int argc, char* argv[])
//{
//	/*Test(nullptr);
//
//	char string1[] = "";
//	Test(string1);
//
//	char string2[] = "a";
//	Test(string2);
//
//	char string3[] = "ab";
//	Test(string3);*/
//
//	char string4[] = "abb";
//	Test(string4);
//	cin.get(); cin.get();
//	return 0;
//}
