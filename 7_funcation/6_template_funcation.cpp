//
// Created by quronghui on 2019/11/14.
//
// 题目六：函数模板的使用？
// 使用条件：同一种算法用于不同类型的函数时，使用模板；
#include <iostream>
using namespace std;

// (1)函数模板的声明：是一个整体；
template <typename AnyType>     // or <class AnyType>
void Swap(AnyType &a, AnyType &b);

int main()
{
    // 整数的交换，使用template函数模板
    int i = 20;
    int j = 30;
    cout << "i, j = " << i << ", " << j << endl;
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << endl;

    // double精度的数交换，使用template函数模板
    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << endl;
    Swap(x,y);
    cout << "Now x, y = " << x << ", " << y << endl;

    return 0;
}

// 函数模板的定义：是一个整体，需要一起写
template <typename AnyType>
void Swap(AnyType &a, AnyType &b)
{
    AnyType temp;
    temp = a;
    a = b;
    b = temp;
}


