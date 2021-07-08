#include<bits/stdc++.h>
using namespace std;
/*Here we apply xor operator to all element in  this array */
 int uniqueNumber( int * arr, int n){
     int sumxor=0;
     for( int i=0; i<n; i++){
         sumxor= sumxor^ arr[i];
     }
     return sumxor ;
 }

int main(){
    int n;
    cin>> n;
    int arr[n];
    for( int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout <<uniqueNumber( arr, n)<<endl;
    return 0;
}