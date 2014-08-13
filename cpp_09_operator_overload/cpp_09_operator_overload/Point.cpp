//
//  Point.cpp
//  cpp_09_operator_overload
//
//  Created by zhihuanglai on 14-7-12.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include "Point.h"

Point::Point(int x,int y) {
    this->x = x;
    this->y = y;
}

int Point::getX() {
    return this->x;
}

int Point::getY() {
    return this->y;
}

void Point::add(int x,int y) {
    this->x+=x;
    this->y+=y;
}

void Point::add(Point p) {
    add(p.getX(),p.getY());
}

void Point::operator+=(Point p) {
    add(p.getX(), p.getY());
}
