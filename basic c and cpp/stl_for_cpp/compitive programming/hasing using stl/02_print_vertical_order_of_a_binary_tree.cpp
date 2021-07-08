#include<bits/stdc++.h>
using namespace std;
/* if the binary tree is given in the array
 like 10 7 4 3 11 14 6
 then 10
        7   4
    3 11  14  6
    parant : i   where (i=/0)
    son 2*i+1
    son  2*i+2*/
struct node{
    int key;
    node* left;
    node* right;
};
node* newnode( int key){
    node* n= new node;
    n->key=key;
    n->left=n->right=NULL;
    return n;
}
void getverticalorder( node* root, int d, map<int, vector<int> >  &m){
    if(root==NULL){
        return;
    }
    m[d].push_back(root->key);
    getverticalorder(root->left,d-1,m);
    getverticalorder(root->right,d+1,m);
}
int main(){
    node* root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(4);
    root->left->left=newnode(3);
    root->left->right=newnode(11);
    root->right->left=newnode(14);
    root->right->right=newnode(6);
    map<int ,vector<int> > mp;
    int hdis=0;

    getverticalorder( root, hdis, mp);
    map< int, vector<int> > :: iterator it;
    for( it=mp.begin(); it!=mp.end();it++){
        cout<<it->first<<" ";
        for( int i=0;i<(it->second).size();i++){
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}