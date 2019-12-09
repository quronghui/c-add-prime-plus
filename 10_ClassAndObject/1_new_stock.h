//
// Created by quronghui on 2019/11/29.

// 题目：增加了构造函数--为了对隐藏的数据成员进行初始化；
// 增加了析构函数--对new创建的对象进行清除
// 增加一个 this指针，访问两个对象中的数据成员，返回其中的最大值
#ifndef INC_10_CLASSANDOBJECT_1_NEW_STOCK_H
#define INC_10_CLASSANDOBJECT_1_NEW_STOCK_H

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
    Stock();    // 默认构造函数
    Stock(const std::string &co, long n = 0, double pr = 0.0);  // 使用默认参数定义构造函数
    ~Stock();   // 析构函数
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const ;
    // 增加一个 this指针，访问两个对象中的数据成员，返回其中的最大值
    const Stock & topval(const Stock & s) const ;
};

#endif //INC_10_CLASSANDOBJECT_1_NEW_STOCK_H
