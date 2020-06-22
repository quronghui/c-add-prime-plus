//
// Created by quronghui on 2020/6/2.
//
// 题目3：友元的使用，由于私有数据的调用只能通过公有函数进行调用，但是有时候限制太过严格；
// （1）友元和类方法只是表达类接口的两种不同机制
//（2）友元的定义方式：friend Time operator*(double m, const Time &t);
// (3)对于成员函数public来说，一个操作数通过this指针隐式传递，另一个操作数作为函数参数显示传递；
// 友元函数（非成员函数），两个操作数都可以作为参数进行传递。

#include <iostream>
#include "mytime3.h"

int main(){
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and Tosca:\n ";
    cout << aida << "; " << tosca << endl;
    temp  = aida + tosca;   // operator+()
    cout << "Aida + Tosca: " << temp << endl;

    // 未使用友元函数的时候，左边是对象，右边是乘的数字
    temp  = aida * 1.17;    // operator*()
    cout << "Aida * 1.17: " << temp << endl;

    // 使用友元函数后，左边可以是数字了
    cout << "10.0 * Tosca:" << 10.0 * tosca << endl;

}

