#include<bits/stdc++.h>
/*Find mid element in this link list*/
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
void mid_element(node * & head){
    node * temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->link;
    }
    count=(count+1)/2;
    temp=head;
    int i=0;
    while(temp!=NULL){
        i++;
        if(i==count){
            cout<<"mid elements in the link list is : "<<temp->data<<endl;
            break;
        }
        temp=temp->link;
    }
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
    mid_element (head);
    return 0;
}