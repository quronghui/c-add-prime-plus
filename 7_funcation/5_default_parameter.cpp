//
// Created by quronghui on 2019/11/13.
//
// 题目五：c++中的默认参数的使用？
// （1）目的：有参数传递时，覆盖默认值；灭有参数传递时，使用默认值；
// （2）规则1：带参数列表的函数，必须从右向左添加默认值；int harpo（int n, int m=4, int j=5）
// （3）规则2：实参传递的函数，实参按照从左到右依次赋值给形参，不能跳过中间的参数；
// 问题：不能使用默认参数的函数调用？

#include <iostream>
using namespace std;

const int ArSize = 80;
char *left(const char *str, int n=1);   // 带参数的列表，从右向左添加默认值

int main()
{
    char sample[ArSize];
    cout << "Enter a string: \n";
    cin.get(sample, ArSize);   // cin.get 输入一个字符串
    char *ps = left(sample, 10);
    cout << ps << endl;
    delete [] ps;               // 数组空间的删除

    ps = left(sample);  // 使用默认参数
    cout << ps << endl;
    delete [] ps;
    return 0;
}

// 函数返回一个新的指针指向一个新的字符串，字符串的长度由默认值确定
char *left(const char *str, int n)
{
    if(n < 0)
        n=0;
    char *p = new char[n+1];    // 数组空间的定义
    int i;
    for(i=0; i<n && str[i]; i++)    // 防止n的值超过字符串长度；
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';  // set rest of string to '\0'
    return p;
}

