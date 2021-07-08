#include<bits/stdc++.h>
using namespace std;
/*in this sorting method repetaion is allowed*/
void count_sort( int * arr, int n){
    int maxe=arr[0];
    for( int i=1;i<n;i++){
    maxe=max(maxe,arr[i]);       
    }
    //cout<<maxe<<endl;
  int  count[maxe+1]={0};
  for( int i=0;i<n;i++){
      count[arr[i]]++;
  }//upadted the count table
  for( int i=1;i<=maxe;i++){
      count[i] +=count[i-1];
  }
  //for( int i=0;i<=maxe;i++)cout<<count[i]<<endl;
  int sort[n];
  for( int j=n-1;j>=0;j--){
      sort[--count[arr[j]]]=arr[j];
  }//copy sort array to arr array
  for( int i=0; i<n;i++){
      arr[i]=sort[i];
  }
}
 int main(){
     int n;
     cin>> n;
     int arr[n];
     for( int i=0; i<n; i++){
         cin>>arr[i];
     }
     count_sort(arr,n);
     for( int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
      return 0;
 }