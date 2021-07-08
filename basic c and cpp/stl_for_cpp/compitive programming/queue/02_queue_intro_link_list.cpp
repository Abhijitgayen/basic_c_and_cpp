#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* link;
    node( int val){
        data=val;
        link=NULL;
    }
};
class Queue{
    public:
    node* font=NULL;
    node* back=NULL;

    void enqueue( int val){
        node* n= new node(val);
        if(font==NULL){
            font=n;
            back=n;
            return ;
        }
        back->link=n;
        back=n;
    }
    void dequeue(){
        if(font==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        node* delnode =font;
        font=font->link;
        delnode->link= NULL;
        delete(delnode);
    }
    int peek(){
        if(font==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return font->data;
    }
    bool empty(){
        if(font==NULL){
            return true;
        }
        return false;
    }
};
 int main(){
     Queue qu;
     int n, val;
     cin>>n;
     for( int i=0; i<n;i++){
         cin>> val;
         qu.enqueue(val);
     }
     while(!qu.empty()){
         cout<<qu.peek()<<" ";
         qu.dequeue();
     }
     cout<<endl;
     cout<<qu.empty()<<endl;

     return 0;
 }
