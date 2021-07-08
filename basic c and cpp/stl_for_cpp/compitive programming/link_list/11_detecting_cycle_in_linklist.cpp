#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* link;
        node( int val){
            data=val;
            link=NULL;
        }
};
void insert_node(node* &head, int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=n;
}
void display( node*  head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->link;
    }
    cout<<"NULL"<<endl;
}
int length( node * head){
    node* temp=head;
    int len=0;
    while( temp != NULL){
        len++;
        temp=temp->link;
    }
    return len;
}
void creat_cycle_in_linklist( node* head, int pos){
    int l=length(head);
    if(pos > l){
        cout<<" not posible "<<endl;
        return ;
    }
    node* temp=head;
    node* linkadd;
    int count=1;
    while(temp->link != NULL){
        if(count==pos){
            linkadd=temp;
           // cout<< temp->data   <<endl;
        }
        count++;
        temp=temp->link;
    }
    temp->link=linkadd;
}
int delect_cycle( node * head){
    node*slow=head;
    node * fast= head;
    while(1){
        if(slow == fast){
            return 1;
        }
        else if(fast == NULL){
            return 0;
        }
        slow=slow->link;
        fast=fast->link->link;
    }
    return 0;
}
void remove_cylce( node * head){
    node * slow=head;
    node* fast=head;
    while(1){
        slow=slow->link;
        fast=fast->link->link;
         if(fast==slow){
            break;
        }
    }
    //cout<<fast->data<<endl;
    fast=head;
    while(slow->link !=fast->link){
        slow=slow->link;
        fast= fast->link;
    }
    slow->link=NULL;
}

int main(){
    int n, val;
    node* head=NULL;
    cin>>n;
    for( int i=0;i<n;i++){
        cin>>val;
        insert_node(head,val);
    }
    int len=length(head);
    int pos;
    cin>>pos;
    display(head);
    creat_cycle_in_linklist(head,pos);
    if(pos <= len){
        //cout<<delect_cycle(head)<<endl;
        if(delect_cycle(head))cout<<"there is a cycle in link list"<<endl;
        remove_cylce(head);
        display(head);
    }
    
    return 0;
}