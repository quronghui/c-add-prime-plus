//
// Created by quronghui on 2019/10/31.
//
// 题目一：通过设置cout.setf();实现false和true的输出
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout.setf(ios_base::boolalpha); // a newer c++ feature
    cout << "The expression x <= 10: ";
    cout << (x <= 10) << endl;
    cout << "The expression x > 10: ";
    cout << (x > 10) << endl;
    return 0;
}
