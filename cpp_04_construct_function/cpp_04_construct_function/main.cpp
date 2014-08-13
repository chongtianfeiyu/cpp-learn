//
//  main.cpp
//  cpp_04_construct_function
//
//  cpp的构造函数和虚构函数
//
//  构造函数,new,执行
//  虚构函数,delete,执行
//
//  Created by zhihuanglai on 14-7-10.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>

class Object {
public:
    Object() {
        printf("create object \n");
    }
    
    ~Object() {
        printf("delete object \n");
    }
};

void runObj() {
    Object obj; //销毁时是跟代码块一起的
    printf("runObj\n");
}

int main(int argc, const char * argv[])
{
    //Object *obj = new Object();
    //delete obj;
    
    runObj();
    
    printf("end \n");
    
    //output:~
//    create object
//    runObj
//    delete object
//    end
    return 0;
}

