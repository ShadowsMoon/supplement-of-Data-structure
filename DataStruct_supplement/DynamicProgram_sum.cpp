//动态规划(原则)
//是否求问题的最优解？
//是否能把大问题分解为小问题？
//整体问题的最优解依赖于各个子问题的最优解？
//子问题之间是否有重合？
//为了避免重复子问题求解？从上往下分析问题，从下往上求解问题

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
using std::set;
using std::to_string;