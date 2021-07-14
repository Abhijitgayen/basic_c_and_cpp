#include<bits/stdc++.h>
using namespace std;
class node{
    public :
     int data;
     node * left;
     node * right;
     node( int val){
         data =val;
         left=NULL;
         right= NULL;
     }
};
 int sum_k_th_level( node * root, int k){
     int level=0;
     int sum=0;
     queue< node* > qu;
     qu.push(root);
     qu.push(NULL);
     while(!qu.empty()){
         node* ptr= qu.front();
         qu.pop();
         if(ptr!=NULL){
             if(level==k){
                 sum +=ptr->data;
             }
             if(ptr->left != NULL){
                 qu.push(ptr->left);
             }
             if(ptr->right!=NULL){
                 qu.push(ptr->right);
             }
         }
         else{
             if(!qu.empty()){
                 qu.push(NULL);
                 level++;
             }
         }
     }
      return sum; 
 }
int main(){
    /*        1 (level 0)
              /\
            2    3(level 1)
          /\    /\
        4  5  6   7(level 2)
        */
     node* root= new node(1);
     root->left= new node(2);
     root->right= new node(3);
     root->left->left= new node(4);
     root->left->right= new node(5);
     root->right->left= new node(6);
     root->right->right= new node(7);
    cout<<"sum in the k th level is : "<< sum_k_th_level( root, 2)<<endl;
     
    return 0;
}