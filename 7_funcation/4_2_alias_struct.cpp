//
// Created by quronghui on 2019/11/12.
//
// 题目4_2: 将引用用于结构；有些类似于结构指针的用法；
#include <iostream>
#include <string>
using namespace std;

// 函数声明
void display(const free_throws &ft);    // const 型结构：不能修改里面的值
void set_c(free_throws &ft);             // 可以修改结构里面的值
// struct函数，返回值是结构
free_throws & accumulate(free_throws &target, const free_throws &source);


// 结构定义
struct free_throws{
    string name;
    int made;
    int attempts;
    float percent;
};

int main()
{
    // partial initialization:未定义的变量值为0
    free_throws one = {"a", 1, 2};
    free_throws two = {"b", 3, 4};
    free_throws three = {"c", 5, 6};
    free_throws four = {"d", 7, 8};
    free_throws five = {"e", 9, 10};
    free_throws team = {"f", 11, 12};

    // no init
    free_throws dup;

    return 0;
}

// display function
void display(const free_throws &ft)
{
    cout << "Name: "<< ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << endl;
}

// 置位
void set_c(free_throws &ft)
{
    if(ft.attempts != 0)
        ft.percent = 100.0f * float(ft.made)/float(ft.attempts);
    else
        ft.percent = 0;
}

// 结构函数: 返回值是free_throws类型
free_throws & accumulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_c(target);
    return target;
}