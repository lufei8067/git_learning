//
//  server.cpp
//  CCTestDemo
//
//  Created by lufei on 2019/3/21.
//  Copyright © 2019年 路飞. All rights reserved.
//

#include "server.h"
#include <iostream>
#include "common.h"

using namespace std;

Server::Server()
{
    
}

Server::~Server()
{
    
}

bool Server::Init()
{
    
    
    return true;
}

void Server::Run()
{
    cout << ".........star.........."<< endl;
    
    bool bRunning = true;
    string strMsg;
    
    
    while (bRunning)
    {
        //cin >> strMsg;
        cout << "enter you ..." << endl;
        
        getline(cin, strMsg);
        
        cout << "my ... : " <<strMsg << "\n"<<endl;
        
        
        if (strMsg == "q") {
            bRunning = false;
        }
        
        continue;
    }
}

void Server::Release()
{
    
}
