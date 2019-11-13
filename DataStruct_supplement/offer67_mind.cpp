#include<iostream>
//面试题26：操作给定的二叉树，将其变换为源二叉树的镜像。
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
//		if (pRoot == nullptr)          //细节注意：无返回函数的递归可以：return;
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

//输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
//例如，如果输入如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
#include<vector>
using std::cout; using std::cin; using std::endl; using std::vector;
class Solution {
public:
	vector<int> printMatrix(vector<vector<int> > matrix)
	{
		if (matrix.empty())
		{
			vector<int>nullmar;
			return nullmar;
		}
		vector<int> record_mar;
		int start = 0;
		int row = matrix.size();  //row 为 行
		int col = matrix[0].size();
		while (col > start * 2 && row > start * 2)
		{
			printmain(matrix, col, row, start, record_mar);
			++start;
		}
		return record_mar;
	}
	void printmain(vector<vector<int> > matrix, int col, int row, int start, vector<int>&ma)
	{
		int endx = col - 1 - start;
		int endy = row - 1 - start;
		for (int i = start; i <= endx; i++)
		{
			int number = matrix[start][i];
			ma.push_back(number);         //cout<<number<<endl;
		}
		if (start < endy)                        //
		{
			for (int i = start + 1; i <= endy; i++)
			{
				int number = matrix[i][endx];
				ma.push_back(number);         // cout<<number<<endl;
			}
		}
		if (start < endx&&start < endy)
		{
			for (int i = endx - 1; i >= start; i--)
			{
				int number = matrix[endy][i];
				ma.push_back(number);         // cout<<number<<endl;
			}
		}
		if (start < endx&&start + 1 < endy)
		{
			for (int i = endy - 1; i >= start + 1; i--)
			{
				int number = matrix[i][start];
				ma.push_back(number);         //cout<<number<<endl;
			}
		}


	}

};