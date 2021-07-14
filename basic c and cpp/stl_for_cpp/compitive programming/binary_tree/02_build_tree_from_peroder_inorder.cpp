#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};
int search(vector<int> inorder,int start, int end, int curr){
    for( int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
/*need to mwork here*/
node* buildtree( vector<int> perorder, vector<int> inorder, int start , int end){
    static int idx=0;

    if(start>end){
        return NULL;
    }
    int curr=perorder[idx];
    idx++;
    
    cout<< " " <<idx<< " "<<curr<<endl;
    if(idx > 5){
        return NULL;
    }
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(inorder,start,end,curr);
    n->left= buildtree(perorder,inorder,start,pos-1);
    n->right=buildtree(perorder,inorder,pos+1,end);
    return n;
}
void inoder_print(node* root){
    if(root==NULL){
        return ;
    }
    inoder_print(root->left);
    cout<<root->data<<" ";
    inoder_print(root->right);
}
int main(){ 
    static int n;
    cin>>n;
    vector< int> perorder(n), inorder(n);
    for( int i=0;i<n;i++){
        cin>>perorder[i];
    }
    for( int i=0;i<n;i++){
        cin>>inorder[i];
    }

    node* head=buildtree(perorder, inorder,0,(n-1));
    inoder_print(head);
    return 0;
}