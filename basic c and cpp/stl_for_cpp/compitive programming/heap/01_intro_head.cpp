#include<bits/stdc++.h>
using namespace std;
//we try to implimented heap using array
//therea re two types of heap
//1. maxHeap
// 2. minHeap
//heap in a nearly complete binary tree
//haed->i
//child: left -> 2*i+1, right -> 2*i+2
//if child k the parent is k-1/2 or k-2/2
int search( vector< int> a,int key){
    for( int i=0; i< a.size(); i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;

}
void heapify(vector< int> &a, int i , int n){
    int maxi=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l < n && a[maxi] < a[l]){
        maxi=l;
    }
    if(r < n && a[maxi] < a[r]){
        maxi=r;
    }
    if(maxi!=i){
        swap(a[i],a[maxi]);
        heapify(a,maxi,n);
    }
}
void heap( vector< int> & a){
    int n=a.size();
    for( int i=(n/2); i>=0;i--){
        heapify(a,i,n);
    }
}
void delete_in_heap( vector< int> &a, int i){
    swap(a[i],a[a.size()-1]);
    heapify(a,0,a.size()-2);
}
int main(){
    vector< int> vec;
    int k;
    cin>>k;
    int val;
    for( int i=0 ; i<k; i++){
        cin>>val;
        vec.push_back(val);
    }
    heap(vec);
    for( int i=0; i<k;i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    int key;
    cin>>key;
    int b=search(vec,key);
    if(b!=-1){
        delete_in_heap(vec,b);  
    }
     for( int i=0; i<k-1;i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    return 0;
}