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