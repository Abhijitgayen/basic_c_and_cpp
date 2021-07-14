#include<bits/stdc++.h>
using namespace std;
class node{
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
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return (max(lh,rh) + 1) ;
}
bool isheightbalcenceBT(node* root){
    if(root==NULL){
        return true;
    }
    if(isheightbalcenceBT(root->left)==false){
        return false;
    }
    if(isheightbalcenceBT(root->right)==false){
        return false;
    }
    
    int lh=height(root->left);
    int rh=height(root->right);
    //cout<<lh<<" "<<rh;
    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    /*
                1
              / \
            2    6
            \     \
              3    7
            /
         4
          \
          5
*/
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(6);
    root->right->right=new node(7);
    root->left->right=new node(3);
    root->left->right->left= new node(4);
    root->left->right->left->right= new node(5);
    if(isheightbalcenceBT(root))cout<<"yes"<<endl;
    else cout<<"NO"<<endl;
    /*
            1
          /\
        2   3
      /\
    4   5
     */

    node * root1=new node(1);
    root1->left= new node(2);
    root1->right=new node(3);
    root1->left->right= new node(4);
    root1->left->left=new node(5);
    if(isheightbalcenceBT(root1))cout<<"yes"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}