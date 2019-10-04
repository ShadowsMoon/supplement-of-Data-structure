
#include<vector>
#include<iostream>

//--------------------------------------------------------字符串类----------------------------------------------//
// 空格替换  (考虑string方式）
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
//	int indexori = orilen-1;             //注意这里应该不减一，因为减一后，直接指向最后一个字符，但'\0'没有被复制到最后，这样会导致会多出现一个空格。
//	int indexnew = orilen + newlen * 2-1 ;
//	if (indexnew > length)
//		return;
//	//从后往前检测
//	while (indexori >= 0 && indexnew > indexori)  //注意这里是，因为0的时候也代表正确索引
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


//------------------链表：从尾到头打印----------------//
// 1,使用栈， 2，使用递归（若长度很长，可能会导致函数调用栈溢出）
//#include<stack>
//
//struct Listnode {
//	char val;
//	Listnode *next;
//};
//std::vector<char> printListver(Listnode *phead)
//{
//	std::stack<char> midlist;
//	std::vector<char> fin;
//	if (phead == nullptr)
//		return fin;
//	while (phead)
//	{
//		midlist.push(phead->val);
//		phead = phead->next;
//	}
//	int listlen = midlist.size();
//	for (int i = 0; i < listlen; i++)
//	{
//		std::cout << midlist.top() << std::endl;
//		fin.push_back( midlist.top());                  //if using fin[i] would be wrong!!
//		midlist.pop();
//	}
//	return fin;
//}
//
//int main()
//{
//	int len;
//	std::cin >> len;
//	Listnode *phead = nullptr;
//	Listnode *pre = nullptr;
//	for (int i = 0; i < len; i++)
//	{
//		char a;
//		std::cin >> a;
//		Listnode *pnew = new Listnode;
//		pnew->val = a;
//		pnew->next = nullptr;
//		if (phead == nullptr)
//		{
//			phead = pnew; pre = pnew;
//		}
//		else
//		{
//			Listnode *pnode = pnew;
//			pre->next = pnode;
//			pre = pnode;
//		}	
//	}
//	//while (phead)
//	//{
//	//	std::cout << phead->val <<std::endl;
//	//	phead = phead->next;
//	//}
//	std::vector<char>a=printListver(phead);
//	std::cin.get(); std::cin.get();
//}