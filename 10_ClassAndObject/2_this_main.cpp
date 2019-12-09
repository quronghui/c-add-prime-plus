//
// Created by quronghui on 2019/12/9.
//
// 题目三：this指针结合对象数组的一个使用实例
#include "1_new_stock.h"
#include <iostream>

const int STKS = 4; // 定义字符常量

int main()
{
    // 创建一个对象数组并进行初始化;一个逗号初始化一个对象
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0), // 调用默认参数初始化
        Stock("Boffo", 200, 2.0),
        Stock("Monolithic", 130, 3.25),
        Stock("Fleep", 60,6.5)
    };
    std::cout << "Stock holding:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();
    // 使用指针
    const Stock *top = &stocks[0];
    for (st = 0; st < STKS; ++st) {
        top = &top->topval(stocks[st]);
    }
    // 新的top指针的值
    std::cout << "\nMost valuable holding:\n";

    top->show();    // 这里便是this指针使用的地方：需要在show函数定义处加上const

    return 0;
}
