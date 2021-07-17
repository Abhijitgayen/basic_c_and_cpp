#include<bits/stdc++.h>
using namespace std;
//time complexit : o(n)
//sapce compplexity : o(n)
 vector< int> rotated_right( vector< int> vec, int n, int d){
     vector< int> v(n);
     d=d%n;
     for( int i=0 ; i<n ;i++){
         v[i]=vec[(d+i)%n];
     }
    //for left rotation
    // for( int i=n-1; i>=0 ;i--){
    //     v[(i+d)%n]=vec[i];
    // }
     return v;
 }
int main( ){
    int n, val;
    cin>>n;
    vector< int> vec;
    for( int i=0 ;i<n;i++){
        cin>>val;
        vec.push_back(val);
    }
    int d;
    cin>>d;
    vec=rotated_right(vec,n,d);
    cout<<"Rotation Right"<<endl;
    for( int i=0 ; i< n; i++){
        cout<<vec[i]<<" ";
    } cout<<endl;

    return 0;
}