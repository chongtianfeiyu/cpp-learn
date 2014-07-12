//
//  main.cpp
//  cpp_05_super_construct
//
//  Created by zhihuanglai on 14-7-10.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    Man *m = new Man(20);
    printf("age %d\n",m->getAge());
    delete m;
    return 0;
}

