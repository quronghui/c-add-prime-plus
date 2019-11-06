//
// Created by quronghui on 2019/10/25.
//
// 题目六：Union实现同种id两种属性的共存
#include <iostream>
using  namespace std;

struct widget {
    char name[20];
    int type;
    union id{
        long id_num;
        char id_char[20];
    } id_val;
};
int main()
{
    widget prize;
    prize.type = 1;
    if(prize.type == 1) {
        cout << "Enter id is long type : ";
        cin >> prize.id_val.id_num;
    }
    else {
        cout << "Enter id is char: ";
        cin >> prize.id_val.id_char;
    }

    return 0;
}

