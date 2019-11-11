//
// Created by quronghui on 2019/11/11.
//
// 题目二：递归函数的实现；
#include <iostream>
using namespace std;

// （1）只包含一个递归：先从头部递归到尾部，在从尾部依次返回；
// 每次输出表示一层递归
void countdown(int n)
{
    cout << "Counting down ..." << n << endl;
    if(n > 0)
        countdown(n-1);
    cout << n << ": Kaboom!\n";
}

int main()
{
    countdown(4);
    return 0;
}
