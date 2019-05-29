//
//  stock.hpp
//  CCTestDemo
//
//  Created by lufei on 2019/3/21.
//  Copyright © 2019年 路飞. All rights reserved.
//

#ifndef stock_h
#define stock_h

#include <stdio.h>
#include "common.h"

using namespace std;

class Stock
{

public:
    
    Stock();
    Stock(const string & co, long n, double pr); //重载构造函数目的进行初始化
    ~Stock();

    void acquire(const string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
    
    
private:
    
    string companyStr;
    long iShares;
    double dSharVal;
    double dTotalVal;
    
    void setTotal() {dTotalVal = dSharVal * iShares;}  //内联函数省略line
    
};



#endif /* stock_hpp */


//类
/*
 1.构造函数和析构函数（因为要初始化函数成员） -> 私有 -> 不像结构体那样初始化
 2.函数声明和定义分开在不同文件
 3.::作用域限定符号
 4.
 
 
 */


//内存
/*
 1.自由存储区，代码块变量
 2.static
 3.new 堆

 外部链接  内部链接  无链接
 
 */

//引用 指针
/*
 1.变量别名
 
 
 
 */


/*
1.静态数据成员, 静态函数成员, 函数重载, 运算符重载
2.列表式初始化
 
3.继承调用顺序， 基类构造，派生类构造   派生类析构 基类析构
*/
