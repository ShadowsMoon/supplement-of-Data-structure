
//record and conclude the point of binarytree, 
//learning the skill to solve the problem of binarytree
//2020/5/5
#include<regex>    //正则表达式库
#include<fstream>
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>   //对应pop_heap, push_heap
#include<set>
#include <functional>    //greater<int> //内置类型的由大到小排序   相反的为 less<int>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::to_string;
using std::multiset;        // multiset 和set 区别在于前者允许重复
using std::set;
using std::stack;
using std::sort;


//给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。
//注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。

//struct TreeLinkNode {
//	int val;
//	struct TreeLinkNode *left;
//	struct TreeLinkNode *right;
//	struct TreeLinkNode *next;
//	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {}
//};
////中序遍历的下一个节点有三种情况，1，该节点的右节点存在。2，无右节点，且为父节点的左孩子 3，无右节点，且为父节点的右孩子
////注意特殊情况（1，根节点且没有右节点，2，中序遍历最后一个节点）
//class Solution {
//public:
//	TreeLinkNode* GetNext(TreeLinkNode* pNode)
//	{
//		if (pNode->next == nullptr&&pNode->right == nullptr)
//			return nullptr;
//		TreeLinkNode* proot;
//		if (pNode->right != nullptr)
//		{
//			proot = pNode->right;
//			while (proot->left != nullptr)
//				proot = proot->left;
//			return proot;
//		}
//		else if (pNode == (pNode->next)->left)
//		{
//			return pNode->next;
//		}
//		else
//		{
//			pNode = pNode->next;
//			proot = pNode->next;
//			if (proot == nullptr)
//				return nullptr;
//			while (pNode == proot->right)
//			{
//				pNode = proot;
//				proot = pNode->next;
//				if (proot == nullptr)
//					return nullptr;
//			}
//			return proot;
//		}
//		return nullptr;
//	}
//};


//请实现一个函数，用来判断一颗二叉树是不是对称的。注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

//class Solution {
//public:
//	bool isSymmetrical(TreeNode* pRoot)
//	{
//	  //    if(pRoot==nullptr)
//			//  return false;
//		 // if((pRoot->left)->val!=(pRoot->right)->val)                //少考虑了当只有一个节点时，该条件会出现溢出  ，注意考虑极端情况
//			//  return false;
//		 // if((pRoot->left)->val==(pRoot->right)->val)
//		 // {
//			//TreeNode *pleft=pRoot->left;
//			//TreeNode *pright=pRoot->right;
//			//return CompareTree(pleft,pright);
//		 // }
//		return CompareTree(pRoot, pRoot);
//	}
//	bool CompareTree(TreeNode* pleft, TreeNode* pright)
//	{
//		if (pleft == nullptr&&pright == nullptr)
//			return true;
//		if (pleft == nullptr || pright == nullptr)
//			return false;
//		if (pleft->val != pright->val)
//			return false;
//
//		return CompareTree(pleft->left, pright->right) && CompareTree(pleft->right, pright->left);
//
//	}
//};
//TreeNode* CreateBinaryTreeNode(int value)
//{
//	TreeNode* pNode = new TreeNode(value);
//	pNode->val = value;
//	pNode->left = nullptr;
//	pNode->right = nullptr;
//
//
//	return pNode;
//}
//
//void ConnectTreeNodes(TreeNode* pParent,TreeNode* pLeft, TreeNode* pRight)
//{
//	if (pParent != nullptr)
//	{
//		pParent->left = pLeft;
//		pParent->right = pRight;
//	}
//}

//void Test(const char* testName, TreeNode* pRoot)
//{
//	if (testName != nullptr)
//		printf("%s begins: ", testName);
//
//	Solution te;
//	if (te.isSymmetrical(pRoot))
//		cout << "true"<<endl;
//	else
//		cout << "false"<<endl;
//
//}
//
////            8
////        6      6
////       5 7    7 5
//void Test1()
//{
//	TreeNode* pNode8 = CreateBinaryTreeNode(8);
//	TreeNode* pNode61 = CreateBinaryTreeNode(6);
//	TreeNode* pNode62 = CreateBinaryTreeNode(6);
//	TreeNode* pNode51 = CreateBinaryTreeNode(5);
//	TreeNode* pNode71 = CreateBinaryTreeNode(7);
//	TreeNode* pNode72 = CreateBinaryTreeNode(7);
//	TreeNode* pNode52 = CreateBinaryTreeNode(5);
//
//	ConnectTreeNodes(pNode8, pNode61, pNode62);
//	ConnectTreeNodes(pNode61, pNode51, pNode71);
//	ConnectTreeNodes(pNode62, pNode72, pNode52);
//	const char*a = "Test1";
//	Test(a, pNode8);
//
//
//}
//
//
//// 只有一个结点
//void Test7()
//{
//	TreeNode* pNode1 = CreateBinaryTreeNode(1);
//	const char*a = "Test7";
//	Test(a, pNode1);
//}
//
//
//
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test7();
//
//	cin.get(); cin.get();
//}

//请实现一个函数按照之字形打印二叉树，
//即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。
//该方法可以实现功能，但是内存太大，超过牛客
//class Solution {
//public:
//	vector<vector<int> > Print(TreeNode* pRoot) {
//		vector<vector<int>>final;
//		if (pRoot == nullptr)
//			return final;
//
//		int index = 1;
//		stack<TreeNode*>LeftFirstIn;
//		stack<TreeNode*>RightFirstIn;
//		RightFirstIn.push(pRoot);
//		while (!LeftFirstIn.empty() || !RightFirstIn.empty())
//		{
//			vector<int>*temp = new vector<int>;
//			if (index % 2 == 1)
//			{
//
//				while (!RightFirstIn.empty())
//				{
//					TreeNode* tr = RightFirstIn.top();
//					temp->push_back(tr->val);
//					if (tr->left != nullptr)
//						LeftFirstIn.push(tr->left);
//					if (tr->right != nullptr)
//						LeftFirstIn.push(tr->right);
//					RightFirstIn.pop();
//				}
//				final.push_back(*temp);
//				delete temp;
//				index++;
//			}
//			else
//			{
//
//				while (!LeftFirstIn.empty())
//				{
//					TreeNode* tr = LeftFirstIn.top();
//					temp->push_back(tr->val);
//					if (tr->right != nullptr)
//						RightFirstIn.push(tr->right);
//					if (tr->right != nullptr)
//						RightFirstIn.push(tr->left);
//					LeftFirstIn.pop();
//				}
//				final.push_back(*temp);
//				delete temp;
//				index++;
//			}
//
//
//		}
//		return final;
//	}
//
//};
//TreeNode* CreateBinaryTreeNode(int value)
//{
//	TreeNode* pNode = new TreeNode(value);
//	pNode->val = value;
//	pNode->left = nullptr;
//	pNode->right = nullptr;
//
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
//void Test(const char* testName, TreeNode* pRoot)
//{
//	if (testName != nullptr)
//		printf("%s begins: ", testName);
//
//	Solution te;
//	vector<vector<int>>fi=te.Print(pRoot);
//	int len = fi.size(),i=0;
//	int len2;
//	while (len>=1)
//	{
//		len2 = fi[i].size();
//		for (int j = 0; j < len2; j++)
//		{
//			cout << fi[i][j] << endl;
//		 }
//		i++; len--;
//	}
//
//}
//
//
//void Test1()
//{
//	TreeNode* pNode8 = CreateBinaryTreeNode(1);
//	TreeNode* pNode61 = CreateBinaryTreeNode(2);
//	TreeNode* pNode62 = CreateBinaryTreeNode(3);
//	TreeNode* pNode51 = CreateBinaryTreeNode(4);
//	TreeNode* pNode71 = CreateBinaryTreeNode(5);
//	TreeNode* pNode72 = CreateBinaryTreeNode(6);
//	TreeNode* pNode52 = CreateBinaryTreeNode(7);
//
//	ConnectTreeNodes(pNode8, pNode61, pNode62);
//	ConnectTreeNodes(pNode61, pNode51, pNode71);
//	ConnectTreeNodes(pNode62, pNode72, pNode52);
//	const char*a = "Test1";
//	Test(a, pNode8);
//
//
//}
//int main()
//{
//	Test1();
//
//	cin.get(); cin.get();
//}

//从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。（简单，上面的简单版）


//请实现两个函数，分别用来序列化和反序列化二叉树

//二叉树的序列化是指：把一棵二叉树按照某种遍历方式的结果以某种格式保存为字符串，从而使得内存中建立起来的二叉树可以持久保存。
//序列化可以基于先序、中序、后序、层序的二叉树遍历方式来进行修改，序列化的结果是一个字符串，序列化时通过 某种符号表示空节点（#），
//以 ！ 表示一个结点值的结束（value!）。

//二叉树的反序列化是指：根据某种遍历顺序得到的序列化字符串结果str，重构二叉树。
using std::ios;
using std::ofstream; using std::fstream; using std::ifstream;   //读写文件
//class Solution {
//public:
//	void serialize(TreeNode* proot, ofstream&stream)
//	{
//		if (proot == nullptr)
//		{
//			stream << "#"<<",";
//			return;
//		}
//		stream << proot->val<<",";        //利用文件时，不需要将数据首先转换为字符串形式          //前向遍历的角度
//		serialize(proot->left,stream);
//		serialize(proot->right, stream);
//	}
//	void deserialize(TreeNode** proot, ifstream&stream)  //反序列化过程   //注意：这里要用两种地址，修改的是*proot，而不是两种的，因此返回的是头节点
//	{                                                                                                                  //，每次增加节点，都需要首先生成，一种节点只代表第一个节点的地址
//		if (stream.eof())
//			return;
//		char ch;
//		stream >> ch;
//	    if (ch == '#')
//			return;
//		else if (ch == ',')
//			stream >> ch;
//		else
//		{
//			*proot = new TreeNode(ch+'0');
//		
//			(*proot)->left = nullptr;
//			(*proot)->right = nullptr;
//	
//			//proot->val=atoi(ch);
//		}
//		deserialize(&((*proot)->left), stream);
//		deserialize(&((*proot)->right), stream);
//	}
//};
////***********二叉树生成****************************//
//TreeNode* CreateBinaryTreeNode(int value)
//{
//	TreeNode* pNode = new TreeNode(value);
//	pNode->val = value;
//	pNode->left = nullptr;
//	pNode->right = nullptr;
//
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
////*********************************************//
//void test(TreeNode* proot)
//{
//	const char*fname = "bintree.txt";
//	ofstream file0;
//	file0.open(fname, ios::app);
//	Solution te;
//	te.serialize(proot, file0);    //首先序列化过程
//	file0.close();   //不能用输出文件来打印，而应该用输入文件来打印
//	 
//	ifstream file1;
//	file1.open(fname, ios::app);
//	char th;
//	while (!file1.eof())
//	{
//		file1>>th;       //输入到内存空间th;
//		cout << th;      //首先打印序列化结果
//	}
//	file1.close();
//	ifstream file2;
//	file2.open(fname);
//	TreeNode*deproot = nullptr;
//	te.deserialize(&deproot, file1);
//	file1.close();
//
//}
//void Test1()
//{
//	TreeNode* pNode8 = CreateBinaryTreeNode(1);
//	TreeNode* pNode61 = CreateBinaryTreeNode(2);
//	TreeNode* pNode62 = CreateBinaryTreeNode(3);
//	TreeNode* pNode51 = CreateBinaryTreeNode(4);
//	TreeNode* pNode71 = CreateBinaryTreeNode(5);
//	TreeNode* pNode72 = CreateBinaryTreeNode(6);
//	TreeNode* pNode52 = CreateBinaryTreeNode(7);
//
//	ConnectTreeNodes(pNode8, pNode61, pNode62);
//	ConnectTreeNodes(pNode61, pNode51, pNode71);
//	ConnectTreeNodes(pNode62, pNode72, pNode52);
//	//const char*a = "Test1";
//	test(pNode8);
//
//
//}
//int main()
//{
//	Test1();
//	cin.get(); cin.get();
//	return 0;
//}


//如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，那么中位数就是所有数值排序之后位于中间的数值。
//如果从数据流中读出偶数个数值，那么中位数就是所有数值排序之后中间两个数的平均值。我们使用Insert()方法读取数据流，
//使用GetMedian()方法获取当前读取数据的中位数。
//考虑使用最大堆和最小堆来求解中位数，同时保证插入效率
using std::less; //最大堆
using std::greater; //最小堆
//规定一些法则(为了保证两个堆的数目均衡)：
//1，最大堆的最大值小于最小堆的最小值；2，长度为偶时，考虑插入最小堆(若该值小于最大堆，首先入最大堆，再把最大堆最大值入最小堆) 
//class Solution {
//public:
//	void Insert(int num)
//	{
//		if (((max.size() + min.size()) & 1) == 0)     //判断奇偶
//		{
//			if (max.size() > 0&&max.front()>num)
//			{
//				max.push_back(num);
//				push_heap(max.begin(), max.end(), less<int>());
//				num = max.front();
//				pop_heap(max.begin(), max.end(), less<int>());
//				max.pop_back();
//			}
//			min.push_back(num);
//			push_heap(min.begin(), min.end(), greater<int>());
//
//		}
//		else
//		{
//			if (min.size() > 0 && min.front() < num)
//			{
//				min.push_back(num);
//				push_heap(min.begin(), min.end(), greater<int>());
//				num = min.front();
//				pop_heap(min.begin(), min.end(), greater<int>());
//				min.pop_back();
//			}
//			max.push_back(num);
//			push_heap(max.begin(), max.end(), less<int>());
//		}
//	}
//
//	double GetMedian()
//	{
//		if (max.size() + min.size() == 0)
//			return NULL;
//		if ((max.size() + min.size()) & 1 == 1)
//			return min.front();
//		else
//			return (min.front() + max.front()) / 2;
//	
//	}
//	vector<int>max;
//	vector<int>min;
//};

