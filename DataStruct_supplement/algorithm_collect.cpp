//---���ͱ����չʾ�����-----//


//----------------------------��1-----------------------------------------------------------//
//���ַ���string��ʼ����ƥ���Ӵ�sub������ƥ�䵽���ַ�������
//sub���������'?'��ʾ����ƥ��һ��������'\0'����������ַ���
//���sub�����Ҳ���ƥ����ַ�����˵����������ƥ�䡣
//���������ƥ�䣬����ƥ�䵽���ַ�����������ж���ƥ�䷽ʽ������ƥ���ַ������ٵ��Ǹ��������������ƥ�䣬���� - 1
//
//#include<vector>
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
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
