//
// Created by quronghui on 2020/6/2.
// 题目3：友元的使用，由于私有数据的调用只能通过公有函数进行调用，但是有时候限制太过严格；
// （1）友元和类方法只是表达类接口的两种不同机制
//（2）友元的定义方式：friend Time operator*(double m, const Time &t);
//
#include "mytime3.h"

Time::Time(){       // 对其进行默认初始化
    hours = minutes = 0;
}

Time::Time(int h, int m) {  // 对其进行赋值；
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;   // 对private数据进行操作，需要通过公有函数
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

// 将第二个time对象作为参数，并返回一个time对象
Time Time::operator+(const Time &t) const { // 注意参数是引用，但是返回类型不是引用；
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time &t) const {
    Time diff;      //定义的一个diff对象；
    int tol1, tol2;
    tol1 = t.minutes + 60 * t.hours;
    tol2 = minutes + 60 * hours;
    diff.minutes = (tol2 - tol1) % 60;
    diff.hours = (tol2 - tol1) / 60;
    return diff;
}

Time Time::operator*(double n) const {
    Time result;
    long totalminutes = hours * n *60 + minutes * n;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

// 友元函数
    std::ostream & operator<<(std::ostream & os, const Time & t){
    os << t.hours << "hours, " << t.minutes << " minutes";
    return os;
}




