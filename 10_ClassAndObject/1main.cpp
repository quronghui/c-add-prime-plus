//
// Created by quronghui on 2019/11/29.
//
// 题目二：用户文件，调用Stock函数的接口；
#include <iostream>
#include "1_new_stock.h"

int main()
{
    {
        using std::cout;    // 相当于一个声明
        cout << "Using constructors to create new objects\n" ;
        // 类定义的对象：显示的初始化了
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        cout << std::endl;
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
        stock2.show();
        cout << std::endl;

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout<< "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();
        cout << std::endl;

        cout << "Using a constructor to reset an object\n";
        stock1 = Stock("Nifty Foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }   // 加上{} 原因：析构函数是等自动变量在程序退出其定义所属代码块时消失；
//   // 如果不加{}，当main运行完之后窗口便会关闭，便看不到析构函数的打印
    return 0;
}
