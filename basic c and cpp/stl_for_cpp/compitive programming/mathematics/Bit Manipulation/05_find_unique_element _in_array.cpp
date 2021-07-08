/**/
#include<bits/stdc++.h>
using namespace std;
vector<int> uniqueNumber( int arr[], int n){
    int temp[100]={0};
    vector<int> v;
    for( int i=0; i<n ;i++){
        temp[arr[i]]++;
    }
    for( int i=0;i< n;i++){
        if( temp[arr[i]]==1){
            v.push_back(arr[i]) ;
        }
    }
    return v ;
}
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for( int i=0;i<n;i++){
         cin>>arr[i];
     }
     vector<int> v = uniqueNumber( arr, n);
     for( int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     return 0;
 }