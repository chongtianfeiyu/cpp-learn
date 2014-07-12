//
//  main.cpp
//  cpp_06_super_method
//
//  c++能访问该类中任何父类的方法，java的super只能访问当前父类的方法,c++的这个功能比较强大
//
//  Created by zhihuanglai on 14-7-10.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    Man *m = new Man(20);
    
    m->sayHello();
    
    m->Person::sayHello();
    delete m;
    return 0;
}

