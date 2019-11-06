//
// Created by quronghui on 2019/10/21.
//
// 题目二：通过cout 输出八/十/十六进制；
#include <iostream>
using namespace std;    // 省略using后，需要使用std::cout

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << endl;
    cout << hex;    //十六进制
    cout << "waist = " << waist << endl;
    cout << oct;    //十进制
    cout << "inseam = " <<inseam << endl;
    return 0;
}
// chest = 42
// waist = 2a
// inseam = 52

