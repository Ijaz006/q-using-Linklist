//
//  Q.hpp
//  Q using linklist
//
//  Created by Ijaz Tufail on 04/10/2022.
//

#ifndef Q_hpp
#define Q_hpp

#include <stdio.h>


#endif /* Q_hpp */
class node{
public:
    int data;
    node* next;
   
    node( int val);
};
class Q{
    Q( int val);
private:
    
    node*front;
    node*rear;

public:
    int lenght;
    int data;
    Q( );
    void enque(int val );
    void deque();
    void dispaly( );
};

