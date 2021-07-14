#include<bits/stdc++.h>
using namespace std;
/*time complexity of this algarithm is O(n^2)
we need to find a good algarithm for it*/
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
/*diameter of tree give us the longest path from one node to 
another node this path may be passing through root or may 
not passing throught root. we will see it later*/
int height( node* root){
    if(root==NULL){
        return 0;
    }
   int lef= height(root->left);
   int rei=height(root->right);
   return( max(lef,rei)+1);
}
int diameter_tree( node * root){
    if(root==NULL){
        return 0;
    }
    int leftheight=height(root->left);
    int rightheigt= height(root->right);
    int currdiameter= leftheight+rightheigt+1;

    int leftdiameter=diameter_tree(root->left);
    int rightdiameter= diameter_tree(root->right);
    return(max(max(currdiameter,leftdiameter),rightdiameter));
}
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
     cout<< "diameter of this tree is : "<<diameter_tree(root)<<endl;
     return 0;
 }