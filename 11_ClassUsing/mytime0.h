//
// Created by quronghui on 2020/5/28.
// 题目一：一个运算符重载的例子
//

#ifndef INC_11_CLASSUSING_MYTIME0_H
#define INC_11_CLASSUSING_MYTIME0_H

class Time{
private:
    int hours;
    int minutes;
public:
    Time();     // 默认构造函数
    Time(int h, int m = 0);     // 初始化；
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const ;
    void Show() const ;
};

#endif //INC_11_CLASSUSING_MYTIME0_H
