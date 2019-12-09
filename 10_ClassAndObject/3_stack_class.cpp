//
// Created by quronghui on 2019/12/9.
//
// 题目四:类的公有函数的定义
#include "3_stack_class.h"

// 默认的构造函数
Stack::Stack() {
    top = 0;
}

// isempty
bool Stack::isempty() const {
    return top == 0; // 先进行top与0的比较
}

bool Stack::isfull() const {
    return top == MAX;
}

// push 入栈
bool Stack::push(const ITEM &item) {
    if(top < MAX){
        items[top++] = item;
        return true;
    } else
        return false;
}

// pop 出栈
bool Stack::pop(ITEM &item) {
    if(top > 0){
        item = items[--top];
        return true;
    } else
        return false;
}


