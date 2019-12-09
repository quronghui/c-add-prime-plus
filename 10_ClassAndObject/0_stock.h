//
// Created by quronghui on 2019/11/28.
//
// 头文件：定义类的声明，包含私有数据和公有函数
#ifndef INC_10_CLASSANDOBJECT_0_STOCK_H
#define INC_10_CLASSANDOBJECT_0_STOCK_H

#include <string>

class Stock
{
    // 数据成员：定义为私有的
private:
    std::string company;    //代表公司
    long shares;            // 买入多少股
    double share_val;       // 每股的价格
    double total_val;       // 股票总共的价格
    // 放在私有数据这里，相当于内联函数；
    void set_tot()  { total_val = shares * share_val; }

    //函数接口：定义为公共成员函数；包含数据的初始化，计算，更新显示
public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();

};

#endif //INC_10_CLASSANDOBJECT_0_STOCK_H
