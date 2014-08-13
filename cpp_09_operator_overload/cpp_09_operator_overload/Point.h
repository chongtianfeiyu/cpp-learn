//
//  Point.h
//  cpp_09_operator_overload
//
//  Created by zhihuanglai on 14-7-12.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#ifndef __cpp_09_operator_overload__Point__
#define __cpp_09_operator_overload__Point__

#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int x,int y);
    int getX();
    int getY();
    void add(Point p);
    void add(int x, int y);
    void operator+=(Point p);
};

#endif /* defined(__cpp_09_operator_overload__Point__) */
