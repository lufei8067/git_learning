//
//  server.hpp
//  CCTestDemo
//
//  Created by lufei on 2019/3/21.
//  Copyright © 2019年 路飞. All rights reserved.
//

#ifndef server_h
#define server_h

#include <stdio.h>

class Server
{
public:
    
    Server();
    ~Server();
    
    static Server& getInten() {static Server s_sten; return s_sten;}
    
    bool Init();
    
    void Run();
    void Release();
    
    
protected:
    
    
    
    
};


#define ServerInst Server::getInten()



#endif /* server_hpp */
