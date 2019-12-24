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

class Solution {
public:
// 注意 是否需要static,原因？sort中的比较函数cmp要声明为静态成员函数或全局函数，不能作为普通成员函数，否则会报错。
//因为：非静态成员函数是依赖于具体对象的，而std::sort这类函数是全局的，因此无法再sort中调用非静态成员函数。
//静态成员函数或者全局函数是不依赖于具体对象的, 可以独立访问，无须创建任何对象实例就可以访问。
//同时静态成员函数不可以调用类的非静态成员。
	static bool cmp(int a, int b){       
		string A, B;
		A.append(to_string(a) + to_string(b));
		B.append(to_string(b) + to_string(a));  //核心思想：比较a+b 和b+a的大小，把最小的放在前面
		return A < B;
	}
	string PrintMinNumber(vector<int> numbers) {
		string answers;
		sort(numbers.begin(), numbers.end(), cmp);
		for (int i = 0; i < numbers.size(); i++)
			answers += to_string(numbers[i]);
		return answers;
	}
};

int main()
{
	vector<int >t1= {3, 32, 321};
	Solution test1;
    string result=test1.PrintMinNumber(t1);
	cout << result << endl;
	cin.get(); cin.get();
	return 0;
}