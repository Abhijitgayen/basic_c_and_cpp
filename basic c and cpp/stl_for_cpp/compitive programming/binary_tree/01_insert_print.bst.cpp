#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node * right;
    node * p;
    node( int val){
        data=val;
        left=right=p=NULL;
    }
}
 void insert_node( int val ,node* &head){
     p=new node( val);
     if(head==NULL){
         head= p;
     }
     node* temp=head;
     while(temp!=NULL){
         if(temp->data > val){
             temp=temp->right;
         }
         else temp=temp->left;
     }
     temp=p;

}
int main(){
    int n;
    cin>>n;
    int val;
    for( int i=0;i<n;i++){
        cin>>val;
        insert_node(val);
    }
    return 0;
}