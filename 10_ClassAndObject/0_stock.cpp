//
// Created by quronghui on 2019/11/28.
//
// 题目：实现股票stock的公共函数的定义
// 公共函数部分：实现程序和私有数据访问的接口；
// 包含数据的初始化，计算，更新显示
#include <iostream>
#include "0_stock.h"

// 该公司第一次拥有的股票 --- 数据的初始化
void Stock::acquire(const std::string &co, long n, double pr) {
    company = co;   // 访问私有数据
    if(n < 0){
        std::cout << "Number of shares can't be negative; "
                    << company << "shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;     // 买入多少股
    share_val = pr;     // 每股的价格
    set_tot();          // 总价值的计算
}

// 该公司决定是否购买股票 --- 数据的计算
void Stock::buy(long num, double price) {
    if(num < 0)
        std::cout << "Number of shares purchased can't be negative."
                  << "Transaction is aborted.\n";
    else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if(num < 0)
        cout << "Number of shares purchased can't be negative."
        << "Transaction is aborted.\n";
    else if(num > shares)
        cout << "You can't sell more than you have!";
    else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}

// 数据的更新显示；
void Stock::update(double price) {
    share_val = price;
    set_tot();
}

// 数据的显示：进行一定的格式化
void Stock::show() {
    using std::cout;
    using std::ios_base;

    // set format to #.###
    ios_base::fmtflags orig =
            cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company" << company
            << " Shares: " << shares << '\n';

    cout << " Share Price: $" << share_val;
    cout.precision(2);

    cout << " Total Worth: $" << total_val << '\n';

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
