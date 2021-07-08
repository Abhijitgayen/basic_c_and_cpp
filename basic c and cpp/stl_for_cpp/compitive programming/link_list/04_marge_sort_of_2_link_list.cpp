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
node* marge(node* &head, node* &head1){
    node* p1=head;
    node* p2=head1;
    node * main=new node(-1);
    node * p3=main;
    while(p1!=NULL  && p2!=NULL){
        if(p1->data < p2->data){
            p3->link=p1;
            p1=p1->link;
           p3->link->link=NULL;
        }
        else{
            p3->link=p2;
            p2=p2->link;
           p3->link->link=NULL;
        }
        p3=p3->link;
    }
    while(p1!=NULL){
        p3->link=p1;
       p1 = p1->link;
      p3->link->link=NULL;
       p3=p3->link;
    }
    while(p2!=NULL){
        p3->link=p2;
        p2=p2->link;
       p3->link->link=NULL;
        p3=p3->link;
    }
    node* temp=main;
    main=main->link;
    temp->link=NULL;
    delete (temp);
    return main;
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
    node *head1=NULL;
    int m;
    cin>>m;
    for( int i=0;i<m;i++){
        int w;
        cin>>w;
        insert_node(head1,w);
        // cout<<"hello";
    }
    
    node *margehead=marge(head,head1);
    
   print_all(margehead);

    return 0;
}