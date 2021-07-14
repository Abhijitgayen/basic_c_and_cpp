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
/*here we try to find the laest common ancter node where*/
node * LCA( node * root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data ==n2){
        return root;
    }
     node* left =LCA(root->left,n1,n2);
     node* right=LCA(root->right,n1,n2);
     if(left!=NULL && right != NULL){
         return root;
     }
   else if(left != NULL){
        return LCA(root->left,n1,n2);
    }
    else if(right != NULL){
        return LCA(root->right, n1, n2);
    }
    else return NULL;
}//neeed to write more two function
 int main(){
     /*         1
                /\
              2    3
            /\   /\
         4   5 6  7
             /\
            8   9
          /
        10   */
     node* root= new node(1);
     root->left= new node(2);
     root->right= new node(3);
     root->left->left= new node(4);
     root->left->right= new node(5);
     root->right->left= new node(6);
     root->right->right = new node(7);
     root->left->right->left= new node(8);
     root->left->right->right = new node(9);
     root->left->right->left->left= new node(10);
     int height=0;
     cout<< "LCA : "<<LCA(root,10,9)->data<<endl;
     return 0;
 }