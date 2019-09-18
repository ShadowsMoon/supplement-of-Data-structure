#include<iostream>
#include<vector>
using namespace std;

int judge(char t1,vector<char>sign)
{
	int judg = 0;
	for (int num = 0; num < 6; num++)
	{
		if (sign[num] == t1)
		{
			judg = num;
			break;
		}
	}
	return judg;
}

int main()
{
	vector<char>sign = { 'A','B','C','D','E','F','F' };
	int b[6][6];
	int a[] = { 0,12,22,25,27,19,23, 0, 10, 13, 15, 7,22, 24, 0, 3, 5, 6,	22,36,46,0,4,6 ,18, 30, 40, 45, 0, 2,16,28,38,41,43,0 };
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			b[i][j] = a[i * 6 + j];
	char t1 = 'E'; char t2 = 'E';
	int h = judge(t1, sign);
	int l = judge(t2, sign);

	int small = b[h][l];
	cout << small << endl;
	cin.get(); cin.get();



}