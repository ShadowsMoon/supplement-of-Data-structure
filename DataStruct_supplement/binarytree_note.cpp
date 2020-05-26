
//record and conclude the point of binarytree, 
//learning the skill to solve the problem of binarytree
//2020/5/5
#include<regex>    //������ʽ��
#include<fstream>
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>   //��Ӧpop_heap, push_heap
#include<set>
#include <functional>    //greater<int> //�������͵��ɴ�С����   �෴��Ϊ less<int>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::to_string;
using std::multiset;        // multiset ��set ��������ǰ�������ظ�
using std::set;
using std::stack;
using std::sort;


//����һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢�ҷ��ء�
//ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣

//struct TreeLinkNode {
//	int val;
//	struct TreeLinkNode *left;
//	struct TreeLinkNode *right;
//	struct TreeLinkNode *next;
//	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {}
//};
////�����������һ���ڵ������������1���ýڵ���ҽڵ���ڡ�2�����ҽڵ㣬��Ϊ���ڵ������ 3�����ҽڵ㣬��Ϊ���ڵ���Һ���
////ע�����������1�����ڵ���û���ҽڵ㣬2������������һ���ڵ㣩
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


//��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�

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
//		 // if((pRoot->left)->val!=(pRoot->right)->val)                //�ٿ����˵�ֻ��һ���ڵ�ʱ����������������  ��ע�⿼�Ǽ������
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
//// ֻ��һ�����
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

//��ʵ��һ����������֮���δ�ӡ��������
//����һ�а��մ����ҵ�˳���ӡ���ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ����ơ�
//�÷�������ʵ�ֹ��ܣ������ڴ�̫�󣬳���ţ��
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

//���ϵ��°����ӡ��������ͬһ����������������ÿһ�����һ�С����򵥣�����ļ򵥰棩


//��ʵ�������������ֱ��������л��ͷ����л�������

//�����������л���ָ����һ�ö���������ĳ�ֱ�����ʽ�Ľ����ĳ�ָ�ʽ����Ϊ�ַ������Ӷ�ʹ���ڴ��н��������Ķ��������Գ־ñ��档
//���л����Ի����������򡢺��򡢲���Ķ�����������ʽ�������޸ģ����л��Ľ����һ���ַ��������л�ʱͨ�� ĳ�ַ��ű�ʾ�սڵ㣨#����
//�� �� ��ʾһ�����ֵ�Ľ�����value!����

//�������ķ����л���ָ������ĳ�ֱ���˳��õ������л��ַ������str���ع���������
using std::ios;
using std::ofstream; using std::fstream; using std::ifstream;   //��д�ļ�
//class Solution {
//public:
//	void serialize(TreeNode* proot, ofstream&stream)
//	{
//		if (proot == nullptr)
//		{
//			stream << "#"<<",";
//			return;
//		}
//		stream << proot->val<<",";        //�����ļ�ʱ������Ҫ����������ת��Ϊ�ַ�����ʽ          //ǰ������ĽǶ�
//		serialize(proot->left,stream);
//		serialize(proot->right, stream);
//	}
//	void deserialize(TreeNode** proot, ifstream&stream)  //�����л�����   //ע�⣺����Ҫ�����ֵ�ַ���޸ĵ���*proot�����������ֵģ���˷��ص���ͷ�ڵ�
//	{                                                                                                                  //��ÿ�����ӽڵ㣬����Ҫ�������ɣ�һ�ֽڵ�ֻ�����һ���ڵ�ĵ�ַ
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
////***********����������****************************//
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
//	te.serialize(proot, file0);    //�������л�����
//	file0.close();   //����������ļ�����ӡ����Ӧ���������ļ�����ӡ
//	 
//	ifstream file1;
//	file1.open(fname, ios::app);
//	char th;
//	while (!file1.eof())
//	{
//		file1>>th;       //���뵽�ڴ�ռ�th;
//		cout << th;      //���ȴ�ӡ���л����
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


//��εõ�һ���������е���λ����������������ж�����������ֵ����ô��λ������������ֵ����֮��λ���м����ֵ��
//������������ж���ż������ֵ����ô��λ������������ֵ����֮���м���������ƽ��ֵ������ʹ��Insert()������ȡ��������
//ʹ��GetMedian()������ȡ��ǰ��ȡ���ݵ���λ����
//����ʹ�����Ѻ���С���������λ����ͬʱ��֤����Ч��
using std::less; //����
using std::greater; //��С��
//�涨һЩ����(Ϊ�˱�֤�����ѵ���Ŀ����)��
//1�����ѵ����ֵС����С�ѵ���Сֵ��2������Ϊżʱ�����ǲ�����С��(����ֵС�����ѣ����������ѣ��ٰ��������ֵ����С��) 
//class Solution {
//public:
//	void Insert(int num)
//	{
//		if (((max.size() + min.size()) & 1) == 0)     //�ж���ż
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

