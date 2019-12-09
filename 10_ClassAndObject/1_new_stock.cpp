//
// Created by quronghui on 2019/11/29.
//
// 题目二：添加构造函数和析构函数
// 增加了构造函数--为了对隐藏的数据成员进行初始化；
// 增加了析构函数--对new创建的对象进行清除
// 增加一个 this指针，访问两个对象中的数据成员，返回其中的最大值

#include <iostream>
#include "1_new_stock.h"

// 默认构造函数,当用户没有显示初始化时，就调用默认构造函数
Stock::Stock() {
    std::cout << "Default constructor called.\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
// 使用默认参数的构造函数
Stock::Stock(const std::string &co, long n, double pr){
    std::cout << "Constructor using" << co << "called.\n";
    company = co;
    if( n < 0){
        std::cout << "Number of shares can't be negative;"
                    << company << "shares set to 0.\n";
        shares = 0;
    } else
        shares = n;
    share_val = pr;
    set_tot();
}

// 析构函数的定义：class destructor
Stock::~Stock() {
    std::cout << "Bye, " << company << "!\n";
}

// Other methods
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
void Stock::show() const {
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

// this指针，实现两个对象中数据成员的访问
const Stock & Stock::topval(const Stock &s) const {
    if(s.total_val > total_val)
        return s;
    else
        return *this;   //*this 表示第一个对象的地址
}
