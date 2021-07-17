#include<bits/stdc++.h>
using namespace std;
 void left_rotation( vector<int> &arr){
     int temp=arr[0];
     for( int i=0 ;i<arr.size( )-1 ;i++){
         arr[i]=arr[i+1];
     }
     arr[arr.size()-1]= temp;
}
void right_rotation( vector< int> &arr){
     int n= arr.size();
    int temp= arr[n-1];
    for(int i=n-1; i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int  main(){
    int n;
    cin>>n;
    vector< int> vec(n);
    for( int i=0 ;i<n; i++){
        cin>>vec[i];
    }
    /*left rotaed by one by one*/
    /*right rotation by one by one*/
    // left_rotation(vec);
    // cout<<"left rotation"<<endl;
    // for( int i=0 ; i<n ;i++){
    //     cout<<vec[i]<<" ";
    // }cout<<endl;
    right_rotation(vec);
    cout<<"right rotation"<<endl;
    for( int i=0 ; i<n ;i++){
        cout<<vec[i]<<" ";
    }cout<<endl;

    return 0;
}