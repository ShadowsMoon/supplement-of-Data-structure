#include<iostream>
#include <cstdio>
#include<vector>
#include<stack>
#include <cstdio>
#include<string>
#include<ctime>
#include<algorithm>
#include<set>
#include <functional>    //greater<int> //�������͵��ɴ�С����   �෴��Ϊ less<int>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::multiset;        // multiset ��set ��������ǰ�������ظ�
using std::to_string;

//������40������n���������ҳ�������С��K��������������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��
//typedef multiset<int, std::greater<int> >            intSet;
//typedef multiset<int, std::greater<int> >::iterator  setIterator;
//// �ⷨ1��ʹ�� multiset
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

// �ⷨ2 
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



//������42������������������
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

// ������45������һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
//������������{3��32��321}�����ӡ���������������ųɵ���С����Ϊ321323��

//class Solution {
//public:
//// ע�� �Ƿ���Ҫstatic,ԭ��sort�еıȽϺ���cmpҪ����Ϊ��̬��Ա������ȫ�ֺ�����������Ϊ��ͨ��Ա����������ᱨ��
////��Ϊ���Ǿ�̬��Ա�����������ھ������ģ���std::sort���ຯ����ȫ�ֵģ�����޷���sort�е��÷Ǿ�̬��Ա������
////��̬��Ա��������ȫ�ֺ����ǲ������ھ�������, ���Զ������ʣ����봴���κζ���ʵ���Ϳ��Է��ʡ�
////ͬʱ��̬��Ա���������Ե�����ķǾ�̬��Ա��
//	static bool cmp(int a, int b){       
//		string A, B;
//		A.append(to_string(a) + to_string(b));
//		B.append(to_string(b) + to_string(a));  //����˼�룺�Ƚ�a+b ��b+a�Ĵ�С������С�ķ���ǰ��
//		return A < B;
//	}
//	string PrintMinNumber(vector<int> numbers) {
//		string answers;
//		sort(numbers.begin(), numbers.end(), cmp); //ע�� 	���ܵȼ���sort(numbers.begin(), numbers.end(), great<int>);  cmp�����
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



//����ֻ����������2��3��5��������������Ugly Number��������6��8���ǳ�������14���ǣ���Ϊ������������7�� 
//ϰ�������ǰ�1�����ǵ�һ���������󰴴�С�����˳��ĵ�N��������

// ����1�����ʱ�䣺�Կռ任ʱ��
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
////����2����ٷ�
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
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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


// ��һ���ַ���(0<=�ַ�������<=10000��ȫ������ĸ���)���ҵ���һ��ֻ����һ�ε��ַ�,
//����������λ��, ���û���򷵻� -1����Ҫ���ִ�Сд��
//#include<cstring>
//class Solution {
//public:
//	int FirstNotRepeatingChar(string str) {
//		if (str.size() <= 0)
//			return -1;
//        const int table=256;
//		int hashtable[table];
//		memset(hashtable, 0, sizeof(hashtable));     // sizeof(a) ����������ٸ��ֽڣ�intΪ4*size
//		string index (str);     //
//		string::iterator iter = index.begin();
//		while (iter<index.end())
//		{
//			hashtable[*(iter)]+=1;       // hashӳ�䣬���ַ�ӳ��ΪASCALLֵ����hashtable
//			iter++;
//		}
//		iter = index.begin();
//		int count = 0;
//		while (iter < index.end())
//		{
//			if (hashtable[*(iter)] == 1)
//			{
//				return count;
//				//ע��(iter-str.begin() ����int�ͣ�iter�ǲ����ݵģ�����޷��������ķ�ʽ��ȷ��λ��
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