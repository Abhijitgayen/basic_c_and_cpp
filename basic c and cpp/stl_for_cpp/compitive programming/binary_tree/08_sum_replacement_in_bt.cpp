#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
        node( int val){
            data= val;
            left=NULL;
            right=NULL;
        }
};
void inoder_terversal(node* root){
    if(root==NULL){
        return ;
    }
    inoder_terversal(root->left);
    cout<<root->data<< "  ";
    inoder_terversal(root->right);
}
void sum_replacement( node* root){
    if(root==NULL){
        return;
    }
    sum_replacement(root->left);
    sum_replacement(root->right);
    if(root->left!=NULL){
        root->data += root->left->data;
    }
    if(root->right!=NULL){
        root->data += root->right->data;
    }
}
int main(){
    /*          1
                /\
             2     3
          /\     /\
        4   5  6   7
    */
    node* root=new node(1);
    root->left=new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right= new node(7);
    inoder_terversal(root);
    cout<<endl;
    sum_replacement(root);
    /*
                28
                /\
            11     16
          /\     /\
        4   5  6   7
    */

    inoder_terversal(root);

    return 0;
}