//
// Created by quronghui on 2019/11/11.
//
// 题目一：函数和array数组对象的联合使用
#include <iostream>
#include <array>
#include <string>
using namespace std;

// constant data
const int Seasons = 4;
const array<string, Seasons> Sname =    // 通过string数组，代替char的二维数组
        {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(array<double , Seasons> *pa);
void show(array<double , Seasons> da);

int main()
{
    // 填充字符串数组，以及显示字符串数组
    array<double ,Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

// 填充数据:数组指针
void fill(array<double , Seasons> *pa){
    for(int i=0; i<Seasons; i++){
        cout <<"Enter" << Sname[i] << " expenses:";
        cin >> (*pa)[i];
    }
}

// 显示数据：array的数组
void show(array<double , Seasons> da){
    double total = 0.0;
    cout << "\nExpenses\n";
    for(int i=0; i<Seasons; i++){
        cout << Sname[i] << ":$" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}