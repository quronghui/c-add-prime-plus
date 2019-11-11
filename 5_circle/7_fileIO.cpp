//
// Created by quronghui on 2019/11/6.
//
// 题目七：文件的IO和文本IO的区别？实现文件IO的输入和输出?

#include <iostream>
#include <fstream>      // 文件io的头文件
#include <cstdlib>      // exit（）函数
using namespace std;

// （1）输出到文件中保存
void out_to_file()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    // fstream中用于处理输出的类ofstream，通过其定义对象outFile;
    // 类似于iostream 中的类ostream，通过其定义的对象cout;
    ofstream outFile;
    outFile.open("carinfo.txt");    // 对象和文件建立关联；

    // 通过Istream进行输入内容
    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = a_price * 0.913;
    // 通过Ostream 将内容输出到屏幕上；
    cout << fixed;          // 特定格式的输出
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "year: " << year << endl;
    cout << "was asking $: " << a_price << endl;
    cout << "now asking $: " << d_price << endl;

    cout << sizeof automobile << endl;

    // 通过fstream将输出到文件中
    // outFile 对象和cout对象的使用方式一样；
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "year: " << year << endl;
    outFile << "was asking $: " << a_price << endl;
    outFile << "now asking $: " << d_price << endl;

}

// (2)从文件中进行输入；
void cin_from_file()
{
    const int SIZE = 60;
    char filename[SIZE];    // 文件名的保存；
    ifstream inFile;
    cout << "Enter name of date file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  //通过open：奖励对象和文件之间的关联

    if(!inFile.is_open()) {   // file打开失败
        cout << "Could not open the file" << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;      // number of items read

    inFile >> value;    // get first value
    while (inFile.good())   //输入没有任何错误
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if(inFile.eof())    // 错误原因：到达文件末尾
        cout << "End of file reached.\n";
    else if (inFile.fail()) //错误原因：数据类型不匹配；
        cout << "Input Terminated by data mismatch.\n";
    else
        cout << "Input for unknown reason.\n";
    if(count == 0)
        cout << "No data processed.\n";
    else{
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close(); // 文件使用完之后，需要关闭；
}

int main()
{
    out_to_file();
//    cin_from_file();
    return 0;
}

