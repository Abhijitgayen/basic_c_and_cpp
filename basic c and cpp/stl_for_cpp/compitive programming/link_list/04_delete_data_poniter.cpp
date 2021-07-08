//using this algorithm we need to atleast on node in the list at the nend of the given ptr
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
node* search_node_ptr( int data, node* head){
    node * temp= head;
    while(temp!=NULL){
        if(temp->data==data){
            return temp;
        }
        temp=temp->link;
    }
    return NULL;
}
void delete_node_using_ptr( node * dataptr){
    node * ptr =dataptr;
    ptr->data=ptr->link->data;
    node* ptr1 =ptr->link;
    ptr->link=ptr1->link;
    ptr1->link=NULL;
    delete (ptr1);
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
    delete_node_using_ptr(search_node_ptr(14,head));
    delete_node_using_ptr(search_node_ptr(12,head));
    print_all(head);
    delete_node_using_ptr(search_node_ptr(13,head));
    delete_node_using_ptr(search_node_ptr(17,head));
    print_all(head);
    //delete_node_using_ptr(search_node_ptr(20,head));
    //print_all(head);

    return 0;
}