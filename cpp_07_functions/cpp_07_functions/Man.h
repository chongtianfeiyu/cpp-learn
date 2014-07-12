//
//  Man.h
//  cpp_03_classes
//
//  Created by zhihuanglai on 14-7-9.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#ifndef __cpp_03_classes__Man__
#define __cpp_03_classes__Man__

#include <iostream>
#include "Person.h"

class Man:public Person{
    
public:
    Man(int age);
    void sayHello();
    virtual void eat();
};

#endif /* defined(__cpp_03_classes__Man__) */
