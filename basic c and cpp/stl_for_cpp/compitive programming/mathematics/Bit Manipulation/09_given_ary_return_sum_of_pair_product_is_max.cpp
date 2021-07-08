/*given array find the sum of the pair such that their prodct is maximu*/
/*Brute froce algarithms*/
#include<bits/stdc++.h>
using namespace std;
int pairsum( int* arr, int n){
    int Darr[n][n]={0};
    int maxval= INT_MIN;
    for( int i=0; i< n;i++){
        for(int j=0; j<n ;j++){
            if(i!=j){
                Darr[i][j]=arr[i]*arr[j];
                maxval= ( maxval < Darr[i][j] ) ? Darr[i][j] : maxval ;

            }
            
        }
    }
    for( int i=0; i<n;i++){
        for( int j=i; j<n ;j++){
            if(maxval== Darr[i][j]  && i!=j)
             {   cout<<arr[i]<<" "<<arr[j]<<endl;
                 return (arr[i] + arr[j]);
                 }
        }
    }
    return INT_MIN;

}
 int main(){
     int n;
     cin>>n;
      int arr[n];
     for( int i=0; i<n ;i++){
         cin>>arr[i];
     }
     cout<<pairsum( arr , n)<<endl;
     return 0;
 }
