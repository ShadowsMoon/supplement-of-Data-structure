#include<iostream>
#include<stdio.h>
#include<string>
#include   <stdlib.h>  
#include<ctime>
#include<list>
#include<array>
#include<vector>
using namespace std;
int main()
{
	//cout << "rand(1): " << rand() % 10 << endl;     // rand产生随机整数，使用a+rand%b可得到 [a，b]范围的整数
	//cout << "rand(2): " << rand() % 10 << endl;
	//cout << "rand(2): " << rand() % 10 << endl;
	//srand(time(NULL));     //srand 保证rand每次产生的随机数都不一样，因为time(NULL)为当前时间。
	//for (int i = 0; i < 10; i++)
	//	cout << 100 + rand() % 200 << endl;
	//----------------------------------------------------------------------------------
	//int n = 441; int ones = 0; int m;
	//m = n >> 1;
	//cout << m << endl;
	//while (0 < n)
	//{
	//  ones += (1 & n);   //二进制与运算 ，判断该整数的二进制1的个数
	//  n >>= 1;
 //    }
	//cout << ones << endl;
	//--------使用容器将整数转换二进制------------------------------------------------------------------------
    	int temp; int n = 441;
		temp = n;
		vector<int>L;
		while (temp != 0)
		{
			L.push_back(temp % 2);
			temp = temp>>1;
		}

		//int na= L.size() - 1;
		//for (int m = 0; m < na; m++)
		//{
		//	cout << L[m] << endl;
		//}
		/*for (vector<int>::iterator iter = L.begin(); iter != L.end(); iter++)
			cout<<*iter;
		cout<<endl;*/
//-----------------------------------------------------------------------------

	cin.get(); cin.get();
	return 0;
}
