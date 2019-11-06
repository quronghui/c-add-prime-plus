//
// Created by quronghui on 2019/10/30.
//
// 题目7：enum枚举类型的使用描述
#include <iostream>
using namespace std;

// Enum 枚举类型的定义和声明
void Enum()
{
    // spectrum：枚举名；red...符号常量：对应0,1,2,3...整数
    enum spectrum{red, orange, yellow, green, blue, violet, indigo, ultraviolet };
    // 符号常量可以转化为整形，但是反之不成立
    spectrum band;  // 声明这种类型的变量band
    band = blue;    // 正确的赋值
    int value = blue;   // 符号常量可以转化为整形

    band = 2000;    // 错误：整形不能转化为符号常量
    band = red + orange; // 转换为0 + 1
}
// Enum 枚举类型的初始化
void Enum_Init()
{
    // 枚举类型的取值范围有要求
    enum bits {one = 1, two = 2, four = 4}; // 显示初始化
    bits myflags;
    myflags = bits(3);  // 成立的
    // 未初始化的第一个符号常量：默认为0；third = 101;
    enum bigstep{first, second = 100, third};
    // 符号常量可以同时表示一个值: zero=null=0;ze_one=1
    enum value{zero, null = 0, ze_one, ze_two=1};
}

int main(void)
{

    return 0;
}