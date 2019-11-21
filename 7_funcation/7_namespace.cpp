//
// Created by quronghui on 2019/11/19.
//
// 题目7：namespace关键字（名称空间），定义变量
#include <iostream>

// （1）namespace 定义的名称空间
namespace Jack{
    double pail;    // variable declaration
    void fetch();   // function prototype 函数的声明
    int pal;        // variable declaration
    struct Well { };    // struct declaration
}
namespace Jill{
    double bucket(double n) { } // 函数的定义
    double fetch;
    int pal;
    struct Hill { };
}

// （2）using 声明和using编译

// using声明：using + 限定的名称组成；using声明作用--直接使用fetch替换Jill::fetch；
// using声明：使得一个名称可用；
using Jill::fetch;

// using编译：using + namespace关键字 + 限定的名字组成
// Jack里面所有的变量在使用的时候，不需要限定符Jack::， 直接就可以使用；
using namespace Jack;


int main()
{
    // (1)namespace 名称空间的使用
    Jack::pail = 12.34; // 使用Jack名称空间中的变量pail;
    Jill::Hill mole;    // 定义一个Jill的结构体
    Jack::fetch();      // 使用Jack的函数fetch;

    return 0;
}