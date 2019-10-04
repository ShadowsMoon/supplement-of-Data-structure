
#include<vector>
#include<iostream>
#include<stdio.h>
//--------------------------------------------------------字符串类----------------------------------------------//
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

//-----二叉树重建----------------------------------------------------------------//
using std::cout; using std::cin; using std::endl;
struct BinaryTreeNode
{
	int val;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
};
//核心思想：前序遍历第一个必为根节点，中序遍历根节点左边为左子树，右边为右子树，依据递归来减小内容
BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod);
BinaryTreeNode *construct(int* preorder, int* inorder, int length)
{
	if (preorder == nullptr || inorder == nullptr || length <= 0)
		return nullptr;
	return constructcore(preorder, preorder + length - 1, inorder, inorder + length - 1);
}
BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod)
{
	//前序遍历第一个值为根节点
	int rootval = startpreod[0];
	BinaryTreeNode *root = new BinaryTreeNode;
	root->val = rootval;
	root->left = nullptr; root->right = nullptr;
	if (startpreod == endpreod)
		return root;
	//中序遍历找到根节点，就能区分左子树和右子树
	int *rootinod = startinod;
	while (rootinod <= endinod && *rootinod != rootval)
		++rootinod;
	//if()
	int leftlength = rootinod - startinod;
	int *leftendpreod=startpreod+leftlength;
	if (leftlength > 0)   //注意与第二个判断语句的不同，主要原因 ：左右的区别
	{
		root->left = constructcore(startpreod + 1, leftendpreod, startinod, rootinod - 1);
	}
	if (leftlength < endpreod - startpreod)
	{
		root->right = constructcore(leftendpreod + 1, endpreod, rootinod + 1, endinod);
	}
	return root;
}
//递归终止条件需进一步思考
void FirstOrder(BinaryTreeNode *pf)     //先序排列（递归版本）
{
	if (pf == nullptr)
		return;
	cout << pf->val << endl;
	FirstOrder(pf->left);
	FirstOrder(pf->right);
}


int main()
{
	int preord[] = { 1,2,4,7,3,5,6,8 };
	int inord[] = { 4,7,2,1,5,3,8,6 };
	int len = sizeof(preord) / sizeof(int);
	BinaryTreeNode *p = construct(preord, inord, len);
	cout << "the original pre: " << endl;
	for (int i = 0; i < len;i++)
		cout << preord[i] << " ";
	cout << "the final pre:" << endl;
	FirstOrder(p);
	cin.get(); cin.get();

}