//
// Created by quronghui on 2019/11/12.
//
// 题目三：内联函数的定义和声明；
// c++中inline与c中define的区别
#include <iostream>
using namespace std;

// 定义和声明：都需要使用inline；
inline double square(double x) { return x*x; }  // 函数的定义形式；

int main()
{
    double a, b;
    double c = 13.0;

    a = square(5.0);        // （1）与#define功能一样
    b = square(4.5 + 7.5);  // （2）a = 25, b = 144；#define 每一个变量的先加（），
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c;
    cout << ", c squared = :" << square(c++) << endl;   //(3）c = 13, c squared = :169；inline 通过参数传递： c就只加一次
    cout << "Now c is: " << c << endl;      // Now c is: 14；如果是define，c就会加两次；
    return 0;
}
