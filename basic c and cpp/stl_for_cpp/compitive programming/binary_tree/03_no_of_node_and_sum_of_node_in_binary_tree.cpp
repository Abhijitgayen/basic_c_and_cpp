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
void inorder(node * root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
/*no of node in the  binary tree*/
int no_of_node( node * root){
    if( root== NULL){
        return 0;
    }
    return no_of_node(root->left)+no_of_node(root->right)+1;
}
/* sum of all element of the binary tree*/
int sum_el_node(node* root){
    if(root==NULL){
        return 0;
    }
    return sum_el_node(root->left)+sum_el_node(root->right)+root->data;
}
int main(){
    /*       1
            /  \
         2      3
        /\     / \
    4     5  6   7    */
    node * root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left= new node(4);
    root->left->right = new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);
    inorder(root);
    cout<<endl;
    cout<<"no of root : "<<no_of_node(root)<<endl;
    cout<<"Sum of all element of the binary tree : "<<sum_el_node(root)<<endl;

    return 0;
}



