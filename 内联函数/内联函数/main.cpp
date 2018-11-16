//
//  main.cpp
//  内联函数
//
//  Created by yhjs on 2018/11/16.
//  Copyright © 2018 yhjs. All rights reserved.
//

#include <iostream>
using namespace :: std;
//函数调用需要建立栈内环境
#if 0
int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n";
    return 0;
}
#endif

#if 0
int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n";
    return 0;
}
#endif

//c++提供了inline函数, 减少函数调用的成本

/*
 1.内敛函数可以在一开始仅仅声明一次
 2.内涵函数必须在调用之前被声明或定义, 因为内联函数的代码必须在被替换之前已经生成被替换的代码
 */
//内敛函数和宏定义
#if 0
inline bool isnumber (char c){
    return c >= '0' && c <= '9';
}
inline bool ssss(int a, int b){
    return a > b;
}
int main(int argc, const char * argv[]) {
    cout << ssss(8, 6) << endl;
//    char c;
//    while ((c=cin.get()) != 'q') {
//        if (isnumber(c)) {
//            cout << "数字" << endl;
//            return 0;
//        }else{
//            cout << "啥玩意" << endl;
//        }
//    }
    return 0;
}
#endif


//1.调用函数时可以不指定全部参数
//2.为可以不指定的参数提供默认值
#if 1
//1,这是都有默认值的情况
int add (int a=5 , int b=6, int c=7){
    return a + b + c;
}

//2.当一个函数中有多个默认参数, 则形参分布中, 默认参数应该从右往左逐渐定义,当调用函数时, 只能从左匹配参数例如:
void foo(int a , int b = 2, int c = 3, int d = 4);
int main(int argc , const char * argv[]){
    cout << "d" << endl;
    cout << add() << endl;
    cout << add(1,2) << endl;
    cout << add(1,2,3) << endl;
    return 0;
}
//int add (int a , int b, int c){
//    return
//}
#endif

