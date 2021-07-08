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
        cout<<temp->data;
        temp=temp->link;
    }
}
void insert_before( node * &head,int val){
    node* n= new node(val);
    n->link=head;
    head=n;
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
node* sum_of_two_linklist(node* &head1, node* &head2){
    node * p1= reverse_all(head1);
    node* p2=reverse_all(head2);
    node * main=NULL;
    int temp;
    int sum ;
    int curr = 0;
    while( p1 !=NULL || p2 != NULL|| curr){
        sum=0;
        if(p1 !=NULL){
            sum +=p1->data;
            p1=p1->link;
        }
        if( p2 != NULL){
            sum += p2->data;
            p2=p2->link;
        }
        temp=sum;
        sum=sum+curr;
        if(sum!=temp){
            curr=0;
        }
        if(sum >=10){
            curr= sum/10;
            sum=sum%10;
        }   
        insert_node(main,sum);
    }
    return  reverse_all(main) ;
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
    
    node *margehead=sum_of_two_linklist(head,head1);
    
   print_all(margehead);

    return 0;
}