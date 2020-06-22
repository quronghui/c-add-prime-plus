//
// Created by quronghui on 2020/5/29.
// 题目2：增加加法运算符，将Time类转换为重载的加法运算符；这样可以在标识符中使用字母等其他字符；
//      将sum改为operator；
//

#ifndef INC_11_CLASSUSING_MYTIME1_H
#define INC_11_CLASSUSING_MYTIME1_H

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

    // operator 运算符重载的说明：使得class对象可以直接进行相加减；
    Time operator+(const Time & t) const ;
    Time operator-(const Time & t) const ;
    Time operator*(double n) const ;
    void Show() const ;
};

#endif //INC_11_CLASSUSING_MYTIME1_H
