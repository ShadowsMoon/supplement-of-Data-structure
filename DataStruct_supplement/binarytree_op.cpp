#include<stack>
#include<vector>
#include<iostream>

//-----创建二叉树（初级版）------------------------------------//
//version1：从先序遍历的角度产生二叉树（简单举例）产生方式：依次输入: 1,2,4,0,0,0,3,0,0
//                          1
//                         2 3
//                       4
//version2:从中序遍历的角度，产生方式与先序一致
//version3:从层次遍历的输入方式来生成：
//using std::cin;
//using std::cout;
//using std::endl;
//struct BinaryTreeNode
//{
//	int value;
//	BinaryTreeNode *left;
//	BinaryTreeNode *right;
//};
//BinaryTreeNode * creaBinTree1()
//{
//	int ch1;    // 暂时不考虑模板
//	BinaryTreeNode *p=new BinaryTreeNode;
//	cin >> ch1;
//	if (ch1 == 0)
//	{
//		p = nullptr;
//	}
//	else
//	{
//		p->value = ch1;
//		p->left = creaBinTree1();
//		p->right = creaBinTree1();
//	}
//	return p;
//}
//BinaryTreeNode* creaBinTree2()
//{
//	int ch2;
//	BinaryTreeNode *p = new BinaryTreeNode;
//	cin >> ch2;
//	if (ch2 == 0)
//	{
//		p = nullptr;
//	}
//	else
//	{
//		p->left = creaBinTree2();
//		p->value = ch2;
//		p->right = creaBinTree2();
//	}
//	return p;
//}
//void FirstOrder(BinaryTreeNode *pf)     //先序排列（递归版本）
//{
//	if (pf == nullptr)
//		return;
//	cout << pf->value << endl;
//	FirstOrder(pf->left);
//	FirstOrder(pf->right);
//}
////先序遍历迭代版本    注意对照与书本的区别
//void Firstorderiter(BinaryTreeNode *pf)
//{
//	std::stack<BinaryTreeNode*> st;
//	BinaryTreeNode *currentnode;
//	cout<<pf->value<<' ';
//	st.push(pf->right);
//	currentnode = pf->left;
//	while (!st.empty())
//	{
//		if (currentnode != nullptr)
//		{
//			cout << currentnode->value << ' ';
//			st.push(currentnode->right);
//			currentnode = currentnode->left;
//		}
//		else
//		{
//			currentnode = st.top();   st.pop();
//			while (!currentnode&&!st.empty())
//			{
//				currentnode = st.top();   st.pop();
//			}
//			if (!st.empty()|| currentnode!=nullptr)
//			{
//				cout << currentnode->value << ' ';
//				st.push(currentnode->right);
//				currentnode = currentnode->left;
//			}
//			else
//				break;
//		}
//
//	}
//}
//
////
////中序遍历：非递归版本：
////一直沿着左侧链扫描并加入栈
//void goLeftBranch(BinaryTreeNode  *x, std::stack<BinaryTreeNode*>& s)
//{
//	while (x!=nullptr)
//	{
//		s.push(x); x = x->left;
//	}
//}
//void Inorder(BinaryTreeNode *pf)
//{
//	std::stack<BinaryTreeNode*>S;        //栈里面是二叉树结构的指针
//	BinaryTreeNode *currentx;
//	while (true)
//	{
//		goLeftBranch(pf, S);
//		if (S.empty()) break;      //S为空时为真
//		currentx = S.top(); cout << currentx->value << " ";
//		pf = currentx->right;   S.pop();
//	}
//}
//int main()
//{
//	BinaryTreeNode *p1,*p2;
//	//p1 = creaBinTree1();
//	p2 = creaBinTree2();
//	Firstorderiter(p2);
//	//Inorder(p2);
//	cin.get(); cin.get();
//}




//#include <cstdio>
//struct BinaryTreeNode {
//	int m_nValue;
//	struct BinaryTreeNode *m_pLeft;
//	struct BinaryTreeNode *m_pRight;
//	BinaryTreeNode(int x) :
//		m_nValue(x), m_pLeft(NULL), m_pRight(NULL) {
//	}
//}; 
//void ConvertNode(BinaryTreeNode* pNode, BinaryTreeNode** pLastNodeInList);
//BinaryTreeNode* Convert(BinaryTreeNode* pRootOfTree)
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
//
//// ====================测试代码====================
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


//
//using namespace std;
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
//	TreeNode* Convert(TreeNode* pRootOfTree)
//	{
//		if (pRootOfTree == nullptr)
//			return nullptr;
//		TreeNode *p = pRootOfTree;
//		TreeNode *pre = nullptr;
//		TreeNode *root = nullptr;
//		stack<TreeNode*>record;
//		bool isfirst = true;
//		while (!record.empty() || p != nullptr)
//		{
//			while (p != nullptr)
//			{
//				record.push(p);
//				p = p->left;
//			}
//			p = record.top();
//			record.pop();
//			if (isfirst)
//			{
//				root = p;
//				pre = p;
//				isfirst = false;
//			}
//			else
//			{
//				pre->right = p;
//				p->left = pre;
//				pre = p;
//			}
//			p = p->right;
//		}
//		return root;
//	}
//};

