//
// Created by quronghui on 2019/10/25.
//
// 题目五：结构体--数据库的建立
#include <iostream>
using namespace std;

// 通过结构体：实现多个成员的管理
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main()
{
    // (1)struct inflatable 结构体的定义：可以省略struct
    inflatable guest = {"hello", 1.88, 3.33};
    cout << "guest: " << guest.name << " " << guest.volume << " " << guest.price << endl;
    // (2)结构体的复制
    inflatable  pre = guest;
    cout << "pre: " << pre.name << " " << pre.volume << " " << pre.price << endl;
    // (3) 结构数组： 定义和初始化
    inflatable array[2] = {
            {"Bambi", 0.5, 21.99},
            {"God", 200, 55.1}
    };
    cout << array[0].volume << " and " << array[1].price << endl;
    return 0;
}

