#include<bits/stdc++.h>
using namespace std;
void swap( int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void heapify( vector< int> &a, int i, int n){
    int maxindex=i;
    int l=2*i+1;
    int r=2*i+2;
    //we need to find maxindex
    if( l<n &&  a[maxindex] < a[l]){
        maxindex=l;
    }
    if( r<n &&  a[maxindex] < a[r]){
        maxindex=r;
    }
    if(maxindex!=i){
        swap(a[i],a[maxindex]);
        heapify(a,maxindex,n);
    }
}
void heapsort(vector< int > & a){
     int n= a.size();
     for( int i=(n/2); i>= 0;i--){//for making heap
         heapify(a,i,n);
     }
     for( int i=n-1; i>=0;i--){
          swap(a[0],a[i]);
          heapify(a,0,i);
     }
}
int main(){
    int n;
    cin>>n;
    int val;
    vector< int> vec;
    for( int i=0; i<n; i++){
        cin>>val;
        vec.push_back(val);
    }
    heapsort(vec );
    for( int i=0 ; i< n;i++){
        cout<<vec[i]<< " ";
    }cout<<endl;
    return 0;
}