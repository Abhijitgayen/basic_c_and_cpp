// by brute froce we able to solve this problem
// first we create  all posible subarry then calculate there sum  .
//  if sum is zero print this sub array or cout this sub array
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int arr[n];
     for( int i=0;i<n;i++){
         cin>>arr[i];
     }
     int prefixsum=0;
     map<int , int>count;     
     for( int i=0;i<n;i++){
         prefixsum+=arr[i];
         count[prefixsum]++;
     }
     map< int , int > :: iterator it;
     int ans=0;
for( it=count.begin();it!=count.end();it++){
    int c=it->second;
    ans += ((c-1)*c)/2;
    if( it->first==0){
        ans+=it->second;
    }
}  
cout<<ans<<endl;  
return 0;
}
