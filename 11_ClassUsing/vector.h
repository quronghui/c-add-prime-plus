//
// Created by quronghui on 2020/6/4.
// 题目4：通过类进行矢量的描述，矢量包括大小和方向两个参数；
//

#ifndef INC_11_CLASSUSING_VECTOR_H
#define INC_11_CLASSUSING_VECTOR_H

#include <iostream>

namespace VECTOR{       // namespace 命名空间，同样是一种构造结构，用于定义的；
    class Vector{
    public:
        enum Mode{RECT, POL};   //enum 枚举
    private:
        double x, y;   //horizontal value; vertical value
        double mag, ang;    // length of vector; direction of vector in degrees;
        Mode mode;          // RECT or POL;
        // private methods for setting values
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();   //默认构造函数
        Vector(double n1, double n2, Mode form = RECT); //析构函数；
        void reset(double n1, double n2, Mode from = RECT); //都会存在重置函数，防止出错；

        ~Vector();  //析构函数的释放方式；

        // 内联函数：这些函数特别短，可以作为内联函数；
        double xval() const { return x;}    //report x value
        double yval() const { return y;}    //report y value
        double magval() const { return mag;} // report magnitude
        double angval() const { return ang; };
        void polar_mode();  // set mode to POL
        void rect_mode();   // set mode to RECT

        // operator overloding ;运算符重载函数
        // operator 运算符重载的说明：使得class对象可以直接进行相加减；
        Vector operator+(const Vector & b) const ;
        Vector operator-(const Vector & b) const ;
        Vector operator-() const ;
        Vector operator*(double n) const ;

        // // 友元函数的构造；
        friend Vector operator*(double n, const Vector & a)

        friend std::ostream & operator<<(std::ostream & os, const Vector & v); //提供了ostream的支持


    };

}   // end namespace VECTOR

#endif //INC_11_CLASSUSING_VECTOR_H
