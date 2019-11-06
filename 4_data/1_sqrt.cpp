//
// Created by quronghui on 2019/10/17.
//
// 题目一：解释c++中的数学函数的使用，头文件的包括方式。
#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
    double area;
    cout << "Enter the floor area: ";
    cin >> area;
    double side;
    side = sqrt(area);
    // count对象是可以通过重定向符 << 进行语句的连接
    cout << "Thar's the equivalent of a square: " << side
        << " feet to the side." << endl;
    cout << "How fascinating!" << endl;

    // sizeof 的使用
    cout << sizeof(int) << endl;
    return 0;
}

