//
// Created by quronghui on 2020/5/29.
// 题目2：增加加、减、乘运算符，将Time类转换为重载的加法运算符；这样可以在标识符中使用字母等其他字符；
//      total = coding + fixing;    // 将该方法命名为operator+()后，可以直接使用符号运算。
// 题目的意思：对象是不能直接想加减的，如果要进行的话需要使用operator+()成员函数；
//
#include <iostream>
#include "mytime1.h"

int main(){
    using std::cout;
    using std::endl;    // 和using namespace std相比，对内存的占用更加经济

    Time planning;
    Time coding(4, 35);
    Time fixing(2, 47);
    Time total;
    Time diff;  // 求差；
    Time adjusted;  // 求乘积；

    cout << "planning time = "; // 调用默认的构造函数进行初始化，结果hours=0；
    planning.Show();
    cout << endl;

    cout << "coding time = ";   // coding通过自己进行赋值；
    coding.Show();
    cout << endl;

    cout << "fixing time = ";   // fixing通过自己进行赋值；
    fixing.Show();
    cout << endl;

//    total = coding.operator+(fixing); //对他们进行求和
    total = coding + fixing;    // 将该方法命名为operator+()后，可以直接使用符号运算。
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

//    求他们的差
//    diff = coding.operator-(fixing);
    diff = coding - fixing;
    cout << "coding - fixing = ";
    diff.Show();
    cout << endl;

//    求乘积;
    adjusted = total * 1.5;
    cout << "adjusted work time =  ";
    adjusted.Show();
    cout << endl;

    return 0;
}





