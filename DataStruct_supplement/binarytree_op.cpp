#include<stack>
#include<vector>
#include<iostream>

//-----�����������������棩------------------------------------//
//version1������������ĽǶȲ������������򵥾�����������ʽ����������: 1,2,4,0,0,0,3,0,0
//                          1
//                         2 3
//                       4
//version2:����������ĽǶȣ�������ʽ������һ��
//version3:�Ӳ�α��������뷽ʽ�����ɣ�
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
//	int ch1;    // ��ʱ������ģ��
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
//void FirstOrder(BinaryTreeNode *pf)     //�������У��ݹ�汾��
//{
//	if (pf == nullptr)
//		return;
//	cout << pf->value << endl;
//	FirstOrder(pf->left);
//	FirstOrder(pf->right);
//}
////������������汾    ע��������鱾������
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
////����������ǵݹ�汾��
////һֱ���������ɨ�貢����ջ
//void goLeftBranch(BinaryTreeNode  *x, std::stack<BinaryTreeNode*>& s)
//{
//	while (x!=nullptr)
//	{
//		s.push(x); x = x->left;
//	}
//}
//void Inorder(BinaryTreeNode *pf)
//{
//	std::stack<BinaryTreeNode*>S;        //ջ�����Ƕ������ṹ��ָ��
//	BinaryTreeNode *currentx;
//	while (true)
//	{
//		goLeftBranch(pf, S);
//		if (S.empty()) break;      //SΪ��ʱΪ��
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
