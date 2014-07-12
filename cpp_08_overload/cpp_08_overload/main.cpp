//
//  main.cpp
//  cpp_08_overload
//
//  Created by zhihuanglai on 14-7-12.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>

class HelloCpp {
public:
    void sayHello() {
        printf("cpp say hi\n");
    }
    
    void sayHello(std::string name) {
        std::string str = "Hi ";
        str+= name;
        std::cout << str << "\n";
    }
};

int main(int argc, const char * argv[])
{
    HelloCpp *h = new HelloCpp();
    
    //cpp的方法重载和java一样，跟据方法参数来区分调用不同的方法
    
    h->sayHello();
    
    h->sayHello("KO");
    
    delete h;

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

