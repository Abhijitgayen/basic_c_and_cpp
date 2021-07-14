#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node * link;
        node( int val){
            data =val;
            link =NULL;
        }

};
void delete_ele( int val, node* &head){
    if(head->data== val){
        node* temp =head;
        head=head->link;
        temp->link= NULL;
        delete ( temp);
    }
    node * temp1 = head;
    while( temp1!= NULL){/*for delete node we need  previous node of the node that will be deleted*/
        if(temp1->link!=NULL && temp1->link->data == val){
            node *tempdel=temp1->link;
            temp1->link=temp1->link->link;
            tempdel->link=NULL;
            delete(tempdel);
        }
        temp1= temp1->link;
    }    
}
void insert_node( node* &head, int val){
    node * n  = new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node * temp= head;
    while(temp->link != NULL){
        temp =temp->link;
    }
    temp->link=n;
}
void print_all(node* head){
    node * temp=head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->link;
    }
    cout<<"null"<<endl;
}
void insert_before( node * &head,int val){
    node* n= new node(val);
    n->link=head;
    head=n;
}
int search_node( int data, node* head){
    node * temp= head;
    while(temp!=NULL){
        if(temp->data==data){
            return 1;
        }
        temp=temp->link;
    }
    return -1;
}
int main(){
    node * head= NULL;
    int n;
    cin>>n;
    for(int i=0 ;i<n; i++){
        int v;
        cin>>v;
        insert_node(head,v);
    }
   // insert_node(head,8);
    //insert_node(head,7);
    print_all(head);
    int del;
    cin>>del;
    delete_ele(del,head);
    print_all(head);

    return 0;
}