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
node * reverse_element_up_to_group(node* & head, int k){
    node *prev=NULL;
    node *curr=head;
    node * next =NULL;
    node* newptr=head;
    int i=k;
    while(i--){
        newptr=newptr->link;
    }
    i=k;
    prev=newptr;
   while(i--){
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main(){
    node * head= NULL;
    int n,k;
    cin>>n>>k;
    for(int i=0 ;i<n; i++){
        int v;
        cin>>v;
        insert_node(head,v);
    }
    
   // insert_node(head,8);
    //insert_node(head,7);
    print_all(head);
    node * nodehead=reverse_element_up_to_group(head,k);
    print_all(nodehead);

    return 0;
}