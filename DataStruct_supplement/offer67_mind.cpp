#include<iostream>
#include<vector>
#include<stack>
//������26�����������Ķ�����������任ΪԴ�������ľ���
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
//		if (pRoot == nullptr)          //ϸ��ע�⣺�޷��غ����ĵݹ���ԣ�return;
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

//����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֣�
//���磬�����������4 X 4���� 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 �����δ�ӡ������1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
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
//		int row = matrix.size();  //row Ϊ ��
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

//������31�����ʣ�ջ��ϴ��
//���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
//����ѹ��ջ���������־�����ȡ���������1, 2, 3, 4, 5��ĳջ��ѹ��˳������4, 5, 3, 2, 1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
//��4, 3, 5, 1, 2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�

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
//		while (s.empty() || s.top() != popV[n])     //���ģ�������ջΪ�գ������������������ݣ�������ջ����������������ݣ��������
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


//�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ�����ʣ���α���
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
//	queue<TreeNode*>q;      //���У��Ƚ��ȳ���ͬ���Ĺ��� deque
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

//������31
//����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ��������������Yes,�������No���������������������������ֶ�������ͬ��
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

//������32������һ�Ŷ������ĸ��ڵ��һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
//·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)
//using namespace std;
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//void goalong(vector<vector<TreeNode* >>&AllPath, TreeNode* root, vector<TreeNode* >path, int expectNumber, int currentsum);
//vector<vector<TreeNode* > > FindPath(TreeNode* root, int expectNumber)
//{
//	int currentsum = 0;
//	vector<TreeNode* >path;
//	vector<vector<TreeNode* >>AllPath;
//	goalong(AllPath, root, path, expectNumber, currentsum);
//	return AllPath;
//}
//void goalong(vector<vector<TreeNode* >>&AllPath,TreeNode* root, vector<TreeNode* >path,int expectNumber,int currentsum)
//{
//	currentsum += root->val;
//	path.push_back(root);
//	if ((root->left == nullptr&&root->right == nullptr)&& (expectNumber==currentsum))
//	{
//		AllPath.push_back(path);
//	}
//	if (root->left != nullptr)
//			goalong(AllPath,root->left, path, expectNumber, currentsum);
//	if(root->right!=nullptr)
//			goalong(AllPath,root->right, path, expectNumber, currentsum);
//	if(path.size()>0)
//	    path.pop_back();
//}
//
//void ConnectTreeNodes(TreeNode *proot, TreeNode *pleft, TreeNode *pright)
//{
//	proot->left = pleft;
//	proot->right = pright;
//
//}
//void Test1()
//{
//	TreeNode* pNode10 = new TreeNode(10);
//	TreeNode* pNode5 =  new TreeNode(5);
//	TreeNode* pNode12 = new TreeNode(12);
//	TreeNode* pNode4 = new TreeNode(4);
//	TreeNode* pNode7 = new TreeNode(7);
//
//	ConnectTreeNodes(pNode10, pNode5, pNode12);
//	ConnectTreeNodes(pNode5, pNode4, pNode7);
//	printf("Two paths should be found in Test1.\n");
//	int expectnum = 22;
//	vector<vector<TreeNode* > >result=FindPath(pNode10,expectnum);
//	int i = 0;
//	while (i<result.size())
//	{
//		int j = 0;
//		vector<TreeNode* >rr = result[i];
//		i++;
//		while (j <rr.size())
//		{
//			cout << rr[j]->val<<" " ;
//			j++;
//		}
//		cout << " next: " << endl;
//	}
//	
//}
//int main()
//{
//	Test1();
//	cin.get(); cin.get();
//}

// ����ⷨ
//class Solution {
//public:
//	vector<vector<int> > buffer;      //�ؼ��㣺buffer ,tmp ���ǹ������ݣ������޷�����
//	vector<int> tmp;
//	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
//		if (root == NULL)  //�ݹ���ֹ����
//			return buffer;
//		tmp.push_back(root->val);
//		if ((expectNumber - root->val) == 0 && root->left == NULL && root->right == NULL)//  �ж�����
//		{
//			buffer.push_back(tmp);
//		}
//		FindPath(root->left, expectNumber - root->val);    //
//		FindPath(root->right, expectNumber - root->val);  //
//		if (tmp.size() != 0)
//			tmp.pop_back();
//		return buffer;
//	}
//};

// ������35����������ĸ���
// ��Ŀ����ʵ�ֺ���ComplexListNode* Clone(ComplexListNode* pHead)����
// ��һ�����������ڸ��������У�ÿ����������һ��m_pNextָ��ָ����һ��
// ����⣬����һ��m_pSibling ָ�������е����������nullptr��
//�����ѵ㣺���ƺ������ ����ĵ�ַ��ԭ�����ǲ�һ�µģ����һ�¸��ƽ��������壩
//struct ComplexListNode
//{
//	int                 m_nValue;
//	ComplexListNode*    m_pNext;
//	ComplexListNode*    m_pSibling;
//	ComplexListNode(int x) :
//			m_nValue(x), m_pNext(NULL), m_pSibling(NULL) {
//	}
//};
//// ���Ƚڵ㽻����������
//void CloneNodes(ComplexListNode* pHead)
//{
//	ComplexListNode* pnode = pHead;
//	while (pnode != nullptr)
//	{
//		ComplexListNode* CloneNode=new ComplexListNode(0);
//		CloneNode->m_nValue = pnode->m_nValue;
//		CloneNode->m_pNext = pnode->m_pNext;
//		CloneNode->m_pSibling = nullptr;
//		pnode->m_pNext = CloneNode;
//		pnode = CloneNode->m_pNext;
//	}
//}
////���ڵ����¸��ƵĽڵ������ڵ㸴��
//void CloneRand(ComplexListNode* pHead)
//{
//	ComplexListNode* pnode = pHead;
//	ComplexListNode* CloneNode = pHead->m_pNext;
//	while (CloneNode->m_pNext != nullptr)   //���ж�����������һ���ڵ�û������ڵ�����
//	{
//		if (pnode->m_pSibling != nullptr) //�м�ĳ���ڵ������ڵ�Ϊ�գ��Ͳ�������¸��ڵ�
//		{
//			CloneNode->m_pSibling = (pnode->m_pSibling)->m_pNext;
//		}
//		else
//		{
//			CloneNode->m_pSibling = nullptr;
//		}
//
//		pnode = CloneNode->m_pNext;
//		CloneNode = pnode->m_pNext;
//	}
//
//}
////��һ�����������
//ComplexListNode* Clone(ComplexListNode* pHead)
//{
//	ComplexListNode*node = pHead;
//	ComplexListNode* clonehead = node->m_pNext;
//	ComplexListNode*clonenode = node->m_pNext;
//	while (clonenode->m_pNext != nullptr)                                 //���ж�����������һ���ڵ�û������ڵ�����
//	{
//		node->m_pNext = clonenode->m_pNext;
//		node = node->m_pNext;
//		clonenode->m_pNext = node->m_pNext;
//		clonenode = clonenode->m_pNext;
//	}
//	return clonehead;
//
//}
////
//void BuildNodes(ComplexListNode *proot, ComplexListNode *pnext, ComplexListNode *prand)
//{
//	proot->m_pNext = pnext;
//	proot->m_pSibling = prand;
//}
//void PrintList(ComplexListNode* pHead)
//{
//	ComplexListNode* pNode = pHead;
//	while (pNode != nullptr)
//	{
//		printf("The value of this node is: %d.\n", pNode->m_nValue);
//
//		if (pNode->m_pSibling != nullptr)
//			printf("The value of its sibling is: %d.\n", pNode->m_pSibling->m_nValue);
//		else
//			printf("This node does not have a sibling.\n");
//
//		printf("\n");
//
//		pNode = pNode->m_pNext;
//	}
//}
//void Test1()
//{
//	ComplexListNode* pNode1 = new ComplexListNode(1);
//	ComplexListNode* pNode2 = new ComplexListNode(2);
//	ComplexListNode* pNode3 = new ComplexListNode(3);
//	ComplexListNode* pNode4 = new ComplexListNode(4);
//	ComplexListNode* pNode5 = new ComplexListNode(5);
//
//	BuildNodes(pNode1, pNode2, pNode3);
//	BuildNodes(pNode2, pNode3, pNode5);
//	BuildNodes(pNode3, pNode4, nullptr);
//	BuildNodes(pNode4, pNode5, pNode2);
//
//	CloneNodes(pNode1);
//	CloneRand(pNode1);
//	ComplexListNode* result=Clone(pNode1);
//	PrintList(result);
//}
//using std::cin;
//int main()
//{
//	Test1();
//	cin.get(); cin.get();
//}

//������36������һ�ö��������������ö���������ת����һ�������˫������Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
//#include <cstdio>
//using namespace std;
//struct BinaryTreeNode {
//	int m_nValue;
//	struct BinaryTreeNode *m_pLeft;
//	struct BinaryTreeNode *m_pRight;
//	BinaryTreeNode(int x) :
//		m_nValue(x), m_pLeft(NULL), m_pRight(NULL) {
//	}
//}; 
//void ConvertNode(BinaryTreeNode* pNode, BinaryTreeNode** pLastNodeInList);
//BinaryTreeNode* Convert(BinaryTreeNode* pRootOfTree)    //�ݹ���ⷽʽ����ͬ�ڵ����棬���Ķ����������
//{
//	BinaryTreeNode *pLastNodeInList = nullptr;
//	ConvertNode(pRootOfTree, &pLastNodeInList);
//
//	// pLastNodeInListָ��˫�������β��㣬
//	// ������Ҫ����ͷ���
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
///*//BinaryTreeNode* Convert(BinaryTreeNode* pRootOfTree) //������ⷽʽ
////{
////	if (pRootOfTree == nullptr)
////		return nullptr;
////	BinaryTreeNode *p = pRootOfTree;
////	BinaryTreeNode *pre = nullptr;
////	BinaryTreeNode *root = nullptr;
////	stack<BinaryTreeNode*>record;
////	bool isfirst = true;
////	while (!record.empty() || p != nullptr)
////	{
////		while (p != nullptr)
////		{
////			record.push(p);
////			p = p->m_pLeft;
////		}
////		p = record.top();
////		record.pop();
////		if (isfirst)
////		{
////			root = p;
////			pre = p;
////			isfirst = false;
////		}
////		else
////		{
////			pre->m_pRight = p;
////			p->m_pLeft = pre;
////			pre = p;
////		}
////		p = p->m_pRight;
////	}
////	return root;
////};*/
////// ====================���Դ���====================
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



//����һ���ַ���,��ӡ�����ַ������ַ����������С����������ַ���abc,���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��

//#include <cstdio>
//
//void Permutation(char* pStr, char* pBegin);
//
//void Permutation(char* pStr)
//{
//	if (pStr == nullptr)
//		return;
//
//	Permutation(pStr, pStr);
//}
//
//void Permutation(char* pStr, char* pBegin)
//{
//	if (*pBegin == '\0')
//	{
//		printf("%s\n", pStr);
//	}
//	else
//	{
//		for (char* pCh = pBegin; *pCh != '\0'; ++pCh)
//		{
//			char temp = *pCh;
//			*pCh = *pBegin;
//			*pBegin = temp;
//
//			Permutation(pStr, pBegin + 1);
//
//			temp = *pCh;
//			*pCh = *pBegin;
//			*pBegin = temp;
//		}
//	}
//}
//
////  string�汾�ķ���   ���޷������ֵ�������ӡ��
//class Solution {
//public:
//	vector<string> Permutation(string str) {
//		if (str.size() <= 0)
//			return record;
//		int len = 0;
//		Per(str, len);
//		for (set<string>::iterator iter = record_temp.begin(); iter != record_temp.end(); iter++)
//		{
//			record.push_back(*iter);
//		}
//		return record;
//	}
//	void Per(string &str, int len)
//	{
//		if (len >= str.size())
//			record_temp.insert(str);
//		else
//		{
//			for (int i = len; i < str.size(); i++)
//			{
//				char temp = str[i];
//				str[i] = str[len];
//				str[len] = temp;
//				Per(str, len + 1);
//				temp = str[i];
//				str[i] = str[len];
//				str[len] = temp;
//
//			}
//		}
//	}
//	vector<string> record;
//	set<string> record_temp;    //���ں�����Ĺ������������ᱣ����ͬ���ݡ�
//};
//
////
////// ====================���Դ���====================
//void Test(char* pStr)
//{
//	if (pStr == nullptr)
//		printf("Test for nullptr begins:\n");
//	else
//		printf("Test for %s begins:\n", pStr);
//
//	Permutation(pStr);
//
//	printf("\n");
//}
//using namespace std;
//int main(int argc, char* argv[])
//{
//	/*Test(nullptr);
//
//	char string1[] = "";
//	Test(string1);
//
//	char string2[] = "a";
//	Test(string2);
//
//	char string3[] = "ab";
//	Test(string3);*/
//
//	char string4[] = "abb";
//	Test(string4);
//	cin.get(); cin.get();
//	return 0;
//}
