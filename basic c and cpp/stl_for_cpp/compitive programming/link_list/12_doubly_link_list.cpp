#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node * prev;
        node * next;
        node( int val){
            data=val;
            prev=NULL;
            next=NULL;
        }
};
void insert_before( node* & head, int val){
    node* n=new node(val);
    head->prev=n;
    n->next=head;
    head=n;
}
void insert_node(node *&head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node*temp=head;
    if(temp->next == NULL){
        temp->next=n;
        n->prev=temp;
        return;
    }
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display( node* head){
    node * temp=head;
    while( temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void rev_display( node* head){
    node *temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    node * tail=temp;
    while(tail !=NULL){
        cout<<tail->data<<"->";
        tail=tail->prev;
    }cout<<"NULL"<<endl;
}
int search_node( node*head,int val){
    node* temp=head;
    while(temp !=NULL){
        if(temp->data == val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
void delete_node( node* &head, int val){
    node* temp=head;
    if(head->data == val){//base case if node is head
        node *temp3=head;
        head=head->next;
        head->prev=NULL;
        temp3->next=NULL;
        delete(temp3);
        return ;
    }
    while(temp!=NULL){
        if(temp->data== val ){
            node* temp2=temp;
            if(temp->next != NULL)temp->next->prev=temp->prev;//if the node is the tail
            temp->prev->next=temp->next; 
            temp2->prev=NULL;
            temp2->next=NULL;
            delete (temp2);
        }
        temp=temp->next;
    }
}
 int main(){
     int n, val;
     node * head=NULL;
     cin>>n;
     for( int i=0; i<n ; i++){
         cin>>val;
         insert_node(head,val);
     }
     display(head);
     rev_display(head);
     insert_before(head, 0);
     display(head);
     rev_display(head);
     cout<<search_node(head,3)<<endl;
     int delval;
     cin>>delval;
     delete_node(head,delval);
     display(head);
     rev_display(head);
 }
