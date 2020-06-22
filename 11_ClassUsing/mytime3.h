//
// Created by quronghui on 2020/6/2.
// 题目3：友元的使用，由于私有数据的调用只能通过公有函数进行调用，但是有时候限制太过严格；
// （1）友元和类方法只是表达类接口的两种不同机制
//（2）友元的定义方式：friend Time operator*(double m, const Time &t);
//

#ifndef INC_11_CLASSUSING_MYTIME3_H
#define INC_11_CLASSUSING_MYTIME3_H

#include <iostream>

class Time{
private:
    int hours;
    int minutes;
public:
    Time(); // 默认构造函数；
    Time(int n, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);

    // operator 运算符重载的说明：使得class对象可以直接进行相加减；
    Time operator+(const Time & t) const ;
    Time operator-(const Time & t) const ;
    Time operator*(double n) const ;

    // 友元函数的构造；
    friend Time operator*(double m, const Time &t)
    { return t*m;}  // 内联函数的定义；
    friend std::ostream & operator<<(std::ostream & os, const Time & t); //提供了ostream的支持

};

#endif //INC_11_CLASSUSING_MYTIME3_H
