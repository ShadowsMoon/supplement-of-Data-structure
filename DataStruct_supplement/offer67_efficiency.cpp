#include<iostream>
#include <cstdio>
#include<vector>
#include<stack>
#include <cstdio>
#include<string>
#include<ctime>
#include<algorithm>
#include<set>
#include <functional>    //greater<int> //内置类型的由大到小排序   相反的为 less<int>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::multiset;        // multiset 和set 区别在于前者允许重复
using std::set;
using std::to_string;



//面试题40：输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。
//typedef multiset<int, std::greater<int> >            intSet;
//typedef multiset<int, std::greater<int> >::iterator  setIterator;
//// 解法1：使用 multiset
//void GetLeastNumbers_Solution2(const vector<int>& data, intSet& leastNumbers, int k)
//{
//	leastNumbers.clear();
//
//	if (k < 1 || data.size() < k)
//		return;
//
//	vector<int>::const_iterator iter = data.begin();
//	for (; iter != data.end(); ++iter)
//	{
//		if ((leastNumbers.size()) < k)
//			leastNumbers.insert(*iter);
//
//		else
//		{
//			setIterator iterGreatest = leastNumbers.begin();
//
//			if (*iter < *(leastNumbers.begin()))
//			{
//				leastNumbers.erase(iterGreatest);
//				leastNumbers.insert(*iter);
//			}
//		}
//	}
//}

// 解法2 
//class Solution {
//public:
//	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
//	{
//		int num = 0;
//		vector<int>GetLastK;
//		if (k > input.size())
//			return GetLastK;
//		int len = input.size();
//		while (num < k)
//		{
//			int middle;
//			for (int i = 1; i < len; i++)
//			{
//				if (input[i - 1] < input[i])
//				{
//					middle = input[i - 1];
//					input[i - 1] = input[i];
//					input[i] = middle;
//				}
//			}
//			GetLastK.push_back(input[len - 1]);
//			--len;
//			++num;
//		}
//		return GetLastK;
//	}
//};


//int main()
//{
//	//Solution test1;
//	//vector<int> t1 = { 4,5,1,6,2,7,3,8 };
// //   vector<int>tr=	test1.GetLeastNumbers_Solution(t1, 4);
//	//for (auto i = 0; i < tr.size(); i++)
//	//{
//	//	cout << tr[i] << "; ";
//	//}
//	//cout << "test: " ;
//	//cout << &tr[1] << "; " << &tr[2] << endl;
//	cin.get(); cin.get();
//	return 0;
//}



//面试题42：连续子向量的最大和
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		int length = array.size();
//		int len = 0;
//		std::set<int,std::greater<int>> max_record;
//		while (len < length&&array[len] < 0)
//		{
//			len++;
//		}
//		if (len >= length)
//		{
//			for (int i = 0; i < length; i++)
//				max_record.insert(array[i]);
//			return *(max_record.begin());
//		}
//		int cur_max = array[len];
//		int old_max = cur_max;
//		while (true)
//		{
//			if (cur_max > 0)
//			{
//				for (int i = len + 1;  i < length&&cur_max > 0; i++,len++)
//				{
//					cur_max += array[i];
//					if (cur_max > old_max)
//						old_max = cur_max;
//				}
//				if (len+1 < length)
//				{
//					max_record.insert(old_max);
//				}
//				else if (len+1>= length)
//				{
//					max_record.insert(old_max);
//					break;
//				}
//				cur_max = array[len]; old_max = cur_max;
//			}
//			++len;
//			if (len >= length)
//				break;
//			cur_max = array[len]; old_max = cur_max;
//		}
//		int max = *(max_record.begin());
//		return max;
//	}
//};
//void Test1()
//{
//	vector<int> test1 = { 6,-3,-2,7,-15,1,2,2 };
//	Solution t1;
//	int max = t1.FindGreatestSumOfSubArray(test1);
//	cout << "max: " << max;
//}
//void Test2()
//{
//	vector<int> test1 = { -2, -8, -1, -5, -9 };
//	Solution t1;
//	int max = t1.FindGreatestSumOfSubArray(test1);
//	cout << "max: " << max;
//}
//void Test3()
//{
//	vector<int> test1 = { -2, -8, 1, -5, -9 };
//	Solution t1;
//	int max = t1.FindGreatestSumOfSubArray(test1);
//	cout << "max: " << max;
//}
//int main()
//{
//	Test3();
//	cin.get(); cin.get();
//}

// 面试题45：输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
//例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。

//class Solution {
//public:
//// 注意 是否需要static,原因？sort中的比较函数cmp要声明为静态成员函数或全局函数，不能作为普通成员函数，否则会报错。
////因为：非静态成员函数是依赖于具体对象的，而std::sort这类函数是全局的，因此无法再sort中调用非静态成员函数。
////静态成员函数或者全局函数是不依赖于具体对象的, 可以独立访问，无须创建任何对象实例就可以访问。
////同时静态成员函数不可以调用类的非静态成员。
//	static bool cmp(int a, int b){       
//		string A, B;
//		A.append(to_string(a) + to_string(b));
//		B.append(to_string(b) + to_string(a));  //核心思想：比较a+b 和b+a的大小，把最小的放在前面
//		return A < B;
//	}
//	string PrintMinNumber(vector<int> numbers) {
//		string answers;
//		sort(numbers.begin(), numbers.end(), cmp); //注意 	功能等价于sort(numbers.begin(), numbers.end(), great<int>);  cmp更灵活
//		for (int i = 0; i < numbers.size(); i++)
//			answers += to_string(numbers[i]);
//		return answers;
//	}
//};
//
//int main()
//{
//	vector<int >t1= {3, 32, 321};
//	Solution test1;
//    string result=test1.PrintMinNumber(t1);
//	cout << result << endl;
//	cin.get(); cin.get();
//	return 0;
//}



//：把只包含质因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含质因子7。 
//习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。

// 方法1：最佳时间：以空间换时间
//class Solution1 {
//public:
//	int GetUglyNumber_Solution(int index) {
//		if (index <= 0)
//			return 0;
//		int *Ru = new int[index];
//		int nextR = 1;
//		Ru[0] = 1;
//		int *u2 = Ru;   //
//		int *u3 = Ru;
//		int *u5 = Ru;
//		while (nextR < index)
//		{
//			int min = min235(*u2 * 2, *u3 * 3, *u5 * 5);
//			Ru[nextR] = min;
//			while (*u2 * 2 <= min)     //
//				++u2;
//			while (*u3 * 3 <= min)
//				++u3;
//			while (*u5 * 5 <= min)
//				++u5;
//			++nextR;
//		}
//		int fin = Ru[index - 1];
//		delete[]Ru;
//		return fin;
//	}
//	int min235(int nu2, int nu3, int nu5)
//	{
//		int mid = ((nu2 <= nu3) ? nu2 : nu3);
//		return (mid <= nu5) ? mid : nu5;
//	}
//};
//
////方法2：穷举法
//class solution2 {
//public:
//	bool IsUgly(int index)
//	{
//		while (index % 2 == 0)
//			index = index >> 1;
//		while (index % 3 == 0)
//			index = index / 3;
//		while (index % 5 == 0)
//			index = index / 5;
//		return (index == 1) ? true : false;
//	}
//	int GetUglyNumber_Solution(int index) {
//		if (index <= 0)
//			return index;
//		int count = 0, number = 0;
//		while (count < index)
//		{
//			++number;
//			if (IsUgly(number))
//				++count;
//		}
//		return number;
//	}
//};
//void test1()
//{
//	double secs;                           
//	clock_t start = clock();
//
//	Solution1 t1;
//	int v1 = t1.GetUglyNumber_Solution(1000);
//	cout << "t1: " << v1 << endl;
//
//	clock_t delay = clock() - start;               //计时 使用
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "delay=: " << secs << endl;
//}
//void test2()
//{
//	double secs;
//	clock_t start = clock();
//
//	solution2 t2;
//	int v2 = t2.GetUglyNumber_Solution(1000);
//	cout << "t2: " << v2 << endl;
//
//	clock_t delay = clock() - start;               //计时 使用
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "delay=: " << secs << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	cin.get(); cin.get();
//	return 0;
//}


// 在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,
//并返回它的位置, 如果没有则返回 -1（需要区分大小写）
//#include<cstring>
//class Solution {
//public:
//	int FirstNotRepeatingChar(string str) {
//		if (str.size() <= 0)
//			return -1;
//        const int table=256;
//		int hashtable[table];
//		memset(hashtable, 0, sizeof(hashtable));     // sizeof(a) 求出包含多少个字节，int为4*size
//		string index (str);     //
//		string::iterator iter = index.begin();
//		while (iter<index.end())
//		{
//			hashtable[*(iter)]+=1;       // hash映射，由字符映射为ASCALL值放入hashtable
//			iter++;
//		}
//		iter = index.begin();
//		int count = 0;
//		while (iter < index.end())
//		{
//			if (hashtable[*(iter)] == 1)
//			{
//				return count;
//				//注：(iter-str.begin() 不是int型，iter是不相容的，因此无法用这样的方式来确定位置
//			}
//			iter++;
//			count++;
//		}
//		return-1;
//	}
//};
//void test1()
//{
//	string str = "aabbcde";
//	Solution  t1;
// 	int pos=t1.FirstNotRepeatingChar(str);
//	cout << "position: " << pos;
//}
//int main()
//{
//	test1();
//	cin.get(); cin.get();
//	return 0;
//}



//面试题51：在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。
//输入一个数组, 求出这个数组中的逆序对的总数P。并将P对1000000007取模的结果输出。 即输出P % 1000000007
//class Solution {
//public:
//	int InversePairs(vector<int> data) {
//		if (data.size() < 2)
//			return 0;
//		vector<int>::iterator proot = data.begin();
//		vector<int>* copy = new vector<int>(data);
//		int count=IP_main(proot,copy->begin(),0,data.size()-1);
//		return count;
//	}
//	int IP_main(vector<int>::iterator data, vector<int>::iterator copy,int lo,int hi )
//	{
//		if (lo == hi)
//		{
//			return 0;
//		}
//		int length = (hi - lo) / 2;
//		int left = IP_main(copy, data, lo, lo + length);
//		int right = IP_main(copy, data, lo + length + 1, hi);
//
//		int i = lo + length;
//		int j = hi;
//		int indexcopy = hi;
//		int count=0;
//
//		while (i >= lo && j >= lo + length + 1)
//		{
//			if  (data[i] > data[j])
//			{
//				count += j - lo - length;
//				copy[indexcopy--] = data[i--];
//			}
//			else 
//				copy[indexcopy--] = data[j--];
//		}
//		for(;i>=lo;i--)
//			copy[indexcopy--] = data[i];
//		for(;j>=lo+length+1;j--)
//			copy[indexcopy--] = data[j];
//		return left+right+count;
//	}
//
//};
//void test1()
//{
//	vector<int>data = { 6,5,4,3,2,1 };
//	Solution t1;
//	int count=t1.InversePairs(data);
//	if (count == 15)
//		cout << "successed" << endl;
//}
//void test2()
//{
//	vector<int>data = { 1, 2, 3, 4, 7, 6, 5 };
//	Solution t1;
//	int count = t1.InversePairs(data);
//	if (count == 3)
//		cout << "successed" << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	cin.get(); cin.get();
//}



//面试题52 （简单）
//输入两个链表，找出它们的第一个公共结点。（注意因为传入数据是链表，所以错误测试数据的提示是用其他方式显示的，保证传入数据是正确的）
//公共节点不仅仅指该节点值相同，并且地址也相同



//面试题53
//统计一个数字在排序数组中出现的次数。
//class solution {
//public:
//	int num_main(vector<int>data, int k)
//	{
//		int num = 0;
//		int len = data.size();
//		if (len > 0)
//		{
//			int fir = getfirst(data.begin(), len,k, 0, len - 1);
//			int las=getlast(data.begin(), len, k, 0, len - 1);
//			if (fir > -1 && las > -1)
//				num = las - fir + 1;
//		}
//		return num;
//	}
//	int getfirst(vector<int>::iterator proot,int length, int &k, int start, int end)
//	{
//		if (start > end)   //当要找的值不在该向量中时
//			return -1;  
//		int mid = (end + start) / 2;
////		int mid_value = proot[mid];
//		if (proot[mid] == k)
//		{
//			if (mid - 1 > 0 && proot[mid - 1] != k || mid == 0)
//				return mid;
//			else
//				end = mid - 1;
//		}
//		else if (proot[mid] > k)
//			end =mid- 1;
//		else
//			start =mid+ 1;
//		return getfirst(proot, length,k, start, end);
//	}
//
//	int getlast(vector<int>::iterator proot, int length,int &k, int start, int end)
//	{
//		if (start > end)   //当要找的值不在该向量中时
//			return -1;
//		int mid = (end + start) / 2;
//		//		int mid_value = proot[mid];
//		if (proot[mid] == k)
//		{
//			if (mid - 1 > 0 && proot[mid + 1] != k || mid ==length-1)
//				return mid;
//			else
//				start = mid +1;
//		}
//		else if (proot[mid] > k)
//			end = mid - 1;
//		else
//			start = mid + 1;
//		return getlast(proot, length,k,start, end);
//	}
//};
//
//int main()
//{
//	vector<int >data= {1, 2, 3, 4, 4, 4, 5, 6, 6, 7};
//	solution t1;
//    int num=t1.num_main(data, 4);
//	cout << "num: " << num << endl;
//	cin.get(); cin.get();
//}


//面试题55
//输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//class Solution {
//public:
//	int TreeDepth(TreeNode* pRoot)
//	{
//		if (pRoot == nullptr)
//			return 0;
//		int leftlen = TreeDepth(pRoot->left);
//		int rightlen= TreeDepth(pRoot->right);
//		if (leftlen >= rightlen)
//			return 1 + leftlen;
//		else
//			return 1 + rightlen;
//	}
//};

//面试题56
//输入一棵二叉树，判断该二叉树是否是平衡二叉树。(注意与55的区别)
//class Solution {
//public:
//	bool IsBalanced_Solution(TreeNode* pRoot) {
//		int depth;
//		return IsBalance(pRoot, &depth);
//	}
//	bool IsBalance(TreeNode*pRoot, int *depth)
//	{
//		if (pRoot == nullptr)
//		{
//			*depth = 0;
//			return true;
//		}
//		int left, right;    //重要的参数，其赋值将在下一个递归中取得。
//		if (IsBalance(pRoot->left, &left) && IsBalance(pRoot->right, &right))
//		{
//			int diff = left - right;
//			if (diff <= 1 && diff >= -1)
//			{
//				*depth = 1 + (left >= right ? left : right);
//				return true;
//			}
//		}
//		return false;
//	}
//};


//面试题56  （难，巧妙，最优）
//一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。
//首先思考 当其他数字都出现两次，而只有一个数字只出现一次时，考虑采用异或（相等的为0，不等的为1）时，剩下的就为只出现一次的
//想法：考虑把数组分成两边各只包含一个只出现一次的数字，其他的都为两次的放在一组中。
//如何分？ 因为整个数组异或完 就剩两个只出现一次的异或的结果（至少有一位为1），选择为1 的一位，对照所有的数字分成这位为1的和没有1的，可以保证想法2
//class Solution {
//public:
//	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
//		if (data.size() <= 0)
//			return;
//		int resultXor = 0;
//		for (int i = 0; i < data.size(); i++)
//			resultXor ^= data[i];             // 异或操作，得到只有出现一次的值的异或结果
//		int indexOne = indexfirst(resultXor);
//		*num1 = *num2 = 0;
//		for (int i = 0; i < data.size(); i++)
//		{
//			if ((data[i] >> indexOne) & 1 == 1) //确定在第indexOne为是否为1
//				*num1 = (*num1) ^ data[i];
//			else
//				*num2 = (*num2) ^ data[i];
//		}
//	}
//	int indexfirst( int resultX)
//	{                                                 //该函数确定该数值的二进制中第一个为1 的在第几位？
//		int indexO = 0;
//		while ((resultX & 1) == 0&&(indexO<8*sizeof(int)))   //注意位运算的细节 ,resultx&1确定最低位是否为1
//		{
//			resultX=resultX >> 1;                   
//			++indexO;
//		}
//		return indexO;
//	}
//};

//第二种解决方式  需O(n)空间
//class Solution {
//public:
//	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
//		set<int> save;
//		set<int>::iterator iter;
//		for (int i = 0; i < data.size(); i++) {
//			if (save.find(data[i]) == save.end())    //set 的特点是，不论该元素的大小，当未找到该元素时，会返回最后的地址end。
//				save.insert(data[i]);
//			else {
//				iter = save.find(data[i]);
//				save.erase(iter);
//			}
//		}
//		iter = save.begin();
//		*num1 = *iter;
//		*num2 = *(++iter);
//	}
//};
//解法3（时间复杂度高）：//使用堆栈来做辅助功能，将数组先排序，依次入栈，
//每一次数组入栈时和当前堆栈的栈头比较，如果当前堆栈为空，就入栈，如果和当前栈头的元素相同就出栈，
//
//
//int main()
//{
//	vector<int>t1 = { 2,4,3,6,3,2,5,5 };
//	Solution te;
//	int f1 = 0, f2 = 0;
//	te.FindNumsAppearOnce(t1, &f1, &f2);
//	cout << "f1: " << f1 << " f2:" << f2;
//
//	cin.get(); cin.get();
//}



//面试题57：输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序
//审清题目，需要连续的正整数，彼此间相差为 1

//class Solution {
//public:
//	vector<vector<int> > FindContinuousSequence(int sum) {
//		vector<vector<int> > allRes;
//		int phigh = 2, plow = 1;
//
//		while (phigh > plow) {
//			int cur = (phigh + plow) * (phigh - plow + 1) / 2;
//			if (cur < sum)
//				phigh++;
//
//			if (cur == sum) {
//				vector<int> res;
//				for (int i = plow; i <= phigh; i++)
//					res.push_back(i);
//				allRes.push_back(res);
//				plow++;
//			}
//
//			if (cur > sum)
//				plow++;
//		}
//
//		return allRes;
//	}
//};
//
//
//int main()
//{
//	Solution t1;
//    vector<vector<int>>collect=	t1.FindContinuousSequence(15);
//	for (int i = 0; i <= collect.size() - 1; i++)
//	{
//		vector<int>*record = new vector<int>{ collect[i] };
//		for (int j = 0; j < (*record).size(); j++)
//		{
//
//			cout <<(*record)[j]<<endl;
//		}
//	}
//	cin.get(); cin.get();
//}

//面试题（Transmission）：输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
//，具体代码转移到 offer67_algorithnm


//面试题：汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
//对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。
//是不是很简单？OK，搞定它！
//具体代码转移到 offer67_algorithnm