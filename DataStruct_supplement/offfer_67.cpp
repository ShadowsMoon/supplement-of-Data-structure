
#include<vector>
#include<iostream>
#include<stdio.h>
//--------------------------------------------------------�ַ�����----------------------------------------------//
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

//-----�������ؽ�----------------------------------------------------------------//
using std::cout; using std::cin; using std::endl;
struct BinaryTreeNode
{
	int val;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
};
//����˼�룺ǰ�������һ����Ϊ���ڵ㣬����������ڵ����Ϊ���������ұ�Ϊ�����������ݵݹ�����С����
BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod);
BinaryTreeNode *construct(int* preorder, int* inorder, int length)
{
	if (preorder == nullptr || inorder == nullptr || length <= 0)
		return nullptr;
	return constructcore(preorder, preorder + length - 1, inorder, inorder + length - 1);
}
BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod)
{
	//ǰ�������һ��ֵΪ���ڵ�
	int rootval = startpreod[0];
	BinaryTreeNode *root = new BinaryTreeNode;
	root->val = rootval;
	root->left = nullptr; root->right = nullptr;
	if (startpreod == endpreod)
		return root;
	//��������ҵ����ڵ㣬����������������������
	int *rootinod = startinod;
	while (rootinod <= endinod && *rootinod != rootval)
		++rootinod;
	//if()
	int leftlength = rootinod - startinod;
	int *leftendpreod=startpreod+leftlength;
	if (leftlength > 0)   //ע����ڶ����ж����Ĳ�ͬ����Ҫԭ�� �����ҵ�����
	{
		root->left = constructcore(startpreod + 1, leftendpreod, startinod, rootinod - 1);
	}
	if (leftlength < endpreod - startpreod)
	{
		root->right = constructcore(leftendpreod + 1, endpreod, rootinod + 1, endinod);
	}
	return root;
}
//�ݹ���ֹ�������һ��˼��
void FirstOrder(BinaryTreeNode *pf)     //�������У��ݹ�汾��
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