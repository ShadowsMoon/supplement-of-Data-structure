
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<string>
//using namespace std;
////  https://blog.csdn.net/u010455041/article/details/50097251
//int main()
//{
//	int a = 2341, b = 234;
//	string A = "";
//	string B = "";
//	A += to_string(a);  //int��תΪstring��
//	A += to_string(b);
//	B += to_string(b);
//	B += to_string(a);
//	bool ju = A > B;             // string�����ֱ�ӱȽϴ�С�������ǰ�ascall �����С��λ�Ƚ�
//	if (!ju)
//		cout << A << endl;
//
//	string t1 = "ab", t2 = "ac";
//	ju = t1 < t2;
//	if (ju)
//		cout << t1<< endl;
//	cin.get(); cin.get();
//}



//int main()
//{
//
//	const char * a = "string1";      //����char�ͣ��޷��޸����ݣ��������޸�ָ��ĵ�ַ
//	char b[] = "string2";
//	cout << "a: " << a << endl;
//	a = b;
//	a = a + 1;       //��ͨ���÷���������ɾ��������
//	cout << "a: " << a << endl;
//	int a_len = strlen(a);
//	cout << "a_len: " << a_len << endl;
//	//������һ��char���飬��a�Ĳ��ָ�ֵ�ķ�����ע��ĩβ����Ϊ   '\0'
//	char at[10]; 
//	int i = 0;
//	for (; i < a_len - 2; i++)
//	{
//		at[i] = *a; a++;
//	}
//	for (; i < 10-1; i++)
//	{
//		at[i] = '\0';
//	}
//	cout << at << endl;
//	const char* co = nullptr;   //��ֵΪ��

	//------------------string --------------------------------------------------------------//

	//string a1 = { "string1" };
	//string b1 = nullptr;
	//string str = "HelloWorld!";     //��ʼ��string���ͣ������帳ֵ
	//const char* constc = nullptr;         //��ʼ��const char*���ͣ�����ֵΪ��
	//constc = str.c_str();                 //string����תconst char*����
	//cout << constc << endl;


	//const char* cab = "Hello World!";     //��ʼ��const char* ���ͣ������帳ֵ
	//string strr;                        //��ʼ��string����
	//strr = cab;  //const char*����תstring����
	//cout << str << endl;

//	cin.get(); cin.get();
//}

// char operator
//int main()
//{
	//char a1[] = "abc def";
	//char a2[] = "gh";
	//strcpy_s(a1, a2);   //��a2���Ƶ�a1   // strcpy(a1, a2);  old version 
	//cout << a1 << endl;
	//cout << strlen(a1) << endl;
	//char b1[] = "abc def";
	//char b2[] = "   a";
	//cout << strlen(b2) << endl;
	////strcat(b1, b2);                   //old version
	//int len = strlen(b1) + strlen(b2) + 1;
	//strcat_s(b1, len, b2);
	//cout << b1 << endl;
	//cout << strlen(b1) << endl;
	//char *b12 = b1 + strlen(b1)-1;
	//char *b11 = b1 + 4;
	//cout << b11 << endl;
	//cout<< b12 << endl;
	//char b3[100]= "abcdfegh";      //������100����ʵ���ϻ���8����Ϊ�����ַ����ĺ������ݿ��ַ���λ�ã����������鳤�������д���
	//cout <<"length: "<< strlen(b3) << endl;
	//char b4[] = "ab\0cd";
	//cout << "b4 length: " << strlen(b4) << endl;

//
//	cin.get(); cin.get();
//}



//----------------------------��1-----------------------------------------------------------//
//���ַ���string��ʼ����ƥ���Ӵ�sub������ƥ�䵽���ַ�������
//sub���������'?'��ʾ����ƥ��һ��������'\0'����������ַ���
//���sub�����Ҳ���ƥ����ַ�����˵����������ƥ�䡣
//���������ƥ�䣬����ƥ�䵽���ַ�����������ж���ƥ�䷽ʽ������ƥ���ַ������ٵ��Ǹ��������������ƥ�䣬���� - 1
//

////-----------------------------------------------------------------//
//int main()
//{
//	char str[1005];
//	char sub[105];
//	cin >> str >> sub;
//	int i, j;
//	i = j = 0;
//	int lena = strlen(str);
//	int lenb = strlen(sub);
//	int t = 0;
//	int cnt = 0;
//	while (i < lena&&j < lenb)
//	{
//		if (str[i] == sub[j])
//		{
//			i++;
//			j++;
//			cnt++;
//			t = 0;
//		}
//		else
//		{
//			if (sub[j + 1] == str[i])
//			{
//				i++;
//				j += 2;
//				t = 0;
//				cnt++;
//			}
//			else  if (sub[j] == '?'&&t < 3)
//			{
//				i++;
//				cnt++;
//				t++;
//			}
//			else break;
//		}
//	}
//	if (j == lenb)cout << cnt << endl;
//	else cout << -1 << endl;
//	cin.get(); cin.get();
//	return 0;
//}


//---�ַ����������⣬��"  abcd  "����Ϊ"abcd'',����ֻҪ�漰"  " and "|"����ȥ�����м�Ĳ���ȥ-----//
//char���ʹ�СΪһ���ֽڣ�intΪ4���ֽ�
//��ͳchar���
//void Out(char *in,char*out)
//{
//	int len = strlen(in);
//	int i = 0,n; 
//	n = len - 1;
//	while (in[i] == '|' || in[i] == ' ')
//		i++;
//	while (in[n] == '|' || in[n] == ' ')
//		n--;
//
//	
//	for (int j = 0; i <=n; i++, j++)
//	{
//		cout<<*(in+i);
//		out[j] = in[i];   //��ֵ�����⣿����string
//	}
//
//
//}
//
//string & sout(string s1)
//{
//
//}
//
//
//int main()
//{
//	//----------char *----------------------------//
//	char in1[] = { "|| |ab| afa  ||" };
//	char out[8];
//	Out(in1, out);
//	out[7] = '\0';
//	cout << " " << endl;
//	cout << "the remain: " << out << endl;
//	//--------------string-------------------------//
//
//	cin.get(); cin.get();
//	return 0;
//}





//-----�����㷨ʵ�ִ�ƥ��-------------------------------//
//typedef int Size_t;
//int main()
//{
//		const char *T = "abaabaabbabaaabaabbabaab";
//		const char * p = "abaabbabaab";
//		Size_t n = strlen(T);  Size_t m = strlen(p);
//		//********way 1***********************//
//		int i =0, j = 0;
//		while (i < n&&j < m) 
//		{
//			if (p[j] == T[i]) 
//			{
//				i++, j++; 
//			}
//			else
//			{
//				i = i - (j - 1); j = 0;   //ʧ�ܣ�i���˵���һ��ƥ���ַ���j��0
//			}
//
//		 }
//		m = i - j;
//		cout << m;
//		cin.get(); cin.get();
//		return 0;
//}

//
//---------------------------------------��ƥ��------------------------------------//
//
//typedef  int Size_t;
//int main()
//{
//	char a = 's';  //�ַ������ַ������б�������
//	char an[10] = "beat";
//	const char *p= "abaabbabaab" ; //�ַ���ʵ���ϱ�ʾ���ǵ�ַ����˽���ַ����ָ��//�ַ�������ֵ�ǳ��������ʹ��const
//	Size_t  m = strlen(p),j=0;
//	int *N = new int[m];
//	int t = N[0] = -1;
//	while (j < m - 1)
//		if (0 > t || p[j] == p[t])
//			N[++j] = ++t;
//		else//
//			t = N[t];
//	for (int i = 0; i <= m; i++)
//		cout << N[i] << endl;
//	cin.get(); cin.get();
//	return 0;
//}
//------------------------------------------------
//int main()
//{
//	const char *B= "abaabbabaab";
//	Size_t  m = strlen(B);
//    int *F = new int[m];
//	int t = F[0] = -1;
//	for (int i = 1; i < m; i++)
//	{
//		int j = F[i - 1];
//		while ((B[j + 1] != B[i]) && (j >= 0))
//			j = F[j];
//		if (B[j + 1] == B[i])
//			F[i] = j + 1;
//		else
//			F[i] = -1;
//	}
//		for (int i = 0; i <m; i++)
//		    cout << F[i] << endl;
//	cin.get(); cin.get();
//	return 0;
//}


