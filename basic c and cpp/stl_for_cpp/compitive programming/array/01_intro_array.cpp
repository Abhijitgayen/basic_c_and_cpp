#include<bits/stdc++.h>
using namespace std;
int main(){
    /*try to creat a array of integers*/
    /*for every data types we able to define array*/
    /*vector is agood way to dife a array in stl libary*/
    int n;
    cin>>n;
    vector<int> arr(n);/*array of size n*/
    for( int i=0; i<n; i++){
         cin>>arr[i];
     }
    for( int i=0 ; i< arr.size(); i++)
            cout<<arr[i]<<" ";
    cout<<endl;
    /*how to initalized in array in vector*/
    vector< int> arr2(n,2);
    for( int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    /*in general the repesentation of array is*/
    int arr3[n] ={0};/*we able to initalized in this types of array*/
    for( int i=0 ;i<n; i++){
        cout<<arr3[i]<< " ";
    }cout<<endl;
    /*another way to initalized array*/
     int arr4[]={1,10,20,30,40,50};
     int s= sizeof(arr4)/sizeof(int);/*this is a way to find the size iof array*/
     cout<<s<<endl;
     for( int i=0 ;i<s;i++){
         cout<<arr4[i]<< " ";
     }cout<<endl;

}