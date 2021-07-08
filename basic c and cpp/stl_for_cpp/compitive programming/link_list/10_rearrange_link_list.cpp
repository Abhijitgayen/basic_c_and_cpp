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
void swap(int *a, int *b){
    
    int temp=*b;
    *b=*a;
    *a= temp;
}
void print_all(node * & head);
void rearrange_link_list(node* & head){
    node * even=NULL;
    node* odd=NULL;
    node *temp=head;
    while(temp!=NULL){
        if(temp->data %2==0){
            insert_node(even,temp->data);
        }
        else{
            insert_node(odd,temp->data);
        }
        temp=temp->link;
    }
    temp=odd;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=even;
    head=odd;
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
    int n;
    cin >> n;
    int val ;
    for( int i=0; i<n; i++){
        
        cin>>val;
        insert_node(head,val);
    }
    cout<<"hello"<<endl;
    rearrange_link_list(head);
    print_all(head);
    return 0;

}