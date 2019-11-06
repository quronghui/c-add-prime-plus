//
// Created by quronghui on 2019/11/2.
//
// 题目四：基于while循环实现input
#include <iostream>
using namespace std;

// cin 输入字符的时候：忽略空格和换行符；
void Cin()
{
    char ch;
    int count = 0;
    cin >> ch;  // 判断第一个字符是否为#
    while (ch != '#'){
        count << ch;
        ++count;    // 进行字符计数；忽略空格和换行；
        cin >> ch;  // 得到下一个字符
    }
    cout << endl << count << " characters read.\n";
}

// cin.get()：检查每个字符，包括空格、制表符和换行符；
// cin.get(ch)：函数重载的OOP特性，输入一个参数
// cin.get(name, ArSize)：输入一个数组名和大小
void cin_get()
{
    char ch;
    int count = 0;
    cin.get(ch);    // cin.get()是一个函数，所以ch此时传输的是地址
    while(ch != '#'){
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read.\n";
}

// cin.eof / cin.fail 检测文件末尾标志EOF
// 对于EOF的标志：linux下是 ctrl+d
void cin_eof()
{
    char ch;
    int count;
    cin.get(ch);
    while (cin.fail() == false){    // cin.fail()==EOF，则返回true
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read.\n";
}
int main()
{
//    Cin();
//    cin_get();
    cin_eof();
    return 0;
}

