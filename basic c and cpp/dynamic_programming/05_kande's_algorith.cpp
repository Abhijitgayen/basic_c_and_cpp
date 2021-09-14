// Given an array tou need to find the max sub array sum of given array of size nJ
#include<bits/stdc++.h>
 using namespace std;
  int main(){
        int n;
         cin>>n;
         vector<int> arr(n,0);
         for( int i=0;i<n;i++){
              cin>>arr[i];
         }
     //     this is a ALGORITHOM OF THIME COMPLEXITY OF o(N)
     int max_pro=0;
     int max_ans=INT_MIN;
     for( int i=0;i<n;i++){
          max_pro+=arr[i];
          if(max_ans < max_pro)max_ans=max_pro;
          if(max_pro<0)max_pro=0;//we delete the all tream before i
     }
      cout<<max_ans<<endl;
       return 0;
  }
