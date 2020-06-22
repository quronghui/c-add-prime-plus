//
// Created by quronghui on 2020/5/29.
// 题目1：对time类中计算时间总和的部分进行测试。
//
#include <iostream>
#include "mytime0.h"

int main(){
    using std::cout;
    using std::endl;    // 和using namespace std相比，对内存的占用更加经济

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = "; // 调用默认的构造函数进行初始化，结果hours=0；
    planning.Show();
    cout << endl;

    cout << "coding time = ";   // coding通过自己进行赋值；
    coding.Show();
    cout << endl;

    cout << "coding time = ";   // fixing通过自己进行赋值；
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing); //对他们进行求和
    cout << "coding Sum(fixing) = ";
    total.Show();
    cout << endl;

    return 0;
}



