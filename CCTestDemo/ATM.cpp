//
//  ATM.cpp
//  CCTestDemo
//
//  Created by lufei on 2019/4/1.
//  Copyright © 2019年 路飞. All rights reserved.
//

#include "ATM.h"

ATM::ATM()
{
    
}

ATM::~ATM()
{
    
}

void ATM::changeCode(Currency &cny)
{
    
    cout << m_name << m_iNum << endl;
    cout << cny.strType << cny.iNumber << endl;
    
    
    cny.strType +=  "add";
    cny.iNumber += 11;
}
