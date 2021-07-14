#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node * right;
    node( int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
 node* insert_node( node* root, int val){
    node* p=new node( val);
     if(root==NULL){
         root= p;
         return root;
     }
     if(root->data < val){/* i try this with out recurtion but i am not able to do this*/
         root->right=insert_node(root->right,val);
     }
     else if(root->data==val){
         cout<<"error .. this data is already in this tree"<<endl;
     }
    else {
        root->left=insert_node(root->left, val);
    }
    return root;
}
/*
inoder - traversal ->left , root , right
postorder - traversal ->left right root
perorder - traversal -> root left right
*/
void print_bst_preoder_traversal(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    print_bst_preoder_traversal(root->left);
    print_bst_preoder_traversal(root->right);
}
void print_bst_postoder_traversal( node * root){
    if(root==NULL){
        return ;
    }
    print_bst_postoder_traversal(root->left);
    print_bst_postoder_traversal(root->right);
      cout<<root->data<<" ";
}
void print_bst_inoder_traversal( node * root){
    if( root==NULL){
        return ;
    }
    print_bst_inoder_traversal(root->left);
    cout<<root->data<<" ";
    print_bst_inoder_traversal(root->right);
}
int main(){
    int n;
    cin>>n;
    int val;
    node* head =NULL;
    for( int i=0;i<n;i++){
        cin>>val;
       head= insert_node(head,val);
    }
    print_bst_preoder_traversal(head);
    cout<<endl;
    print_bst_postoder_traversal(head);
    cout<<endl;
    print_bst_inoder_traversal(head);
    /*noted that inorder- traversal of the boinaryt tree give 
    us a sorted array of the given array*/
    return 0;
}