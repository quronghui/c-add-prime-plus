//
// Created by quronghui on 2019/10/25.
//
// 题目四：C++中的字符串和C的字符串对比；
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// (1)string 类型的定义和复制
// 数组不能直接复制，但是字符串可以直接复制
// 字符串的长度 str1.size()
void string_define_and_copy()
{
    char charr1[20];
    char charr2[20] = "hello";
    string str1;
    string str2 = "world";  // 无需定义空间大小

    // 字符串的复制
    strcpy(charr1, charr2);
    cout << "charr1 is: " << charr1 << endl;
    str1 = str2;
    cout << "str1 is: " << str1 << endl;
    // 字符串的链接，字符串长度计算
    strcat(charr1, charr2);
    cout << "charr1 is: " << charr1 << " size = " << strlen(charr1)<< endl;
    str1 += str2;
    cout << "str1 is: " << str1  << " and size = " << str1.size() << endl;
}

// (2)string类型的字符串：读入一行
void string_Input()
{
    char charr1[20];
    string str1;
    cin.getline(charr1, 20);
    cout << "charr1 is: " << charr1  << " and size = " << strlen(charr1) << endl;
    getline(cin, str1); // 读入一行
    cout << "str1 is: " << str1 << " and size = " << str1.size() << endl;
}


int main()
{
//    string_define_and_copy();
    string_Input();
}

