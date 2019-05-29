//
//  main.cpp
//  CCTestDemo
//
//  Created by lufei on 2019/3/20.
//  Copyright © 2019年 路飞. All rights reserved.
//


#include "common.h"
#include "server.h"
#include "ATM.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << "Hello, World!\n";
    
    ATM testAtm = {"mytest:", 55};
    Currency testCny = {"cny:", 33};
    testAtm.changeCode(testCny);
    cout << testCny.strType << "->" << testCny.iNumber << endl;
    
    
    ServerInst.Run();

    
    //lufei test git
    
    return 0;
}
