//
// Created by quronghui on 2019/12/9.
//
// 题目四:将类的概念融入到ADT中;
//类的公有成员函数提供了表示栈操作的接口，而私有数据成员负责存储栈数据；

#ifndef INC_10_CLASSANDOBJECT_3_STACK_CLASS_H
#define INC_10_CLASSANDOBJECT_3_STACK_CLASS_H

typedef unsigned long ITEM;

class Stack{
private:
    enum {MAX = 10};    // 枚举类型,实现类作用域的定义,MAX属于类Stack
    ITEM items[MAX];    // 栈使用数组实现
    int top;
public:
    Stack();
    bool isempty() const ; // this指针使用的函数必须是const类型
    bool isfull() const;
    bool push(const ITEM & item);   // push入栈
    bool pop(ITEM & item);          // pop出栈
};

#endif //INC_10_CLASSANDOBJECT_3_STACK_CLASS_H
