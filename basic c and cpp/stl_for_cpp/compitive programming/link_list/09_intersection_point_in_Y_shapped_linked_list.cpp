#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int  data;
        node * link;
        node(int val){
            data=val;
            link=NULL;
        }
};
void insert_node( node *& head, int val) {
    node * n = new node(val);
    if(head == NULL){//base case we need to return it 
        head = n;
        return ;
    }
    node * temp= head;
    while( temp->link != NULL){
        temp=temp->link;
    }
    temp->link = n;
}
node* rotated_link_list( node *  head , int k){
    node * temp1=head;
    node * temp=head;
    while(temp->link != NULL){
        temp=temp->link;
    }
    temp->link= head;
    while(--k){
        temp1= temp1->link;
    }
    head=temp1->link;
    temp1->link=NULL;
    return head;
}
void print_all( node* & head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node * head=NULL;
    int n,no;
    cin >> n>>no;
    int val ;
    for( int i=0; i<n; i++){
        cin>>val;
        insert_node(head,val);
    }
    print_all(head);
    return 0;

}