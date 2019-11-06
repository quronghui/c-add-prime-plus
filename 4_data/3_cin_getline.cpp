//
// Created by quronghui on 2019/10/22.
//
// 题目三：istream中如何输入一行字符串？使用
// 1.getline() 每次取一行，通过换行符确定行尾，但不保存换行符；在存储时，用'\0'代替'\n'
//      cin.getline() 返回的是一个cin对象，所以可以连续调用
//2.get()对于换行符不进行读取，而是放在stdin缓存队列中，所以需要cin.get()将其去除

#include <iostream>
using namespace std;

// getline() and cin.getline()
void Getline()
{
    const int ArSize = 10;
    char name[ArSize];
    char desert[ArSize];
    cin.getline(name, ArSize).getline(desert,ArSize);
    cout << "You input is: " << name << endl;
    cout << "You desert is: " << desert << endl;
}

// get()
void Get()
{
    const int ArSize = 10;
    char name[ArSize];
    char desert[ArSize];
    cin.get(name,ArSize).get(); // 用于去除第一个字符串留在缓存中的'\n';
    cout << "You name is: " << name << endl;
    cin.get(desert,ArSize).get();
    cout << "You name is: " << desert << endl;
}

void NumberString()
{
    int year;
    char address[80];
    (cin >> year).get();    // 去除末尾的'\0'
    cout << "The year is: " << year << endl;
    cin.getline(address, 80);
    cout << "The address is: " << address << endl;
}


int main()
{
//    Getline();
//    Get();
    NumberString();
    return 0;
}

