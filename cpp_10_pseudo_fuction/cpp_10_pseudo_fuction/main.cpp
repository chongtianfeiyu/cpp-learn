//
//  main.cpp
//  cpp_10_pseudo_fuction
//
//  Created by zhihuanglai on 14-7-12.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>

void hi() {
    printf("hi \n");
}

class Hello {
public:
    void operator()() {
        printf("hi cpp pseudo function\n");
    }
};

int main(int argc, const char * argv[])
{
    //cpp的伪函数，可以当成一个参数传递，可以执行方法回调，（什么是回调函数？）
    Hello h;
    h();
    
    hi();
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}

