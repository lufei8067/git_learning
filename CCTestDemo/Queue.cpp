//
//  Queue.cpp
//  CCTestDemo
//
//  Created by lufei on 2019/3/28.
//  Copyright © 2019年 路飞. All rights reserved.
//

#include "Queue.h"
#include <cstdlib>


void Customer::set(long when)
{
    processtime = rand() % 3 + 1;
    arrive = when;
}


//

Queue::Queue(int qs) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}

Queue::~Queue()
{
    Node * temp;
    
    while (front != nullptr) {
        
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty() const
{
    return items;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

bool Queue::enqueue(const Item &item)
{
    if (isfull()) {
        return false;
    }
    
    Node * add = new Node;
    
    add->item  = item;
    add->next = nullptr;
    
    items++;
    
    if (front == nullptr) {
        front = add;
    }else{
        rear->next = add;
    }
    
    rear = add;
    
    return true;
}

bool Queue::dequeue(Item &item)
{
    if (front == nullptr) {
        return false;
    }
    
    item = front->item;
    items--;
    
    Node * temp = front;
    front = front->next;
    
    delete temp;
    
    if (items == 0) {
        rear = nullptr;
    }
    

    return true;
}
