#include <iostream>
#include<stack>
using namespace std;

/* �����������ڵ� */
//class BSTNode
//{
//private:
//	double key;					// �ؼ���
//	BSTNode *lchild;			// ����
//	BSTNode *rchild;			// �Һ���
//	BSTNode *parent;			// ���ڵ�
//	friend class BSTree;
//public:
//	BSTNode(double k = 0.0, BSTNode *l = NULL, BSTNode *r = NULL, BSTNode *p = NULL) :key(k), lchild(l), rchild(r), parent(p) {}
//};
//
///* ���������� */
//class BSTree
//{
//private:
//	BSTNode *root;				// ���ڵ�
//
//	/* �������ڲ��ӿ� */
//
//	// �������
//	void preOrder_Tree_Walk(BSTNode *x)
//	{
//		if (x != NULL)
//		{
//			cout << x->key << " ";
//			preOrder_Tree_Walk(x->lchild);
//			preOrder_Tree_Walk(x->rchild);
//		}
//	}
//
//	// �������
//	void inOrder_Tree_Walk(BSTNode *x)
//	{
//		if (x != NULL)
//		{
//			inOrder_Tree_Walk(x->lchild);
//			cout << x->key << " ";
//			inOrder_Tree_Walk(x->rchild);
//		}
//	}
//
//	// �������
//	void postOrder_Tree_Walk(BSTNode *x)
//	{
//		if (x != NULL)
//		{
//			postOrder_Tree_Walk(x->lchild);
//			postOrder_Tree_Walk(x->rchild);
//			cout << x->key << " ";
//		}
//	}
//
//	/**
//	 * ���ң��ݹ�ʵ�֣�
//	 * ���룺һ��ָ����ڵ��ָ��x���ʹ����ҵĹؼ���k
//	 * �����ָ��ؼ���Ϊk�Ľڵ��ָ�루�����ڣ��������NIL��
//	 */
//	BSTNode* tree_Search(BSTNode *x, double k)
//	{
//		if (x == NULL || k == x->key)				// ����Ҳ��žͷ���NIL���ҵ����򷵻ض�Ӧ�ڵ��ָ��
//			return x;
//		if (k < x->key)								// �ؼ���С�ڵ�ǰ�ڵ�Ĺؼ��֣����Ҿ����������м���
//			return tree_Search(x->lchild, k);
//		else										// �ؼ��ִ��ڵ�ǰ�ڵ�Ĺؼ��֣����Ҿ����������м���
//			return tree_Search(x->rchild, k);
//	}
//
//	/**
//	 * ���ң�����ʵ�֣�
//	 * ���룺һ��ָ����ڵ��ָ��x���ʹ����ҵĹؼ���k
//	 * �����ָ��ؼ���Ϊk�Ľڵ��ָ�루�����ڣ��������NIL��
//	 */
//	BSTNode* iterative_Tree_Search(BSTNode *x, double k)
//	{
//		while (x != NULL && k != x->key)
//		{
//			if (k < x->key)							// �ؼ���С�ڵ�ǰ�ڵ�Ĺؼ��֣����Ҿ����������м���
//				x = x->lchild;
//			else									// �ؼ��ִ��ڵ�ǰ�ڵ�Ĺؼ��֣����Ҿ����������м���
//				x = x->rchild;
//		}
//		return x;									// ����Ҳ��žͷ���NIL���ҵ����򷵻ض�Ӧ�ڵ��ָ��
//	}
//
//	// �����Խڵ�xΪ������������С�ؼ��ֲ�������ڵ�ָ��
//	BSTNode* tree_Minimum(BSTNode *x)
//	{
//		while (x->lchild != NULL)
//		{
//			x = x->lchild;							// ������x����lchildָ��һֱ�����ң�ֱ������һ��NIL
//		}
//		return x;
//	}
//
//	// �����Խڵ�xΪ�������������ؼ��ֲ�������ڵ�ָ��
//	BSTNode* tree_Maximum(BSTNode *x)
//	{
//		while (x->rchild != NULL)
//		{
//			x = x->rchild;							// ������x����rchildָ��һֱ�����ң�ֱ������һ��NIL
//		}
//		return x;
//	}
//
//	// ���ҽڵ�x�ĺ�̽ڵ㲢����
//	BSTNode* tree_Successor(BSTNode *x)
//	{
//		BSTNode *y = NULL;
//		if (x->rchild != NULL)						// ���ڵ�x���Һ��Ӳ�Ϊ�գ���x�ĺ�̽ڵ�������������е���С�ؼ��ֽڵ�
//			return tree_Minimum(x->rchild);
//		// ���ڵ�x���Һ���Ϊ�գ����������������
//		// a.���x���丸�������ӣ�����x�ĺ�̽��Ϊ���ĸ���㣻
//		// b.���x���丸�����Һ��ӣ�����x�ĺ�̽��Ϊx����ײ����ȣ�ͬʱ���㡰�����ײ����ȵ�����Ҳ�ǽ��x�����ȡ���������
//		y = x->parent;								// ���ڵ�x���Һ���Ϊ�գ�����yΪx�ĸ��ڵ�
//		while (y != NULL && x == y->rchild)			// ��x��ʼ��������ֱ����������һ���ڵ�x������ڵ�x������˫��y�����ӣ���ʱ˫�׼�Ϊ��̽ڵ�
//		{
//			x = y;
//			y = y->parent;
//		}
//		return y;
//	}
//
//	// ���ҽڵ�x��ǰ���ڵ㲢����
//	BSTNode* tree_Predecessor(BSTNode *x)
//	{
//		BSTNode *y = NULL;
//		if (x->lchild != NULL)						// ���ڵ�����Ӳ�Ϊ�գ���x��ǰ���ڵ�������������е����ؼ��ֽڵ�
//			return tree_Maximum(x->lchild);
//		// ���ڵ�x������Ϊ�գ����������������
//		// a.���x���丸�����Һ��ӣ�����x��ǰ�����Ϊ���ĸ���㣻
//		// b.���x���丸�������ӣ�����x��ǰ�����Ϊx����ײ����ȣ�ͬʱ���㡰�����ײ����ȵ��Һ���Ҳ�ǽ��x�����ȡ���������
//		y = x->parent;								// ���ڵ������Ϊ�գ�����yΪx�ĸ��ڵ�
//		while (y != NULL && x == y->lchild)			// ��x��ʼ��������ֱ����������һ���ڵ�x������ڵ�x������˫��y���Һ��ӣ���ʱ˫�׼�Ϊǰ���ڵ�
//		{
//			x = y;
//			y = y->parent;
//		}
//		return y;
//	}
//
//	// ���ڵ�z���뵽��TΪ���ڵ�Ķ�����������
//	void tree_Insert(BSTNode *&T, BSTNode *z)
//	{
//		BSTNode *x = T;
//		BSTNode *y = NULL;
//
//		while (x != NULL)							// ʹ��ָ�����������ƶ�������������ƶ�ȡ����z->key��x->key�ıȽ�
//		{
//			y = x;
//			if (z->key < x->key)					// �ؼ���С�ڵ�ǰ�ڵ�Ĺؼ��֣����������ƶ�
//				x = x->lchild;
//			else									// �ؼ��ִ��ڻ���ڵ�ǰ�ڵ�Ĺؼ��֣����������ƶ�
//				x = x->rchild;
//		}
//
//		z->parent = y;								// �ڵ�z�ĸ��ڵ�ָ��ָ��������Ľڵ�y
//		if (y == NULL)								// ��yΪNIL��˵��ԭ��Ϊ��
//			T = z;									// ���ڵ�z��Ϊ���ڵ����
//		else if (z->key < y->key)					// ��y��ΪNIL����z�Ĺؼ���С��y�Ĺؼ���
//			y->lchild = z;							// ��y������ָ��ָ��ڵ�z
//		else										// ��y��ΪNIL����z�Ĺؼ��ִ��ڵ���y�Ĺؼ���
//			y->rchild = z;							// ��y���Һ���ָ��ָ��ڵ�z
//	}
//
//	// ��һ����vΪ�����������滻һ����uΪ�����������ڵ�u��˫�ױ�ɽڵ�v��˫�ף�����v��Ϊu��˫�׵���Ӧ����
//	void transplant(BSTNode *&T, BSTNode *u, BSTNode *v)
//	{
//		if (u->parent == NULL)						// �ڵ�uΪ���ڵ�ʱ
//			T = v;									// �ڵ�vֱ���滻u��Ϊ���ڵ�
//		else if (u == u->parent->lchild)			// �ڵ�u���丸�ڵ������
//			u->parent->lchild = v;					// ���ڵ������ָ��ڵ�v
//		else										// �ڵ�u���丸�ڵ���Һ���
//			u->parent->rchild = v;					// ���ڵ���Һ���ָ��ڵ�v
//		if (v != NULL)
//			v->parent = u->parent;					// ���½ڵ�v�ĸ��ڵ�ָ��
//	}
//
//	// ���ڵ�z����TΪ���ڵ�Ķ�����������ɾ��
//	BSTNode* tree_Delete(BSTNode *&T, BSTNode *z)
//	{
//		BSTNode *y = NULL;
//		if (z->lchild == NULL)						// ��z������ΪNIL��ֱ����z���Һ����滻z
//			transplant(T, z, z->rchild);
//		else if (z->rchild == NULL)					// ��z���Һ���ΪNIL��ֱ����z�������滻z
//			transplant(T, z, z->lchild);
//		else										// ��z����������
//		{
//			// ����yΪz�ĺ�̣�Ҳ��z���������е���С�ؼ���
//			// y�϶�û�����ӣ�������С�ؼ��־����Ǹ����Ӷ�����y��
//			y = tree_Minimum(z->rchild);
//			if (y->parent != z)						// ��y����z���Һ���
//			{
//				transplant(T, y, y->rchild);		// ����y���Һ����滻y
//				y->rchild = z->rchild;				// y��������ָ��ָ��ԭ��z��������ָ��
//				y->rchild->parent = y;				// ԭ��z������������Ϊy�����������ĸ��ڵ�ָ�����Ϊy
//			}
//			transplant(T, z, y);					// Ȼ������y�滻z
//			y->lchild = z->lchild;					// y��������ָ��ָ��ԭ��z��������ָ��
//			y->lchild->parent = y;					// ԭ��z������������Ϊy�����������ĸ��ڵ�ָ�����Ϊy
//		}
//		return z;
//	}
//
//	// ���ٶ���������
//	void tree_Destory(BSTNode *&T)
//	{
//		if (T == NULL)
//			return;
//		if (T->lchild != NULL)
//			return tree_Destory(T->lchild);
//		if (T->rchild != NULL)
//			return tree_Destory(T->rchild);
//
//		delete T;
//		T = NULL;
//	}
//
//public:
//	BSTree() :root(NULL) {}
//
//	/* �������ⲿ�ӿ� */
//
//	// �������
//	void PreOrder_Tree_Walk()
//	{
//		preOrder_Tree_Walk(root);		// ������ڵ�
//		cout << endl;
//	}
//
//	// �������
//	void InOrder_Tree_Walk()
//	{
//		inOrder_Tree_Walk(root);		// ������ڵ�
//		cout << endl;
//	}
//
//	// �������
//	void PostOrder_Tree_Walk()
//	{
//		postOrder_Tree_Walk(root);		// ������ڵ�
//		cout << endl;
//	}
//
//	// �ݹ����
//	BSTNode* Tree_Search(double key)
//	{
//		return tree_Search(root, key);					// ������ڵ�ʹ����ҵĹؼ���key
//	}
//
//	// ��������
//	BSTNode* Iterative_Tree_Search(double key)
//	{
//		return iterative_Tree_Search(root, key);		// ������ڵ�ʹ����ҵĹؼ���key
//	}
//
//	// ��С�ؼ���
//	BSTNode* Tree_Minimum(BSTNode *x)
//	{
//		return tree_Minimum(x);					// ����������������ѯ��������С�ؼ���
//	}
//
//	// ���ؼ���
//	BSTNode* Tree_Maximum(BSTNode *x)
//	{
//		return tree_Maximum(x);					// ����������������ѯ���������ؼ���
//	}
//
//	// ���
//	BSTNode* Tree_Successor(BSTNode *x)
//	{
//		return tree_Successor(x);				// ��ѯ�ڵ�x�ĺ�̽ڵ�
//	}
//
//	// ǰ��
//	BSTNode* Tree_Predecessor(BSTNode *x)
//	{
//		return tree_Predecessor(x);				// ��ѯ�ڵ�x��ǰ���ڵ�
//	}
//
//	// ����
//	void Tree_Insert(double key)
//	{
//		BSTNode *z = new BSTNode(key, NULL, NULL, NULL);		// ���ݹؼ��������½ڵ�
//		if (z == NULL)
//			return;
//		tree_Insert(root, z);						// ���������Լ�������Ľ��
//	}
//
//	// ɾ��
//	void Tree_Delete(double key)
//	{
//		BSTNode *z, *node;
//		z = iterative_Tree_Search(root, key);		// ���ݸ����Ĺؼ��֣����������Ƿ���ڸùؼ��ֵĽ��
//		if (z != NULL)								// ������
//		{
//			node = tree_Delete(root, z);			// ���������Լ���ɾ���Ľ��
//			if (node != NULL)
//				delete node;
//		}
//	}
//
//	// ���ٶ���������
//	void Tree_Destory()
//	{
//		tree_Destory(root);
//	}
//
//	~BSTree()
//	{
//		Tree_Destory();
//	}
//};
//
//int main()
//{
//	int i, j, n;
//	double *arr;
//
//	BSTree *tree = new BSTree();
//
//	cout << "��������/�ؼ��ָ���: " << endl;
//	cin >> n;
//	arr = new double[n];
//
//	cout << "����������ؼ���(ע��ÿ�������ĸ��ڵ㶼Ҫ�����ĺ��ӽ��������): " << endl;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];					// ��������ؼ���
//		tree->Tree_Insert(arr[i]);		// ���ò��뺯�������ݹؼ������ɶ���������
//	}
//	cout << endl;
//
//	cout << "������������������Ľ��Ϊ: ";
//	tree->PreOrder_Tree_Walk();
//	cout << "������������������Ľ��Ϊ: ";
//	tree->InOrder_Tree_Walk();
//	cout << "������������������Ľ��Ϊ: ";
//	tree->PostOrder_Tree_Walk();
//	cout << endl;
//
//	double seaKey;
//	cout << "������Ҫ���ҵĽ��ؼ���: " << endl;
//	cin >> seaKey;
//	BSTNode *seaNode = tree->Tree_Search(seaKey);
//	if (seaNode)
//		cout << "���ҳɹ�" << endl;
//	else
//		cout << "����ʧ��, �ؼ���Ϊ" << seaKey << "�Ľ�㲻����" << endl;
//	cout << endl;
//
//	double delKey;
//	cout << "������Ҫɾ���Ľ��ؼ���: " << endl;
//	cin >> delKey;
//	tree->Tree_Delete(delKey);
//	// ͨ�������������������������������������Ψһȷ��һ�ö�����
//	// ��˴˴�������֤ɾ����Ķ����������Ƿ�����Ԥ���һ��
//	cout << "ɾ��������������������������Ľ��Ϊ: ";
//	tree->PreOrder_Tree_Walk();
//	cout << "ɾ��������������������������Ľ��Ϊ: ";
//	tree->InOrder_Tree_Walk();
//	cout << endl;
//
//	tree->Tree_Destory();				// ���ٶ�����
//	delete[] arr;
//
//	system("pause");
//
//	return 0;
//}






//�򵥰汾�������������Լ�ʵ��ɾ������
//struct BSTNode
//{
//	int value;					// �ؼ���
//	BSTNode *lchild;			// ����
//	BSTNode *rchild;			// �Һ���
//	BSTNode *parent;			// ���ڵ�
//	BSTNode(int k = 0) :value(k), lchild(nullptr), rchild(nullptr), parent(nullptr) {}
//};
////------------����----------------------------------------//
//BSTNode* search_tree(BSTNode*x, int key)
//{
//	while (x != nullptr &&key != x->value)
//	{
//		if (key < x->value)
//			x = x->lchild;
//		else
//			x = x->rchild;
//	}
//	return x;
//}
//
////����ĳ����������Сֵ--------------------//
//BSTNode *search_min(BSTNode*x)
//{
//	while (x->lchild != nullptr)
//		x = x->lchild;
//	return x;
//}
////����ĳ�����������ֵ--------------------//
//BSTNode *search_max(BSTNode*x)
//{
//	while (x->rchild != nullptr)
//		x = x->rchild;
//	return x;
//}
////--------------���---------------------------//
////1,�������ǿգ�2��������Ϊ�� �ж� 1���ýڵ��Ǹ��ڵ������ 2���ýڵ��Ǹ��ڵ���Һ���
//BSTNode *succ_tree(BSTNode*x)
//{
//	if (x->rchild != nullptr)
//		return search_min(x->rchild);
//	BSTNode*y = x->parent;
//	while (y != nullptr&&x == y->rchild)
//	{
//		x = y;
//		y = y->parent;
//	}
//	return y;
//}
//
////---------ɾ��---------------------------------------------//
////�����ѵ����ڣ�Ҫɾ���Ľڵ�������������������ú��
//void delete_tree(BSTNode *proot, int k)
//{
//	BSTNode *dk = search_tree(proot, k);
//	BSTNode *dk_parent = dk->parent;
//	BSTNode *w = dk;
//	BSTNode *succ = nullptr;
//	if (dk->lchild == nullptr)
//	{
//		if (dk_parent != nullptr&&dk_parent->lchild == dk)
//		{
//			dk_parent->lchild = dk->rchild;
//			(dk->rchild)->parent = dk_parent;
//		}
//		else if (dk_parent != nullptr&&dk_parent->rchild == dk)
//		{
//			dk_parent->rchild = dk->rchild;
//			(dk->rchild)->parent = dk_parent;
//		}
//		else
//			dk = dk->rchild;
//	}
//	else if (dk->rchild == nullptr)
//	{
//		if (dk_parent != nullptr&&dk_parent->lchild == dk)
//		{
//			dk_parent->lchild = dk->lchild;
//			(dk->lchild)->parent = dk_parent;
//		}
//		else if (dk_parent != nullptr&&dk_parent->rchild == dk)
//		{
//			dk_parent->rchild = dk->lchild;
//			(dk->lchild)->parent = dk_parent;
//		}
//		else
//			dk = dk->lchild;
//	}
//	else
//	{
//		w = succ_tree(w);
//		int tem = w->value;
//		w->value = dk->value;
//		dk->value = tem;
//
//		BSTNode *wp = w->parent;
//		(dk == wp) ? wp->rchild : wp->lchild = w->rchild;    //���һ��û������
//		if(w->rchild!=nullptr)
//    		w->rchild->parent = wp;
//		delete w;
//	}
//}
//
////---------------------�������--------------------------------------------------//
//void goLeftBranch(BSTNode  *x, stack<BSTNode*>& s)
//{
//	while (x != nullptr)
//	{
//		s.push(x); x = x->lchild;
//	}
//}
//void Inorder(BSTNode *pf)
//{
//	std::stack<BSTNode*>S;        //ջ�����Ƕ������ṹ��ָ��
//	BSTNode *currentx;
//	while (true)
//	{
//		goLeftBranch(pf, S);
//		if (S.empty()) break;      //SΪ��ʱΪ��
//		currentx = S.top(); cout << currentx->value << " ";
//		pf = currentx->rchild;   S.pop();
//	}
//}
////--------------------------------------------------------------------------//
//
//void ConnectBST(BSTNode *proot, BSTNode*pleft, BSTNode *pright)
//{
//	proot->lchild = pleft;
//	proot->rchild= pright;
//	if(pleft!=nullptr)
//    	pleft->parent = proot;
//	if(pright!=nullptr)
//    	pright->parent = proot;
//}
//
//void Test1()
//{
//	BSTNode* pNode2 = new BSTNode(2);
//	BSTNode* pNode3= new BSTNode(3);
//	BSTNode* pNode4 = new BSTNode(4);
//	BSTNode* pNode5 = new BSTNode(5);
//	BSTNode* pNode6 = new BSTNode(6);
//	BSTNode* pNode7 = new BSTNode(7);
//	BSTNode* pNode8 = new BSTNode(8);
//	BSTNode* pNode9 = new BSTNode(9);
//	BSTNode* pNode10 = new BSTNode(10);
//	ConnectBST(pNode5, pNode2, pNode7);
//	ConnectBST(pNode2, nullptr, pNode3);
//	ConnectBST(pNode3, nullptr, pNode4);
//	ConnectBST(pNode7, pNode6, pNode9);
//	ConnectBST(pNode9, pNode8, pNode10);
//	Inorder(pNode5);
//	/*BSTNode* test1 = search_tree(pNode5,7);
//	BSTNode *succ = succ_tree(test1);
//	cout << "4: succ: " << endl;
//	cout << succ->value << endl;*/
//	delete_tree(pNode5, 7);
//	cout << "after delete 7" << endl;
//	Inorder(pNode5);
//}
//
//void Test2()
//{
//	BSTNode* pNode2 = new BSTNode(2);
//	BSTNode* pNode3 = new BSTNode(3);
//	BSTNode* pNode4 = new BSTNode(4);
//	BSTNode* pNode5 = new BSTNode(5);
//	BSTNode* pNode6 = new BSTNode(6);
//	BSTNode* pNode7 = new BSTNode(7);
//	BSTNode* pNode8 = new BSTNode(8);
//	BSTNode* pNode9 = new BSTNode(9);
//	BSTNode* pNode10 = new BSTNode(10);
//	BSTNode* pNode11 = new BSTNode(11);
//	BSTNode* pNode12 = new BSTNode(12);
//	ConnectBST(pNode5, pNode2, pNode7);
//	ConnectBST(pNode2, nullptr, pNode3);
//	ConnectBST(pNode3, nullptr, pNode4);
//	ConnectBST(pNode7, pNode6, pNode11);
//	ConnectBST(pNode11, pNode8, pNode12);
//	ConnectBST(pNode8, nullptr, pNode9);
//	ConnectBST(pNode9, nullptr, pNode10);
//	Inorder(pNode5);
//
//	delete_tree(pNode5, 7);
//	cout << "after delete 7" << endl;
//	Inorder(pNode5);
//}
//int main()
//{
//	Test2();
//	cin.get(); cin.get();
//	return 0;
//}


