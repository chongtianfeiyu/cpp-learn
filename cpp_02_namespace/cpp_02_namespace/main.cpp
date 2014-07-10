//
//  main.cpp
//  cpp_02_namespace
//
//  cpp的命名空间对应java的package
//
//  Created by zhihuanglai on 14-7-9.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include "Person.h"

using namespace::kojavaee;

int main(int argc, const char * argv[])
{
    Person *p = new Person();
    p->sayHello();
    delete (p);
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}

