//
//  main.cpp
//  cpp_03_classes
//
//  cpp可以使用继承，但好像不能使用java中得多态,main方法就是java中多态的写法
//
//  Created by zhihuanglai on 14-7-9.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    Man *m = new Man();
    m->sayHello(); //输出"hello man cpp"
    delete (m);
    
    Person *p = new Man();
    p->sayHello(); //期望输出"hello man cpp", 却输出"hello person cpp"
    delete (p);
    
    return 0;
}

