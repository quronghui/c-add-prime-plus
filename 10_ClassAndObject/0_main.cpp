// 题目一：学习类和对象的定义和使用
// 解决的问题：股票Stock的买入和卖出

#include <iostream>
#include "0_stock.h"

int main() {
    Stock hui;  // 每个对象：数据各自存储；所有对象的公共成员函数：共享存储空间；
    hui.acquire("alibaba", 20, 12.5);
    hui.show();

    hui.buy(15, 18.125);
    hui.show();

    hui.sell(400, 20);
    hui.show();

    hui.buy(1000, 40);
    hui.show();

    hui.sell(1000, 10);
    hui.show();
    return 0;
}