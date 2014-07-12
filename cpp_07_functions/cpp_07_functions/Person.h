//
//  Person.h
//  cpp_01_oo
//
//  Created by zhihuanglai on 14-7-9.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#ifndef __cpp_01_oo__Person__
#define __cpp_01_oo__Person__

#include <iostream>

class Person {
private:
    int age;
    int sex;
    
public:
    Person();
    Person(int age,int sex);
    int getAge();
    int getSex();
    void sayHello();
    virtual void eat();
};

#endif /* defined(__cpp_01_oo__Person__) */
