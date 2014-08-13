//
//  Person.cpp
//  cpp_01_oo
//
//  Created by zhihuanglai on 14-7-9.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include "Person.h"

Person::Person() {
    this->age=10;
    this->sex=1;
}

Person::Person(int age,int sex) {
    this->age=age;
    this->sex=sex;
}

int Person::getAge() {
    return this->age;
}

int Person::getSex() {
    return this->sex;
}

void Person::sayHello() {
    printf("hello person cpp\n");
}