//
//  ATM.hpp
//  CCTestDemo
//
//  Created by lufei on 2019/4/1.
//  Copyright © 2019年 路飞. All rights reserved.
//

#ifndef ATM_h
#define ATM_h

#include <stdio.h>
#include "common.h"

using namespace std;

enum City
{
    k_nomal = 0,
    
};

struct Currency
{
    string strType;
    int iNumber;
    
};


class ATM
{
public:
    ATM();
    ATM(const string type, int iNumber):m_name(type), m_iNum(iNumber) {}

    ~ATM();
    
    //void initAtm();
    
    void changeCode(Currency &cny);

    
protected:  //派生类可以直接访问
    
    
    vector<Currency> m_cuncyVt;
    
    
    
    
private:
    
    string m_name;
    int    m_iNum;

    
    
};


#endif /* ATM_hpp */
