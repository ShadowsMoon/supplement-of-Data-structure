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
#include <functional>    //greater<int> //�������͵��ɴ�С����   �෴��Ϊ less<int>

using std::vector; using std::cout; using std::cin; using std::endl; using std::string;
using std::multiset;        // multiset ��set ��������ǰ�������ظ�
using std::set;
using std::to_string;
using std::stack;
using std::sort;
using std::list;
//������10���ݹ��ѭ���� Fib����
//using std::cout; using std::cin; using std::endl;
//int fib_r(int n)     //��ͨ�ݹ�
//{
//	if (n <= 1)
//		return n;
//	return fib_r(n - 1) + fib_r(n - 2);
//}
//__int64 fib_rw(int n, __int64 a = 0, __int64 b=1)   //ע��β�ݹ���ʽ
//{
//	if (n <= 1)return b;
//	return fib_rw(n - 1,b,a+b);
//}
//__int64 fib_dp(int n) //��̬�滮
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
////�������ʽ
//void test_fib_r()
//{
//	int n = 30; __int64 value;
//	double secs;
//	clock_t start = clock();
//	value = fib_r(n);
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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
//	clock_t delay = clock() - start;               //��ʱ ʹ��
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

//������Ͳ���
//using std::cout; using std::cin; using std::endl; using std::swap; //swap ,��Ҫ���ƿռ����
//int partquicksort(int *arr, int left, int right)   //��������
//{
//	int key = arr[right],end=right;
//	while (left< right)     //ע�ⲻ����left+1<right,��Ϊֻ������ʱ�����޷�����ֱ������
//	{
//		while (arr[left] <= key&&left<right)   //���붼��=���������©
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

//��ת�������С����,,
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
//		indexmid = (index1 + index2) / 2;      //����һ�������˳�����飬Ҳ�����ö��ַ�
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
////���迼����������������ֺܶ���ȵ�ֵʱ���޷����ֻ��˳����ҡ�
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


// ������12�������е�·��
// ��Ŀ�������һ�������������ж���һ���������Ƿ����һ������ĳ�ַ�������
// �ַ���·����·�����ԴӾ���������һ��ʼ��ÿһ�������ھ����������ҡ�
// �ϡ����ƶ�һ�����һ��·�������˾����ĳһ����ô��·�������ٴν���
// �ø��ӡ������������3��4�ľ����а���һ���ַ�����bfce����·����·���е���
// ĸ���»��߱�������������в������ַ�����abfb����·������Ϊ�ַ����ĵ�һ��
// �ַ�bռ���˾����еĵ�һ�еڶ�������֮��·�������ٴν���������ӡ�
// A B T G    ��c++û�о������ݣ���������ģ�⣩
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
//	memset(visited, false, rows*cols);   //visitedȫ����ʼ��Ϊfalse
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

// ����13�� һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������
// ע�� ��ʹ�ù��ɷ��õ� f(n)=2*f(n-1);
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

//������14�������ӣ�����Ϊn�����Ӽ���2�Σ�ʹ f(n)=max(f(i)*f(n-i));
//ʹ�ö�̬�滮�����������⣬�������ϣ�ע��տ�ʼ��ϸ��
//using std::cout; using std::endl; using std::cin;
//int maxmultiply(int length)
//{
//	if (length <= 1)
//		return 0;                     //����Ҫ�У����
//	else if (length == 2)
//		return 1;                       //����Ҫ�У����
//	else if (length == 3)
//		return 2;                      //����Ҫ�У����
//	int *record = new int[length+1];     //��̬���������
//	record[0] = 0; record[1] = 1; record[2] = 2; record[3] = 3;   // ��̵�ԭ���ȣ��������еĳ���
//	int max = 0;
//	for (int i = 4; i <=length; i++)     //ע��ϸ�� <=
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


//�����⣨ԭoffer67_efficiency��������һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
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



//�����⣺�����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵����񣬾������ַ���ģ�����ָ�����������
//����һ���������ַ�����S���������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,Ҫ�����ѭ������3λ��Ľ��������XYZdefabc����
//�ǲ��Ǻܼ򵥣�OK���㶨����
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
////�ⷨ2��YX = (XTY T)T
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



//������
//ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ��
//��һ������Fish������������ȴ������������˼�����磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
//��ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��

//class Solution {
//public:
//	string ReverseSentence(string str) {
//		int len = str.size();
//		if (len < 2)
//			return str;
//		stack<string>record;
//		int i = 0, index = 0, record_len = 0;
//	    while(index<=len)       //�ؼ���ʹ������ָʾ���ƶ�������Ҫ�������һλ��Ҫ�����һλ
//		{
//			if (str[index] == ' ')
//			{
//				++index; ++i;
//			}
//			else if (str[i] == ' '||str[i]=='\0')
//			{
//				record_len = i - index;
//				string *tem = new string(str, index, record_len);      //ǰ���index��ʾ��㣬����ı�ʾ����
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

//������
//��ʵ��һ����������ƥ�����'.'��'*'��������ʽ��
//ģʽ�е��ַ�'.'��ʾ����һ���ַ�����'*'��ʾ��ǰ����ַ����Գ�������Σ�����0�Σ���
//�ڱ����У�ƥ����ָ�ַ����������ַ�ƥ������ģʽ��
//���磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ�䣬������"aa.a"��"ab*a"����ƥ��




//������
//��2������,2��С����������A,����3,С��,����,��Ƭ5��,��Oh My God!������˳��.....
//LL��������,��������,������\С �����Կ����κ�����,����A����1,JΪ11,QΪ12,KΪ13�������5���ƾͿ��Ա�ɡ�1,2,3,4,5��(��С���ֱ���2��4)
//����������˳�Ӿ����true����������false��Ϊ�˷������,�������Ϊ��С����0��
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



// ������62��ԲȦ�����ʣ�µ�����
// ��Ŀ��0, 1, ��, n-1��n�������ų�һ��ԲȦ��������0��ʼÿ�δ����ԲȦ��
// ɾ����m�����֡�������ԲȦ��ʣ�µ����һ�����֡�

//��ͳ��������stl�е�list��˫��������ģ��Բ���������ʣ����ִ����endʱ��ת��begin����
//class Solution {    //�߸��Ӷ�
//public:
//	int LastRemaining_Solution(int n, int m)
//	{
//		if (n < 1 || m < 1)   //�߽����
//			return -1;
//		list<int>numbers;
//		for (int i = 0; i < n; ++i)
//			numbers.push_back(i);
//		list<int>::iterator iter = numbers.begin();
//		while (n > 1)
//		{
//			for (int j = 1; j < m; j++)    //��j=0������ѭ���� ָ���ʱ��m+1������
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


//�����Ƶ������д����,  ��ϸ�뿴https://blog.csdn.net/wusuopubupt/article/details/18214999
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