#include <iostream>
#include<stack>
using namespace std;

/* 二叉搜索树节点 */
//class BSTNode
//{
//private:
//	double key;					// 关键字
//	BSTNode *lchild;			// 左孩子
//	BSTNode *rchild;			// 右孩子
//	BSTNode *parent;			// 父节点
//	friend class BSTree;
//public:
//	BSTNode(double k = 0.0, BSTNode *l = NULL, BSTNode *r = NULL, BSTNode *p = NULL) :key(k), lchild(l), rchild(r), parent(p) {}
//};
//
///* 二叉搜索树 */
//class BSTree
//{
//private:
//	BSTNode *root;				// 根节点
//
//	/* 以下是内部接口 */
//
//	// 先序遍历
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
//	// 中序遍历
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
//	// 后序遍历
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
//	 * 查找（递归实现）
//	 * 输入：一个指向根节点的指针x，和待查找的关键字k
//	 * 输出：指向关键字为k的节点的指针（若存在，否则输出NIL）
//	 */
//	BSTNode* tree_Search(BSTNode *x, double k)
//	{
//		if (x == NULL || k == x->key)				// 如果找不着就返回NIL，找到了则返回对应节点的指针
//			return x;
//		if (k < x->key)								// 关键字小于当前节点的关键字，查找就在左子树中继续
//			return tree_Search(x->lchild, k);
//		else										// 关键字大于当前节点的关键字，查找就在右子树中继续
//			return tree_Search(x->rchild, k);
//	}
//
//	/**
//	 * 查找（迭代实现）
//	 * 输入：一个指向根节点的指针x，和待查找的关键字k
//	 * 输出：指向关键字为k的节点的指针（若存在，否则输出NIL）
//	 */
//	BSTNode* iterative_Tree_Search(BSTNode *x, double k)
//	{
//		while (x != NULL && k != x->key)
//		{
//			if (k < x->key)							// 关键字小于当前节点的关键字，查找就在左子树中继续
//				x = x->lchild;
//			else									// 关键字大于当前节点的关键字，查找就在右子树中继续
//				x = x->rchild;
//		}
//		return x;									// 如果找不着就返回NIL，找到了则返回对应节点的指针
//	}
//
//	// 查找以节点x为根的子树的最小关键字并返回其节点指针
//	BSTNode* tree_Minimum(BSTNode *x)
//	{
//		while (x->lchild != NULL)
//		{
//			x = x->lchild;							// 从树根x沿着lchild指针一直往下找，直到遇到一个NIL
//		}
//		return x;
//	}
//
//	// 查找以节点x为根的子树的最大关键字并返回其节点指针
//	BSTNode* tree_Maximum(BSTNode *x)
//	{
//		while (x->rchild != NULL)
//		{
//			x = x->rchild;							// 从树根x沿着rchild指针一直往下找，直到遇到一个NIL
//		}
//		return x;
//	}
//
//	// 查找节点x的后继节点并返回
//	BSTNode* tree_Successor(BSTNode *x)
//	{
//		BSTNode *y = NULL;
//		if (x->rchild != NULL)						// 若节点x的右孩子不为空，则x的后继节点就是其右子树中的最小关键字节点
//			return tree_Minimum(x->rchild);
//		// 若节点x的右孩子为空，则有以下两种情况
//		// a.结点x是其父结点的左孩子，则结点x的后继结点为它的父结点；
//		// b.结点x是其父结点的右孩子，则结点x的后继结点为x的最底层祖先，同时满足“这个最底层祖先的左孩子也是结点x的祖先”的条件。
//		y = x->parent;								// 若节点x的右孩子为空，先令y为x的父节点
//		while (y != NULL && x == y->rchild)			// 从x开始沿树而上直到遇到这样一个节点x，这个节点x是它的双亲y的左孩子，此时双亲即为后继节点
//		{
//			x = y;
//			y = y->parent;
//		}
//		return y;
//	}
//
//	// 查找节点x的前驱节点并返回
//	BSTNode* tree_Predecessor(BSTNode *x)
//	{
//		BSTNode *y = NULL;
//		if (x->lchild != NULL)						// 若节点的左孩子不为空，则x的前驱节点就是其左子树中的最大关键字节点
//			return tree_Maximum(x->lchild);
//		// 若节点x的左孩子为空，则有以下两种情况
//		// a.结点x是其父结点的右孩子，则结点x的前驱结点为它的父结点；
//		// b.结点x是其父结点的左孩子，则结点x的前驱结点为x的最底层祖先，同时满足“这个最底层祖先的右孩子也是结点x的祖先”的条件。
//		y = x->parent;								// 若节点的左孩子为空，先令y为x的父节点
//		while (y != NULL && x == y->lchild)			// 从x开始沿树而上直到遇到这样一个节点x，这个节点x是它的双亲y的右孩子，此时双亲即为前驱节点
//		{
//			x = y;
//			y = y->parent;
//		}
//		return y;
//	}
//
//	// 将节点z插入到以T为根节点的二叉搜索树中
//	void tree_Insert(BSTNode *&T, BSTNode *z)
//	{
//		BSTNode *x = T;
//		BSTNode *y = NULL;
//
//		while (x != NULL)							// 使得指针沿树向下移动，向左或向右移动取决于z->key和x->key的比较
//		{
//			y = x;
//			if (z->key < x->key)					// 关键字小于当前节点的关键字，向左子树移动
//				x = x->lchild;
//			else									// 关键字大于或等于当前节点的关键字，向右子树移动
//				x = x->rchild;
//		}
//
//		z->parent = y;								// 节点z的父节点指针指向遍历到的节点y
//		if (y == NULL)								// 若y为NIL，说明原树为空
//			T = z;									// 将节点z作为根节点插入
//		else if (z->key < y->key)					// 若y不为NIL，且z的关键字小于y的关键字
//			y->lchild = z;							// 将y的左孩子指针指向节点z
//		else										// 若y不为NIL，且z的关键字大于等于y的关键字
//			y->rchild = z;							// 将y的右孩子指针指向节点z
//	}
//
//	// 用一棵以v为根的子树来替换一棵以u为根的子树，节点u的双亲变成节点v的双亲，并且v成为u的双亲的相应孩子
//	void transplant(BSTNode *&T, BSTNode *u, BSTNode *v)
//	{
//		if (u->parent == NULL)						// 节点u为根节点时
//			T = v;									// 节点v直接替换u作为根节点
//		else if (u == u->parent->lchild)			// 节点u是其父节点的左孩子
//			u->parent->lchild = v;					// 父节点的左孩子指向节点v
//		else										// 节点u是其父节点的右孩子
//			u->parent->rchild = v;					// 父节点的右孩子指向节点v
//		if (v != NULL)
//			v->parent = u->parent;					// 更新节点v的父节点指针
//	}
//
//	// 将节点z从以T为根节点的二叉搜索树中删除
//	BSTNode* tree_Delete(BSTNode *&T, BSTNode *z)
//	{
//		BSTNode *y = NULL;
//		if (z->lchild == NULL)						// 若z的左孩子为NIL，直接用z的右孩子替换z
//			transplant(T, z, z->rchild);
//		else if (z->rchild == NULL)					// 若z的右孩子为NIL，直接用z的左孩子替换z
//			transplant(T, z, z->lchild);
//		else										// 若z有两个孩子
//		{
//			// 先让y为z的后继，也即z的右子树中的最小关键字
//			// y肯定没有左孩子，否则最小关键字就是那个左孩子而不是y了
//			y = tree_Minimum(z->rchild);
//			if (y->parent != z)						// 若y不是z的右孩子
//			{
//				transplant(T, y, y->rchild);		// 先用y的右孩子替换y
//				y->rchild = z->rchild;				// y的右子树指针指向原来z的右子树指针
//				y->rchild->parent = y;				// 原来z的右子树（现为y的右子树）的父节点指针更新为y
//			}
//			transplant(T, z, y);					// 然后再用y替换z
//			y->lchild = z->lchild;					// y的左子树指针指向原来z的左子树指针
//			y->lchild->parent = y;					// 原来z的左子树（现为y的左子树）的父节点指针更新为y
//		}
//		return z;
//	}
//
//	// 销毁二叉搜索树
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
//	/* 以下是外部接口 */
//
//	// 先序遍历
//	void PreOrder_Tree_Walk()
//	{
//		preOrder_Tree_Walk(root);		// 传入根节点
//		cout << endl;
//	}
//
//	// 中序遍历
//	void InOrder_Tree_Walk()
//	{
//		inOrder_Tree_Walk(root);		// 传入根节点
//		cout << endl;
//	}
//
//	// 后序遍历
//	void PostOrder_Tree_Walk()
//	{
//		postOrder_Tree_Walk(root);		// 传入根节点
//		cout << endl;
//	}
//
//	// 递归查找
//	BSTNode* Tree_Search(double key)
//	{
//		return tree_Search(root, key);					// 传入根节点和待查找的关键字key
//	}
//
//	// 迭代查找
//	BSTNode* Iterative_Tree_Search(double key)
//	{
//		return iterative_Tree_Search(root, key);		// 传入根节点和待查找的关键字key
//	}
//
//	// 最小关键字
//	BSTNode* Tree_Minimum(BSTNode *x)
//	{
//		return tree_Minimum(x);					// 传入子树树根，查询子树的最小关键字
//	}
//
//	// 最大关键字
//	BSTNode* Tree_Maximum(BSTNode *x)
//	{
//		return tree_Maximum(x);					// 传入子树树根，查询子树的最大关键字
//	}
//
//	// 后继
//	BSTNode* Tree_Successor(BSTNode *x)
//	{
//		return tree_Successor(x);				// 查询节点x的后继节点
//	}
//
//	// 前驱
//	BSTNode* Tree_Predecessor(BSTNode *x)
//	{
//		return tree_Predecessor(x);				// 查询节点x的前驱节点
//	}
//
//	// 插入
//	void Tree_Insert(double key)
//	{
//		BSTNode *z = new BSTNode(key, NULL, NULL, NULL);		// 根据关键字生成新节点
//		if (z == NULL)
//			return;
//		tree_Insert(root, z);						// 传入树根以及待插入的结点
//	}
//
//	// 删除
//	void Tree_Delete(double key)
//	{
//		BSTNode *z, *node;
//		z = iterative_Tree_Search(root, key);		// 根据给定的关键字，查找树中是否存在该关键字的结点
//		if (z != NULL)								// 若存在
//		{
//			node = tree_Delete(root, z);			// 传入树根以及待删除的结点
//			if (node != NULL)
//				delete node;
//		}
//	}
//
//	// 销毁二叉搜索树
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
//	cout << "请输入结点/关键字个数: " << endl;
//	cin >> n;
//	arr = new double[n];
//
//	cout << "请依次输入关键字(注意每棵子树的根节点都要比它的孩子结点先输入): " << endl;
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];					// 依次输入关键字
//		tree->Tree_Insert(arr[i]);		// 调用插入函数，根据关键字生成二叉搜索树
//	}
//	cout << endl;
//
//	cout << "二叉搜索树先序遍历的结果为: ";
//	tree->PreOrder_Tree_Walk();
//	cout << "二叉搜索树中序遍历的结果为: ";
//	tree->InOrder_Tree_Walk();
//	cout << "二叉搜索树后序遍历的结果为: ";
//	tree->PostOrder_Tree_Walk();
//	cout << endl;
//
//	double seaKey;
//	cout << "请输入要查找的结点关键字: " << endl;
//	cin >> seaKey;
//	BSTNode *seaNode = tree->Tree_Search(seaKey);
//	if (seaNode)
//		cout << "查找成功" << endl;
//	else
//		cout << "查找失败, 关键字为" << seaKey << "的结点不存在" << endl;
//	cout << endl;
//
//	double delKey;
//	cout << "请输入要删除的结点关键字: " << endl;
//	cin >> delKey;
//	tree->Tree_Delete(delKey);
//	// 通过先序与中序遍历，或者中序与后序遍历可以唯一确定一棵二叉树
//	// 因此此处可以验证删除后的二叉搜索树是否与你预想的一样
//	cout << "删除操作后先序遍历二叉搜索树的结果为: ";
//	tree->PreOrder_Tree_Walk();
//	cout << "删除操作后中序遍历二叉搜索树的结果为: ";
//	tree->InOrder_Tree_Walk();
//	cout << endl;
//
//	tree->Tree_Destory();				// 销毁二叉树
//	delete[] arr;
//
//	system("pause");
//
//	return 0;
//}






//简单版本二叉搜索树：自己实现删除操作
//struct BSTNode
//{
//	int value;					// 关键字
//	BSTNode *lchild;			// 左孩子
//	BSTNode *rchild;			// 右孩子
//	BSTNode *parent;			// 父节点
//	BSTNode(int k = 0) :value(k), lchild(nullptr), rchild(nullptr), parent(nullptr) {}
//};
////------------查找----------------------------------------//
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
////搜索某棵子树的最小值--------------------//
//BSTNode *search_min(BSTNode*x)
//{
//	while (x->lchild != nullptr)
//		x = x->lchild;
//	return x;
//}
////搜索某棵子树的最大值--------------------//
//BSTNode *search_max(BSTNode*x)
//{
//	while (x->rchild != nullptr)
//		x = x->rchild;
//	return x;
//}
////--------------后继---------------------------//
////1,右子树非空，2，右子树为空 判断 1，该节点是父节点的左孩子 2，该节点是父节点的右孩子
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
////---------删除---------------------------------------------//
////其中难点在于，要删除的节点存在左右子树，需利用后继
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
//		(dk == wp) ? wp->rchild : wp->lchild = w->rchild;    //后继一定没有左孩子
//		if(w->rchild!=nullptr)
//    		w->rchild->parent = wp;
//		delete w;
//	}
//}
//
////---------------------中序遍历--------------------------------------------------//
//void goLeftBranch(BSTNode  *x, stack<BSTNode*>& s)
//{
//	while (x != nullptr)
//	{
//		s.push(x); x = x->lchild;
//	}
//}
//void Inorder(BSTNode *pf)
//{
//	std::stack<BSTNode*>S;        //栈里面是二叉树结构的指针
//	BSTNode *currentx;
//	while (true)
//	{
//		goLeftBranch(pf, S);
//		if (S.empty()) break;      //S为空时为真
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


