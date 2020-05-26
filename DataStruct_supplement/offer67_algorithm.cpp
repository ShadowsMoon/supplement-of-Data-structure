#include<iostream>
#include <cstdio>
#include<vector>
#include<stack>
#include<list>
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
using std::stack;
using std::sort;
using std::list;
//面试题10：递归和循环， Fib数列
//using std::cout; using std::cin; using std::endl;
//int fib_r(int n)     //普通递归
//{
//	if (n <= 1)
//		return n;
//	return fib_r(n - 1) + fib_r(n - 2);
//}
//__int64 fib_rw(int n, __int64 a = 0, __int64 b=1)   //注意尾递归形式
//{
//	if (n <= 1)return b;
//	return fib_rw(n - 1,b,a+b);
//}
//__int64 fib_dp(int n) //动态规划
//{
//	__int64 a = 0, b = 1;
//	while (n > 1)
//	{
//		b = a + b;
//		a = b - a;
//		n--;
//	}
//	return b;
//}
////矩阵迭代式
//void test_fib_r()
//{
//	int n = 30; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_r(n);
//	clock_t delay = clock() - start;               //计时 使用
//	cout << "the fibr final value: " << value << endl;
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "test1 delay=: " << secs << endl;
//}
//void test_fib_rw()
//{
//	int n = 70; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_rw(n);
//	clock_t delay = clock() - start;               //计时 使用
//	cout << "the fibrw final value: " << value << endl;
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "test2 delay=: " << secs << endl;
//}
//void test_fib_dp()
//{
//	int n = 70; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_dp(n);
//	clock_t delay = clock() - start;               //计时 使用
//	cout << "the fibdb final value: " << value << endl;
//	secs = (double)delay / CLOCKS_PER_SEC;
//	cout << "test3 delay=: " << secs << endl;
//}
//int main()
//{
//	test_fib_r();
//	//test_fib_rw();
//	//test_fib_dp();
//	cin.get(); cin.get();
//	return 0;
//}

//：排序和查找
//using std::cout; using std::cin; using std::endl; using std::swap; //swap ,需要名称空间符号
//int partquicksort(int *arr, int left, int right)   //快速排序
//{
//	int key = arr[right],end=right;
//	while (left< right)     //注意不能是left+1<right,因为只有两个时，会无法排序，直接跳过
//	{
//		while (arr[left] <= key&&left<right)   //必须都有=，否则会遗漏
//			left++;
//		while (arr[right] >= key&&left<right)
//			right--;
//		swap(arr[left], arr[right]);
//	}
//	swap(arr[right], arr[end]);
//	int index = right;
//	return index;
//}
//void quicksort(int *arr, int left, int right)
//{
//	if (left >= right)
//		return;
//	int index = partquicksort(arr, left, right);
//	quicksort(arr, left, index-1);
//	quicksort(arr, index + 1, right);
//}
//void test()
//{
//	int a[10];
//	cout << "primal: " << endl;
//	srand(time(NULL));
//	for (int i = 0; i <= 9; i++)
//	{
//		a[i] = rand() % 10;
//		cout<< a[i] << ",";
//	}
//	cout << "" << endl;
//	quicksort(a, 0, 9);
//	cout << "now: " << endl;
//	for (int i = 0; i <= 9; i++)
//		cout<<a[i] << ' ';
//}
//int main()
//{
//	test();
//	cin.get(); cin.get();
//	return 0;
//}

//旋转数组的最小数字,,
//using std::cout; using std::cin; using std::endl;
//int dirMin(int *arr, int index1, int index2)
//{
//	int result = arr[index1];
//	for (; index1 <= index2; index1++)
//	{
//		if (result > arr[index1])
//			result = arr[index1];
//	}
//	return result;
//}
//int Min(int *arr,int length)
//{
//	if (arr == nullptr || length <= 0)
//		return -1;
//	int index1 = 0, index2 = length - 1;
//	int indexmid = index1;
//	while (arr[index1] >= arr[index2])
//	{
//		if (index2 - index1 == 1)
//		{
//			indexmid = index2;
//			break;
//		}
//		indexmid = (index1 + index2) / 2;      //这是一种特殊的顺序数组，也可以用二分法
//		//
//		if (arr[index1] == arr[index2] && arr[index1] == arr[indexmid])
//		{
//			int min = dirMin(arr, index1, index2);
//			return min;
//		}
//		//
//		if (arr[indexmid] >= arr[index1])
//			index1 = indexmid;
//		else if (arr[indexmid] <= arr[index2])
//			index2 = indexmid;
//	}
//	return arr[indexmid];
//}
//void test1()
//{
//	int t1[] = { 3,4,5,6,7,1,2 };
//	int len = sizeof(t1) / sizeof(int);
//	int min = Min(t1, len);
//	cout << "min t1: " << min << endl;
//}
//void test2()
//{
//	int t1[] = { 5,6,7,8,9,1,2,3,4};
//	int len = sizeof(t1) / sizeof(int);
//	int min = Min(t1, len);
//	cout << "min t2: " << min << endl;
//}
////还需考虑特殊情况，当出现很多相等的值时，无法辨别，只能顺序查找。
//void test3()
//{
//	int t1[] = { 1,0,1,1,1 };
//	int len = sizeof(t1) / sizeof(int);
//	int min = Min(t1, len);
//	cout << "min t3: " << min << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	cin.get(); cin.get();
//}


// 面试题12：矩阵中的路径
// 题目：请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有
// 字符的路径。路径可以从矩阵中任意一格开始，每一步可以在矩阵中向左、右、
// 上、下移动一格。如果一条路径经过了矩阵的某一格，那么该路径不能再次进入
// 该格子。例如在下面的3×4的矩阵中包含一条字符串“bfce”的路径（路径中的字
// 母用下划线标出）。但矩阵中不包含字符串“abfb”的路径，因为字符串的第一个
// 字符b占据了矩阵中的第一行第二个格子之后，路径不能再次进入这个格子。
// A B T G    （c++没有矩阵数据，暂用行来模拟）
// C F C S
// J D E H
//using std::cout; using std::cin; using std::endl;
//bool haspathcore(const char* matrix, const char *str, int rows, int cols, int row, int col, int &pathlength, bool *visited);
//bool haspath(const char * martrix, const char*str,int rows,int cols)
//{
//	if (martrix == nullptr || rows < 0 || cols < 0 || str == nullptr)
//		return false;
//	int pathlength = 0;
//	bool *visited = new bool[rows*cols];
//	memset(visited, false, rows*cols);   //visited全部初始化为false
//	for (int row = 0; row < rows; row++)
//	{
//		for (int col = 0; col < cols; col++)
//		{
//			if (haspathcore(martrix,str,rows,cols,row,col,pathlength,visited) == true)
//				return true;
//		}
//	}
//	return false;
//}
//bool haspathcore(const char* matrix, const char *str, int rows, int cols, int row, int col, int &pathlength, bool *visited)
//{
//	if (str[pathlength] == '\0')
//	{
//		return true;
//	}
//
//	bool haspath = false;
//	if (row>=0&&row < rows &&col>=0&& col < cols && matrix[row*cols+col] == str[pathlength] && !visited[row*cols + col])
//	{
//		++pathlength;
//		visited[row*cols + col] = true;
//		haspath = haspathcore(matrix, str, rows, cols, row - 1, col, pathlength, visited) || haspathcore(matrix, str, rows, cols, row + 1, col, pathlength, visited) ||
//			haspathcore(matrix, str, rows, cols, row, col - 1, pathlength, visited) || haspathcore(matrix, str, rows, cols, row, col + 1, pathlength, visited);
//		if (haspath != true)
//		{
//			--pathlength;
//			visited[row*cols + col] = false;
//		}
//	}
//	return haspath;
//}
//void test1()
//{
//	const char *t1 = { "abtgcfcsjdeh" };
//	const char *tr1 = { "bfce" };
//	int rows = 3, cols = 4;
//	bool final = haspath(t1, tr1, rows, cols);
//	cout << final << endl;
//}
//int main()
//{
//	test1();
//	cin.get(); cin.get();
//	return 0;
//}

// 面试13： 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
// 注意 可使用归纳法得到 f(n)=2*f(n-1);
//class Solution {
//public:
//	int jumpFloorII(int number) {
//
//		if (number == 0)
//			return 0;
//		else if (number == 1)
//			return 1;
//		else if (number > 1)
//			return 2 * jumpFloorII(number - 1);
//	}
//};

//面试题14：减绳子，长度为n的绳子剪成2段，使 f(n)=max(f(i)*f(n-i));
//使用动态规划，划分子问题，从下至上，注意刚开始的细节
//using std::cout; using std::endl; using std::cin;
//int maxmultiply(int length)
//{
//	if (length <= 1)
//		return 0;                     //必须要切，因此
//	else if (length == 2)
//		return 1;                       //必须要切，因此
//	else if (length == 3)
//		return 2;                      //必须要切，因此
//	int *record = new int[length+1];     //动态数组的申请
//	record[0] = 0; record[1] = 1; record[2] = 2; record[3] = 3;   // 最短的原长度，不等于切的长度
//	int max = 0;
//	for (int i = 4; i <=length; i++)     //注意细节 <=
//	{
//		max = 0;
//		for (int j = 1; j <= i / 2; j++)
//		{
//			int bch = record[j] * record[i - j];
//			if (max < bch)
//				max = bch;
//			record[i] = max;
//		}
//	}
//	int fin = record[length];
//	delete [] record;
//	return fin;
//}
//int main()
//{
//	int n = 6;
//	int max = maxmultiply(n);
//	cout << max << endl;
//	cin.get(); cin.get();
//}


//面试题（原offer67_efficiency）：输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
//class Solution {
//public:
//	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
//		int small=0, big=array.size()-1;
//		int cursum = array[small] + array[big];
//		int curpro = sum*sum;
//		int *record = new int[2];
//		while (small < big)
//		{
//			if (cursum == sum)
//			{
//				if (curpro > array[small] * array[big])
//				{
//					record[0] = array[small]; record[1]=array[big];
//					curpro = array[small] * array[big];
//				}
//				++small;
//			}
//			else if (cursum < sum)
//			{
//				cursum -= array[small];
//				small += 1;
//				cursum+=array[small];
//			}
//			else
//			{
//				cursum -= array[big];
//				big-=1;
//				cursum += array[big];
//			}
//		}
//		if (record[0]+record[1] ==sum)
//		{
//			vector<int>final = { record[0],record[1] };
//			return final;
//		}
//		vector<int>final;
//		return final;
//	}
//};
//int main()
//{
//	vector<int>t1 = { 1,2,4,7,11,16 };
//	Solution te;
//   vector<int>final=te.FindNumbersWithSum(t1,10);
//   cin.get(); cin.get();
//   return 0;
//}



//面试题：汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
//对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。
//是不是很简单？OK，搞定它！
//class Solution {
//public:
//	string LeftRotateString(string str, int n) {
//		int len = str.size();
//		if (n >= len)
//			n = n %len;
//		string copy(str, 0, n);
//		str.erase(str.begin(), str.begin() + n);
//		str = str + copy;
//		return str;
//	}
//};
//
//
//
////解法2：YX = (XTY T)T
//class Solution {
//public:
//	string LeftRotateString(string str, int n)
//	{
//		int len = str.size();
//		if (len == 0) return str;
//		n %= len;
//		for (int i = 0, j = n - 1; i < j; ++i, --j) swap(str[i], str[j]);
//		for (int i = n, j = len - 1; i < j; ++i, --j) swap(str[i], str[j]);
//		for (int i = 0, j = len - 1; i < j; ++i, --j) swap(str[i], str[j]);
//		return str;
//	}
//};
//int main()
//{
//	string str = { "abcxyzdef" };
//	Solution te;
//   string final=	te.LeftRotateString(str, 3);
//   for (int i = 0; i < final.size() - 1; i++)
//	   cout << final[i];
//   cin.get(); cin.get();
//   return 0;
//}



//面试题
//牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。同事Cat对Fish写的内容颇感兴趣，
//有一天他向Fish借来翻看，但却读不懂它的意思。例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
//正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？

//class Solution {
//public:
//	string ReverseSentence(string str) {
//		int len = str.size();
//		if (len < 2)
//			return str;
//		stack<string>record;
//		int i = 0, index = 0, record_len = 0;
//	    while(index<=len)       //关键点使用两个指示来移动，并且要到达最后一位还要向后面一位
//		{
//			if (str[index] == ' ')
//			{
//				++index; ++i;
//			}
//			else if (str[i] == ' '||str[i]=='\0')
//			{
//				record_len = i - index;
//				string *tem = new string(str, index, record_len);      //前面的index表示起点，后面的表示个数
//				record.push(*tem+' ');
//				delete tem;
//				index = ++i;
//			}
//			else
//				i++;
//			
//		}
//	string final;
//	while (!record.empty())
//	{
//		final = final + record.top();
//		record.pop();
//	}
//	final.erase(final.end() - 1);
//	return final;
//	}
//};
//
//int main()
//{
//	string t1 = "student. a am i";
//	Solution te;
//	string final = te.ReverseSentence(t1);
//	int len = final.size()-1;
//	int i = 0;
//	while (i<=len)
//	{
//		cout << final[i];
//		++i;
//	}
//	cout << "final";
//	cin.get(); cin.get();
//}

//面试题
//请实现一个函数用来匹配包括'.'和'*'的正则表达式。
//模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次）。
//在本题中，匹配是指字符串的所有字符匹配整个模式。
//例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配




//面试题
//有2个大王,2个小王，“红心A,黑桃3,小王,大王,方片5”,“Oh My God!”不是顺子.....
//LL不高兴了,他想了想,决定大\小 王可以看成任何数字,并且A看作1,J为11,Q为12,K为13。上面的5张牌就可以变成“1,2,3,4,5”(大小王分别看作2和4)
//如果牌能组成顺子就输出true，否则就输出false。为了方便起见,你可以认为大小王是0。
//class Solution {
//public:
//	bool IsContinuous(vector<int> numbers) {
//		sort(numbers.begin(), numbers.end());
//		int i = 0,final=numbers.size()-1;
//		while (i<=final&& numbers[i] == 0)
//		{
//			++i;
//		}
//		if (i >= final)
//			return true;
//		if (numbers[final] - numbers[i] > final)
//			return false;
//		int changecard = i;
//		int temp = numbers[i]-1;
//		for (int jj = i; jj <= final;)
//		{
//			if (numbers[jj] == temp + 1)
//			{
//				temp = numbers[jj];
//				jj += 1;
//			}
//			else if (changecard > 0&& numbers[jj] > temp)
//			{
//				temp = temp+ 1;
//				changecard--;
//			}
//			else
//				return false;
//		}
//		return true;
//	}
//};
//
//void Test1()
//{
//	vector<int> numbers = { 1, 3, 2, 5, 4 };
//	Solution t1;
//	if (t1.IsContinuous(numbers))
//		cout << "Test1 true" << endl;
//}
//
//void Test2()
//{
//	vector<int> numbers = { 1, 3, 2, 6, 4 };
//	Solution t1;
//	if (!t1.IsContinuous(numbers))
//		cout << "Test2 true" << endl;
//}
//
//void Test3()
//{
//	vector<int> numbers = { 0, 3, 2, 6, 4 };
//	Solution t1;
//	if (t1.IsContinuous(numbers))
//		cout << "Test3 true" << endl;
//}
//
//void Test4()
//{
//	vector<int> numbers = { 0, 3, 1, 6, 4 };
//	Solution t1;
//	if (!t1.IsContinuous(numbers))
//		cout << "Test4 true" << endl;
//}
//
//void Test5()
//{
//	vector<int> numbers = { 1, 3, 0, 5, 0 };
//	Solution t1;
//	if (t1.IsContinuous(numbers))
//		cout << "Test5 true" << endl;
//}
//
//
//void Test7()
//{
//	vector<int> numbers = { 1, 0, 0, 5, 0 };
//	Solution t1;
//	if (t1.IsContinuous(numbers))
//		cout << "Test7 true" << endl;
//}
//
//void Test8()
//{
//	vector<int> numbers = { 1, 0, 0, 7, 0 };
//	Solution t1;
//	if (!t1.IsContinuous(numbers))
//		cout << "Test8 true" << endl;
//}
//
//void Test9()
//{
//	vector<int> numbers = { 3, 0, 0, 0, 0 };
//	Solution t1;
//	if (t1.IsContinuous(numbers))
//		cout << "Test9 true" << endl;
//}
//
//void Test10()
//{
//	vector<int> numbers = { 0, 0, 0, 0, 0 };
//	Solution t1;
//	if (t1.IsContinuous(numbers))
//		cout << "Test10 true" << endl;
//}
//
//int main()
//{
//	Test1();
//	Test2();
//	Test3();
//	Test4();
//	Test5();
//	Test7();
//	Test8();
//	Test9();
//	Test10();
//	cin.get(); cin.get();
//}



// 面试题62：圆圈中最后剩下的数字
// 题目：0, 1, …, n-1这n个数字排成一个圆圈，从数字0开始每次从这个圆圈里
// 删除第m个数字。求出这个圆圈里剩下的最后一个数字。

//传统方法：用stl中的list（双向链表）来模拟圆形链表：本质，当抵达最后end时，转向begin即可
//class Solution {    //高复杂度
//public:
//	int LastRemaining_Solution(int n, int m)
//	{
//		if (n < 1 || m < 1)   //边界调节
//			return -1;
//		list<int>numbers;
//		for (int i = 0; i < n; ++i)
//			numbers.push_back(i);
//		list<int>::iterator iter = numbers.begin();
//		while (n > 1)
//		{
//			for (int j = 1; j < m; j++)    //当j=0，跳出循环后 指向的时第m+1个数。
//			{
//				++iter;
//				if(iter==numbers.end())
//					iter= numbers.begin();
//			}
//			list<int>::iterator curr = iter;
//			++iter;
//			if (iter == numbers.end())
//				iter = numbers.begin();
//			numbers.erase(curr);
//			--n;
//		}
//		return *iter;
//	}
//};


//具体推导过程有待理解,  详细请看https://blog.csdn.net/wusuopubupt/article/details/18214999
//class Solution {
//public:
//	int LastRemaining_Solution(int n, int m)
//	{
//		if (n < 1 || m < 1)
//			return -1;
//
//		int last = 0;
//		for (int i = 2; i <= n; i++)
//			last = (last + m) % i;
//
//		return last;
//	}
//};
//
//void Test(const char* testName, unsigned int n, unsigned int m, int expected)
//{
//	if (testName != nullptr)
//		cout<<testName<<endl;
//	Solution tt;
//	if (tt.LastRemaining_Solution(n, m) == expected)
//		cout<<"Solution1 passed"<<endl;
//	else
//		cout << "Solution1 false" << endl;
//}
//
//
//void Test1()
//{
//	Test("Test1", 5, 3, 3);
//}
//
//void Test2()
//{
//	Test("Test2", 5, 2, 2);
//}
//
//void Test3()
//{
//	Test("Test3", 6, 7, 4);
//}
//
//void Test4()
//{
//	Test("Test4", 6, 6, 3);
//}
//
//void Test5()
//{
//	Test("Test5", 0, 0, -1);
//}
//
//void Test6()
//{
//	Test("Test6", 4000, 997, 1027);
//}
//
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test2();
//	Test3();
//	Test4();
//	Test5();
//	Test6();
//	cin.get(); cin.get();
//	return 0;
//}