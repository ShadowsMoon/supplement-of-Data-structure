
#include<vector>
#include<iostream>

//--------------------------------------------------------�ַ�����----------------------------------------------//
// �ո��滻  (����string��ʽ��
//void replaceSpace(char *str, int length)
//{
//	if (str == nullptr&&length < 0)
//		return;
//	int orilen = 0; int newlen = 0;
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		++orilen;
//		if (str[i] == ' ')
//			++newlen;
//		++i;
//	}
//	int indexori = orilen-1;             //ע������Ӧ�ò���һ����Ϊ��һ��ֱ��ָ�����һ���ַ�����'\0'û�б����Ƶ���������ᵼ�»�����һ���ո�
//	int indexnew = orilen + newlen * 2-1 ;
//	if (indexnew > length)
//		return;
//	//�Ӻ���ǰ���
//	while (indexori >= 0 && indexnew > indexori)  //ע�������ǣ���Ϊ0��ʱ��Ҳ������ȷ����
//	{
//		if (str[indexori] == ' ')
//		{
//			str[indexnew--] = '0';
//			str[indexnew--] = '2';
//			str[indexnew--] = '%';
//		}
//		else
//		{
//			str[indexnew--] = str[indexori];
//		}
//		indexori--;
//	}
//}
//
//
//int main()
//{
//	char str1[20] = " helloworld";
//	int len = 20;
//	replaceSpace(str1, len);
//	std::cout << str1 <<std::endl;
//	std::cin.get(); std:: cin.get();
//}


