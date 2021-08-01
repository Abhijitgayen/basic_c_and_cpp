#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int val;
    priority_queue< int, vector< int> > maxHeap;
    for( int i=0; i< n;i++){
        cin>>val;
        maxHeap.push(val);
    }
    cout<<"size : "<<maxHeap.size()<<endl;
    for( int i=0; i< n; i++){
        cout<<maxHeap.top()<< " ";
        maxHeap.pop();
    }cout<<endl;
    priority_queue< int, vector< int>,greater<int> > minHeap;
     int value, k;
     cin>>k;
    for( int i=0; i<k; i++){
        cin>>value;
        minHeap.push(value);
    }
    for( int i=0; i< n; i++){
        cout<<minHeap.top()<< " ";
        minHeap.pop();
    }cout<<endl;
    return 0;
}