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
//
