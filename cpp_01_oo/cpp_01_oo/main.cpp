//
//  main.cpp
//  cpp_01_oo 面向对象简介
//
//  1.cpp的入口方法和c语言的入口方法是差不多的
//  2.cpp的new,delete关键字要成对出现
//  3.cpp的new,class,public的关键字和java很像
//
//  Created by zhihuanglai on 14-7-8.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include "Person.h"

int main(int argc, const char * argv[])
{

    Person *p = new Person();
    p->sayHello();
    delete (p);
    
    //c语言中
    //malloc(<#size_t#>);
    //free(<#void *#>);
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}

