//
//  Man.cpp
//  cpp_03_classes
//
//  Created by zhihuanglai on 14-7-9.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include "Man.h"

//c++中子类调用父类的方法，java中使用super
Man::Man(int age):Person(age,1) {
}

void Man::sayHello() {
    printf("hell man cpp\n");
}