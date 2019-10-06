
#include<vector>
#include<iostream>
#include<stdio.h>
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
////中序遍历下一节点特点： 
////1，一个节点有右子树，则下一个节点是他的右子树的最左节点（当没有最左，等价于右节点的左节点为空，因此就等于该右节点）
////2，无右子树，且节点是他父节点的左节点，则下一节点为父节点。
////3，无右子树，且为父节点的右节点，则往父节点向上寻找，知道找到某节点是其父节点的左子节点，则该左子节点的父节点就是目标节点的下一节点
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



