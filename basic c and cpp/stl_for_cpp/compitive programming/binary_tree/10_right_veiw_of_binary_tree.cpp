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
/*here we use level treversal*/
void rightVeiw( node * root){
    if(root==NULL){
        return ;
    }
    queue< node *> qu;
    qu.push(root);
    while(!qu.empty()){
        int n= qu.size();
        for( int i=0; i<n;i++){
            node* temp=qu.front();
            qu.pop();
            if(i == n-1){
                cout<<temp->data<<" ";
            }
            if(temp->left != NULL){
                qu.push(temp->left);
            }
            if(temp->right != NULL){
                qu.push(temp->right);
            }
        }
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
    rightVeiw(root);
    cout<<endl;
     /*         1
               /\
             2   3
             \
              4
            / \
         5    6
     */
    node * root1 = new node(1);
    root1->left=new node(2);
    root1->right= new node(3);
    root1->left->right= new node(4);
    root1->left->right->left = new node(5);
    root1->left->right->right= new node(6);
    rightVeiw(root1);
    cout<<endl;

    return 0;
}