#include<bits/stdc++.h>
using namespace std;
class node{
     public:
     int data;
     node* next;
     node(int val){
          data=val;
          next=NULL;
     }
};
void print(node* head){
     node* temp=head;
     while (temp!=NULL)
     {
          cout<<temp->data<<" ";
          temp=temp->next;
     }
     cout<<endl;
}
node* insert( node* head, int val){
     node* temp=new node(val);
      if(head==NULL){
           return temp;
      }
     temp->next=head;
     return temp;
}
 int leng(node* head){
      int dis=0;
      node* temp=head;
      while(temp!=NULL){
           dis++;
           temp=temp->next;
      }
      return dis;
 }
 node* insert_in_pos( node* head, int pos, int val){
      node* temp=new node(val);
      int len=leng(head);
      pos=pos>len?pos%(len):pos;
      if(pos==1){
           temp->next=head;
           return temp;
      }
      node* posnode;
      node* temp2=head;
      while(--pos && temp2!=NULL){
           posnode=temp2;
           temp2=temp2->next;
      }
      temp->next=posnode->next;
      posnode->next=temp;
      return head;
 }
 node* delete_node(node* head, int pos){
      node* temp=head;
      int len=leng(head);
     pos=pos>len?pos%(len):pos;
      if(pos==1){
           head=head->next;
           temp->next=NULL;
           free(temp);
           return head;
      }
      node* prev;
      pos--;
      while(pos--&&temp!=NULL){
           prev=temp;
          temp=temp->next; 
      }
      node* delnode=prev->next;
      prev->next=delnode->next;
      delnode->next=NULL;
      free(delnode);
      return head;
 }
int main(){
     int n;
     cin>>n;
     node* head = NULL;
     for( int i=0;i<n;i++){
          int val;
          cin>>val;
          head=insert(head,val);
     }
     print(head);
     cout<<leng(head)<<endl;
     head=insert_in_pos(head,2,23);
     head=insert_in_pos(head,10,43);
     print(head);
     head=insert_in_pos(head,1,413);
     print(head);
     head=delete_node(head,1);
     head=delete_node(head,11);
     print(head);
     return 0;
}