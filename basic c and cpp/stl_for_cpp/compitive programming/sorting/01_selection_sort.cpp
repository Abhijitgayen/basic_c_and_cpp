#include<bits\stdc++.h>
using namespace std;
 int main( ){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     /*select small element in this unsorted array and set its poation using swaping*/
     for(int i=0;i<n-1;i++){
         int min_i=i;
         for(int j=i+1;j<n;j++){
             if(a[j]<a[min_i]){
                  min_i=j;
             }
             int temp=a[min_i];
             a[min_i]=a[i];
            a[i]=temp;
         }
     }
     for(int i=0;i<n;i++){
         cout<<a[i]<<" "<<endl;
     }
 }