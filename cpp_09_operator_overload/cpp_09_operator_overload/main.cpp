//
//  main.cpp
//  cpp_09_operator_overload
//
//  Created by zhihuanglai on 14-7-12.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include "Point.h"

int main(int argc, const char * argv[])
{

    //cpp中很酷的实现，opertor+=的重载，java是没有操作符重载的实现
    
    Point p(10,10);
    p.add(Point(12,13));
    p+=Point(11,11);
    std::cout << p.getX()<< "\n";
    
    Point *p1 = new Point(5,5);
    
    p1->add(p);
    
    (*p1)+=p;
    delete p1;
    
    std::cout << p1->getX()<< "\n";
    
   
    
    return 0;
}

