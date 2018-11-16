//
//  main.cpp
//  引用
//
//  Created by yhjs on 2018/11/16.
//  Copyright © 2018 yhjs. All rights reserved.
//

#include <iostream>//头文件

#if 0
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
#endif

#if 1
using namespace ::std;//使用标准的命名空间
namespace One{//使用命名空间定一个名字
    int m = 10;
    int m1 = m;
    //&只有在在申明引用时是引用操作符,其他时候欧式地址操作符
    //引用和变量指向同一个存储单元
    int &tempM = m;//int &tempM指向整形的引用
    char *p = "hello world";
};
int main(int argc, const char * argv[]){
    One::tempM = 100;
    One::m1  = 200;
    cout << One::m << endl ;//100
    cout << One::tempM << endl ;//100
    cout << One::m1 << endl ;//200
    cout << One::p<<endl;
    return 0;
}

//引用和指针的差别
//1.指针是个变量, 可以把他在赋值成指向别处的地址
//2.建立引用时, 必须y进行初始化,并且绝不会在关联其他不同的变量
/*
 int * a = NULL;
 int * &rpa = a;
 int b  = 10;
 rpa = &b;
 */
//void引用是不合法的, 本质上不是一个类型,但是没有任何一个变量或对象其类型为void
//不能建立引用的数组
//int a[10] = {0};
//int& rarrr[10] = a;

//没有引用的指针, 和引用的引用
int a;
int &ra = a;
//int& *p = ra;//这是错误的,企图定义一个引用的指针
//有空指针没有空引用
#endif
