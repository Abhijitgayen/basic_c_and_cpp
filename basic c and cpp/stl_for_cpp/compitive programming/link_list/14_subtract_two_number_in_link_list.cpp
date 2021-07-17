#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node* link;
     node(int val){
         data= val;
         link= NULL;
     }
 };
  void print_linklist( node* head){
     if( head == NULL){
         cout<<" NULL"<<endl;
         return;
     }
     node * temp= head;
     while( temp!=NULL){
         cout<<temp->data<<"->";
         temp= temp->link;
     }cout<<"NULL"<<endl;
 }
  int size_of_link_list( node * root){
       if ( root==NULL){
           return 0;
       }
      node* temp= root;
       int count=0;
       while(temp!=NULL){
           count++;
           temp=temp->link;
       }
        return count;
  }
   node* reverse_linklist( node* root){
       node* prv=NULL;
       node * curr= root;
       node* next=curr->link;
       while(curr!=NULL){
           next=curr->link;
           curr->link=prv;

           prv= curr;
           curr=next;
       }
        return  prv;
   }
void insert_node( node* & head, int data){
     node* n= new node(data);
     if( head == NULL){
         head=n;
         return ;
     }
     node* tail=head;
     while(tail->link != NULL){
         tail=tail->link;
     }
     tail->link=n;
 }
 /*this function help to find the max  number of those two given linklist*/
  bool find_big_no( node * root1 , node* root2){
      if(size_of_link_list(root1) > size_of_link_list(root2)){
          return true;
      }
      if(size_of_link_list(root1)==size_of_link_list(root2)){
          node* temp1=root1;
          node* temp2= root2;
          while(temp1!=NULL && temp2!=NULL){
              if(temp1->data > temp2->data){
                  return true;
              }
              temp1= temp1->link;
              temp2= temp2->link;
          }
      }
      return false;
  }
 node* subtaction_two_linklist(node* root1, node* root2){
     node* root=NULL;
     node* temp1,*temp2;
     if(find_big_no(root1,root2)){
         temp1=reverse_linklist(root1);
         temp2=reverse_linklist(root2);
     }
     else{
         temp1=reverse_linklist(root2);
         temp2=reverse_linklist(root1);
         
     }
      int main=0;
      int carr=0;
     while(temp1 != NULL && temp2!= NULL){
         main=0;
         if((temp1->data + carr) < temp2->data){
             main=10  + carr+(temp1->data )- (temp2->data);
             carr=-1;
         }
         else{
             main= (temp1->data) + carr - (temp2->data);
             carr=0;
         }
         insert_node(root,main);
         temp1=temp1->link;
         temp2= temp2->link;
     }
     while(temp1!=NULL){
         main= temp1->data+carr;
         insert_node(root,main);
         carr=0;
         temp1=temp1->link;
     }
    //  print_linklist(root);
    return reverse_linklist(root);
 }
int main(){
     int n, m,val;
     cin>>n>>m;
     node * root1=NULL;
     node* root2=NULL;
     for(int i=0; i<n; i++){
         cin>>val;
         insert_node(root1,val);
     }
      for(int i=0; i<m; i++){
         cin>>val;
         insert_node(root2,val);
     }
      print_linklist(root1);
      print_linklist(root2);
      print_linklist(subtaction_two_linklist(root1, root2));
    return 0;
}
