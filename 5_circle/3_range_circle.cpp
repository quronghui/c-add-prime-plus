//
// Created by quronghui on 2019/11/2.
//
// 题目三：基于范围的循环for，可以实现对数组元素的操作
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
    vector<int > a1 = {1, 2, 3, 4};
    array<int, 4> a2 = {5, 6, 7, 8};
    for(int x : a1)     // (1)对数组元素的输出
        cout << x << " ";   // 1 2 3 4
    cout << endl;
    for(int &x :a1) {       // (2)对数组元素的操作
        x = x * 2;
        cout << x << " ";   // 2 4 6 8
    }
    return 0;
}
