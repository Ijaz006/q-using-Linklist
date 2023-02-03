//
//  Q.cpp
//  Q using linklist
//
//  Created by Ijaz Tufail on 04/10/2022.
//

#include "Q.hpp"
#include <iostream>
using namespace std;

node::node( int val){
    data=val;
 
    
}
Q::Q( int val){
    front=NULL;
    data=val;
    rear=NULL;
    front=rear;
}
void Q::enque(int val){
    node* temp=new node(val);
    if( front==NULL){
        front=temp;
        front->data=val;
        lenght++;
    }
        rear=temp;
        front->next=rear;
        rear->data=val;
        lenght++;
    }

void Q::dispaly( ){
    node* temp=front;
    for( int i=0;i<lenght;i++){
        cout<<temp->data;
        temp=temp->next;
    }
    
}
