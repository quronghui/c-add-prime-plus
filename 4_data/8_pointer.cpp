//
// Created by quronghui on 2019/10/30.
//
// 题目8：指针使用的介绍
#include <iostream>
using namespace std;

// 指针
void pointer()
{
    // 指针和数字的赋值
    int *pt;
    pt = (int *)0xB8000000; // 将十六进制整数强制转化为int*的指针

    // new 关键字：动态分配typeName类型空间
    int * value = new int;
    *value = 10;
    delete value;    // delete和new成对出现
    // new 关键字：动态分配数组空间
    int * array = new int[10];
    delete [] array;    // delete和new成对出现
}

int main()
{
    return 0;
}


