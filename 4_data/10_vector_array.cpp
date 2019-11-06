//
// Created by quronghui on 2019/10/31.
//
// 题目十：数组，vector and array

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    double a1[4] = {1.2, 2.4, 3.6, 4.8};    //（1）c/c++通用
    vector<double > a2(4);               // (2)C++98 STL
    a2[0] = 1.0/2.0; a2[1] = 1.0/3.0;       // vector的初始化和数组一样
    a2[2] = 1.0/4.0; a2[3] = 1.0/5.0;

    array<double , 4> a3 = {3.14, 2.72, 1.62, 1.41}; // (3) c++11允许的
    array<double , 4> a4;
    a4 = a3;         // 同一对象的array，允许直接复制

    return 0;
}


//    // (1)vector:数组的动态分配
//    vector<int> vi;
//    int num;
//    cin >> num;
//    vector<int> vd[num];  // vd 是一个对象，num是数组的长度，可以是变量
//
//    // (2)array：数组的分配
//    array<int, 5> ai;
//    array<double, 4> ad;