//
//  main.cpp
//  cpp_07_functions
//
//  1.java语言是单重继承，多重实现
//  2.cpp语言是多重继承，多重实现
//  3.cpp的实现可以参考，java的类的实现原则，多重继承的类写成虚类（由虚函数组成的类），
//
//  Created by zhihuanglai on 14-7-12.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    Person *p = new Man(20);
    
    p->sayHello(); //output:hello person cpp,原因，cpp的语法合java不一致，需要输出子类方法，需要使用虚函数
    
    p->eat();//output:man eat something, 原因，cpp virtual的方法，一定会被子类覆盖
    
    delete p;
    
    return 0;
}

