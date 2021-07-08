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
node * reverse_all( node *&head){
    node * prev=NULL;
    node * curr=head;
    node* next=curr->link;
    while(curr!=NULL){
            next=curr->link;
            curr->link=prev;
            
            prev=curr;
            curr=next;
    }
    return prev;
}

int main(){
    node * head= NULL;
    int n;
    cin>>n;
    for(int i=0  ;i<n; i++){
        int v;
        cin>>v;
        insert_node(head,v);
    }
   // insert_node(head,8);
    //insert_node(head,7);
    print_all(head);
    insert_before( head, 1);
    print_all(head);
    cout<<search_node(1, head)<<endl;
    cout<<search_node(10, head)<<endl;
    cout<<search_node(111, head)<<endl;
    node * newhead=reverse_all(head);
    print_all(newhead);

    return 0;
}