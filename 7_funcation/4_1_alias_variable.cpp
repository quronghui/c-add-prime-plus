//
// Created by quronghui on 2019/11/12.
//
// 题目四：变量的引用--相当于一个别名；两个变量指向相同的内存单元和地址
#include <iostream>
using namespace std;

int main()
{
    // (1)变量引用的定义
    int rat = 50;
    int &rodent = rat;  // rodent的类型是int &, 即rodent是指向int型的引用
    cout << "rodent = " << rodent << endl;
    rodent++;
    cout << "rodent++, rat = " << rat << endl;

    // (2)引用和指针的关系：引用是const型的常指针；
    int * const pointer = &rat;
    cout << "*pointer = " << *pointer << endl;

    return 0;
}

// （3）引用和函数
void alias_function()
{
    void swap_alias(int &a, int &b);    // 按照引用传递：标志为int &；
    void swap_pointer(int *p, int *q);  //按照指针传递：标志为int *；
    void swap_value(int c, int d);      // 按照值传递：改变不了原来的值；
}

