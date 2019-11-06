//
// Created by quronghui on 2019/10/31.
//
// 题目九：数组，指针，结构体同时结合，实现对结构体的访问；
#include <iostream>
using namespace std;
struct all{
    int year;
};
int main()
{
    all s01, s02, s03;  // c++定义结构体的时候可以省略struct
    s01.year = 1998;    // （1）使用句点访问；
    all* pa = &s02;     // （2）使用指针访问
    pa->year = 1999;
    all trio[3];        // （3）使用数组访问；
    trio[0].year = 2003;
    cout << "trio.year = " << trio->year << endl;   // 只代表首个数组元素吗？
    // (4)使用的是指针数组进行访问
    const all *arp[3] = {&s01, &s02, &s03}; // arp是一个常指针数组，每个数组元素都是常指针
    cout << "arp[1].year = " << arp[1]->year << endl;
    // (5) 指向指针的指针进行访问；
    const all **ppa = arp;
    // （6）使用auto进行推测ppb的类型
    auto ppb   = arp;
    cout << "(*ppa)->year = " << (*ppa)->year << endl;
    cout << "(*ppb)->year = " << (*(ppb + 1))->year << endl;
    return 0;
}
