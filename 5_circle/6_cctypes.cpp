//
// Created by quronghui on 2019/11/4.
//
// 题目六：cctypes 继承了字符函数库，实现输入字符的判断
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    int whitespace = 0;
    int digital = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);    // 函数重载，将输入的ch进行取地址传递
    while(ch != '@'){
        if(isalpha(ch))
            chars++;
        else if(isspace(ch))
            whitespace++;
        else if(isdigit(ch))
            digital++;
        else if(ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << "letters,"
        << whitespace << " whitespace,"
        << digital << " digital,"
        << punct << " punct,"
        << others << " others.\n";
    return 0;
}

