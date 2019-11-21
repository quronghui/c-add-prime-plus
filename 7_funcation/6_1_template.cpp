//
// Created by quronghui on 2019/11/15.
//
// 题目6_1：模板函数转化为实例化和具体化的函数定义
#include <iostream>
using namespace std;

// template模板函数的声明
template <typename AnyType>
void Swap(AnyType &a, AnyType &b);

// 显示实例化：explicit instantiation
// 函数参数的类型确定了
template void Swap<char>(char &a, char &b);

// 隐式实例化：

// 显示具体化：explicit specialization;
// 两个表示方式
template <> void Swap<int >(int &a, int &b);
template <> void Swap(int &a, int &b);

int main()
{
    return 0;
}