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
void insert_before( node * &head, int val){
    node* n= new node( val);
    if(head==NULL){
        head=n;
        n->link=head;
        return ;
    }
    node * temp= head;
    while(temp->link!=head){
        temp=temp->link;
    }
    node*tail=temp;
    n->link=head;
    head=n;
    tail->link=head;
}
void insert_node( node* &head, int val){
    node* n=new node( val);
    if( head==NULL){
        head=n;
        n->link=head;
    }
    node* temp=head;
    while( temp->link != head){
        temp=temp->link;
    }
    temp->link=n;
    n->link=head;
}
void display( node * head){
    node * temp = head;
    while( temp->link!=head){
        cout<<temp->data<<"->";
        temp=temp->link;
    }cout<<temp->data<<endl;
}
int search_node( node * head, int val){
    node* temp=head;
    if(head->data == val){
     return 1;
     }
    while(temp->link!=head){
        if(temp->data==val){
            return 1;
        }
        temp=temp->link;
    }
    if(temp->data==val) return 1;
    return 0;
}
/*delete is not work we need to see it*/
void delete_node( node * &head, int val){
        if(head->data== val){//this for head node 
            if(head->link==head){
                head->link=NULL;
                delete (head);
            }
            else{
                node* temp=head;
                while(temp->link!=head){
                    temp=temp->link;
                }
                node* tail= temp;
                node* temp2=head;
                head=head->link;
                temp->link=NULL;
                tail->link=head;
                delete(temp2);
            }
            return;
        }
        //detete the midel element
        node * temp3=head;
        while(temp3->link!=head){
            if(temp3->link->data==val){
                cout<<"need to work"<<endl;
            }
            temp3=temp3->link;
        }
}
int main(){
    int n, val;
    cin>>n;
    node* head=NULL;
    for( int i=0; i<n;i++){
        cin>>val;
        insert_node(head, val);
    }
    display(head);
    int searchval;
    cin>>searchval;
    cout<<search_node(head,searchval)<<endl;
    insert_before( head,12);
    display(head);
    int delval;
    cin>>delval;
    delete_node(head,delval);

}
