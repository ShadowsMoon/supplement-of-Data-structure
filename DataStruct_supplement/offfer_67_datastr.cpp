
#include<vector>
#include<iostream>
#include<stdio.h>
#include<ctime>
//--------------------------------------------------------�ַ�����----------------------------------------------//
//������5
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

//������6
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

//������7
//-----�������ؽ�----------------------------------------------------------------//
//using std::cout; using std::cin; using std::endl;
//struct BinaryTreeNode
//{
//	int val;
//	BinaryTreeNode *left;
//	BinaryTreeNode *right;
//};
////����˼�룺ǰ�������һ����Ϊ���ڵ㣬����������ڵ����Ϊ���������ұ�Ϊ�����������ݵݹ�����С����
//---------------vector version---------------------------//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}     //ע�����ʽ�ĳ�ʼ��
//};

//TreeNode*core(vector<int>::iterator prein, vector<int>::iterator preend, vector<int>::iterator midin, vector<int>::iterator midend);
//TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
//
//	if (pre.size() <= 0 || vin.size() <= 0)
//		return nullptr;
//	return core(pre.begin(), pre.end() - 1, vin.begin(), vin.end() - 1);
//}
// ע���vector�������Ĳ������Լ�ע��ָ�����һ������Ӧ���� pre.end()-1
//TreeNode* core(vector<int>::iterator prein, vector<int>::iterator preend, vector<int>::iterator midin, vector<int>::iterator midend)
//{
//	TreeNode* root = new TreeNode(prein[0]);   //��ʼ��
//	//root->val = prein[0];
//	//root->left = nullptr;
//	//root->right = nullptr;
//	if (prein == preend)
//		return root;
//	int firstval = prein[0];
//	vector<int>::iterator rootin = midin;
//	while (rootin <= midend && *rootin != firstval)
//		rootin++;
//	int length = rootin - midin;
//	vector<int>::iterator preleftend = prein + length;
//	if (length > 0)
//		root->left = core(prein + 1, preleftend, midin, rootin - 1);
//	if (length < preend - prein)
//		root->right = core(preleftend + 1, preend, rootin + 1, midend);
//	return root;
//}

//BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod);
//BinaryTreeNode *construct(int* preorder, int* inorder, int length)
//{
//	if (preorder == nullptr || inorder == nullptr || length <= 0)
//		return nullptr;
//	return constructcore(preorder, preorder + length - 1, inorder, inorder + length - 1);
//}
//BinaryTreeNode *constructcore(int *startpreod, int *endpreod, int *startinod, int *endinod)
//{
//	//ǰ�������һ��ֵΪ���ڵ�
//	int rootval = startpreod[0];
//	BinaryTreeNode *root = new BinaryTreeNode;
//	root->val = rootval;
//	root->left = nullptr; root->right = nullptr;
//	if (startpreod == endpreod)
//		return root;
//	//��������ҵ����ڵ㣬����������������������
//	int *rootinod = startinod;
//	while (rootinod <= endinod && *rootinod != rootval)
//		++rootinod;
//	//if()
//	int leftlength = rootinod - startinod;
//	int *leftendpreod=startpreod+leftlength;
//	if (leftlength > 0)   //ע����ڶ����ж����Ĳ�ͬ����Ҫԭ�� �����ҵ�����
//	{
//		root->left = constructcore(startpreod + 1, leftendpreod, startinod, rootinod - 1);
//	}
//	if (leftlength < endpreod - startpreod)
//	{
//		root->right = constructcore(leftendpreod + 1, endpreod, rootinod + 1, endinod);
//	}
//	return root;
//}
////�ݹ���ֹ�������һ��˼��
//void FirstOrder(BinaryTreeNode *pf)     //�������У��ݹ�汾��
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


// ������8������������һ�����
// ��Ŀ������һ�ö����������е�һ����㣬����ҳ��������˳�����һ����㣿
// ���еĽ������������ֱ�ָ�������ӽ���ָ�����⣬����һ��ָ�򸸽���ָ�롣
//version1����������������ص���Ѱ����һ���ڵ� 
//version2��ֱ�ӽ������������Ȼ���ҵ���һ�ڵ�

//using std::cout; using std::cin; using std::endl;
//struct BinaryTreeNode         //��Ӧ�����Ķ������ṹ��
//{
//	int val;
//	BinaryTreeNode *left;
//	BinaryTreeNode *right;
//	BinaryTreeNode *parent;
//};
//BinaryTreeNode * CreaBinTreeNode(int valu)       //�������ɶ�Ӧֵ�ĸ���������㣬Ȼ�������溯������
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
//���������һ�ڵ��ص㣺 
//1��һ���ڵ���������������һ���ڵ�������������������ڵ㣨��û�����󣬵ȼ����ҽڵ����ڵ�Ϊ�գ���˾͵��ڸ��ҽڵ㣩
//2�������������ҽڵ��������ڵ����ڵ㣬����һ�ڵ�Ϊ���ڵ㡣
//3��������������Ϊ���ڵ���ҽڵ㣬�������ڵ�����Ѱ�ң�֪���ҵ�ĳ�ڵ����丸�ڵ�����ӽڵ㣬������ӽڵ�ĸ��ڵ����Ŀ��ڵ����һ�ڵ�
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

//������9��������ջʵ�ֶ���
//template<typename T>class Cqueue
//{
//public:
//	Cqueue(void);
//	~Cqueue(void);
//	void appendTail(const T& node);
//	T deleteHead();
//private:
//	std::stack<T>s1;      //stack ��Ҫ����Ӧ��ͷ�ļ��������������������������
//	std::stack<T>s2;
//};
//template <typename T> Cqueue<T>::Cqueue(void)
//{
//}
//
//template <typename T> Cqueue<T>::~Cqueue(void)
//{
//}
////���������
//template<typename T>void Cqueue<T>::appendTail(const T& ele)   //ģ���������ʽ�Ĳ���
//{
//	std::cout << ele << ",";
//	s1.push(ele);
//}
//template<typename T>T Cqueue<T>::deleteHead()
//{
//	if (s2.size() <= 0)
//	{
//		while (!s1.empty())
//		{
//			s2.push(s1.top());
//			s1.pop();
//		}
//	}
//	//if (s2.size() == 0)
//	//	 throw new exception("queue is empty");
//	T data = s2.top();
//	s2.pop();
//	return data;
//}



//