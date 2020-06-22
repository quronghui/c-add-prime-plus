//
// Created by quronghui on 2020/5/28.
// 题目1：一次运算符重载，进行时间的加法，包括进位
//
#include <iostream>
#include "mytime0.h"

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

Time Time::Sum(const Time &t) const {   // 注意参数是引用，但是返回类型不是引用；
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const{
    std::cout << hours << "hours, " << minutes << "minutes";
}
