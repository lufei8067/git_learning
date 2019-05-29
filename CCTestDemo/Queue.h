//
//  Queue.hpp
//  CCTestDemo
//
//  Created by lufei on 2019/3/28.
//  Copyright © 2019年 路飞. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>

class Customer
{
private:
    long arrive;
    int processtime;
    
public:
    
    Customer() {arrive = processtime = 0;}
    
    void set(long when);
    long when() const {return  arrive;}
    int ptime() const {return  processtime;}
    
};


///////

typedef Customer Item;

class Queue
{
private:
    
    //嵌套结构和类
    struct Node {Item item; struct Node * next;};
    enum {Q_SIZE = 10};
    
    Node * front; //队头指针
    Node * rear;  //队尾指针
    int items;
    const int qsize;
    
    Queue(const Queue & q) : qsize(0){}
    Queue & operator=(const Queue & q) {return  *this;}
    
public:
    Queue();
    Queue(int qs = Q_SIZE);
    ~Queue();
    
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
    
    

};







#endif /* Queue_h */
