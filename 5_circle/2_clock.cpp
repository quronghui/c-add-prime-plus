//
// Created by quronghui on 2019/11/2.
//
// 题目二：使用clock进行延时
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Enter the delay times, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // CLOCKS_PER_SEC 机器时间
    cout << "starting\a\n";     // \a是 转义字符 007，响铃符 BEL
    clock_t start = clock();    // 系统起始的时间
    while(clock() - start < delay)
        ;
    cout << "done \a\n";
    return 0;
}
