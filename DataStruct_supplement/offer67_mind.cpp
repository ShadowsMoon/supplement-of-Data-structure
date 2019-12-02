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