#include<bits/stdc++.h>
using namespace std;
class node {
    public:
        int data;
        node* left;
        node* right;
        node( int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};
 /*level tervarsal of the binary tree*/
 void level_tervarsal( node* root){
     if(root==NULL){
         return ;
     }
     queue<node*> qu; //this is a queue of node pointer
     qu.push(root);
     qu.push(NULL);
     while(!qu.empty()){
         node* ptr=qu.front();
         qu.pop();
         if(ptr!=NULL){
             cout<<ptr->data<<" ";
         if(ptr->left!=NULL){
             qu.push(ptr->left);
         }
         if(ptr->right!=NULL){
             qu.push(ptr->right);
         }}
         else if(!qu.empty()){
             cout<<endl;
             qu.push(NULL);
         }
     }cout<<endl;
 }
int main(){
    node* root=new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left= new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);
    root->left->left->left= new node(8);
    root->left->left->right= new node(9);
    root->left->right->left=new node(10);
    root->left->right->right = new node(11);
    root->right->left->left= new node(12);
    root->right->left->right= new node(13);
    root->right->right->left=new node(14);
    root->right->right->right = new node(15);
    root->left->left->left->left= new node(16);
    root->left->left->left->right= new node(17);
    root->left->left->right->left=new node(18);
    root->left->left->right->right = new node(19);
    root->left->right->left->left= new node(20);
    root->left->right->left->right= new node(21);
    root->left->right->right->left=new node(22);
    root->left->right->right->right = new node(23);
    root->right->left->left->left= new node(24);
    root->right->left->left->right= new node(25);
    root->right->left->right->left=new node(26);
    root->right->left->right->right = new node(27);
    root->right->right->left->left= new node(28);
    root->right->right->left->right= new node(29);
    root->right->right->right->left=new node(30);
    root->right->right->right->right = new node(31);
    level_tervarsal(root);
    cout<<endl;
    return 0;
}