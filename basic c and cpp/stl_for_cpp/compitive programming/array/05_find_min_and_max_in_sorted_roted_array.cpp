#include<bits/stdc++.h>
using namespace std;
void print( vector< int > arr){
    for( int i=0 ; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int find_max(vector< int> arr){
    for( int i=1 ; i< arr.size(); i++){
        //avarage time complexity O(n)
        if(arr[i] < arr[i-1]){
            return arr[i-1];
        }
    }
    return arr[arr.size()-1];
}
 int find_min( vector< int> arr){
     for( int i=1 ; i< arr.size(); i++){
          //avarage time complexity O(n)
        if(arr[i] < arr[i-1]){
            return arr[i];
        }
    }
    return arr[0];
 }
 vector< int> find_max_min_any_array( vector< int > arr){
     int min=1e5+2;
     int max =-1e4;
      //avarage time complexity O(n)
     for( int i=0 ; i< arr.size(); i++){
         if(max<arr[i]){
             max=arr[i];
         }
         if(arr[i]< min){
             min= arr[i];
         }
     }
     vector< int> arr2;
     arr2.push_back(max);
     arr2.push_back(min);
     return arr2;
 }
 int main(){
      int n;
     cin>> n; 
      int val;
      vector< int > arr;
     for( int i=0 ; i< n;i++){
         cin>>val;
         arr.push_back(val);
     }
     print (arr);
    cout<<"max element : "<< find_max(arr)<<endl;
     cout<<"min element : "<<find_min(arr)<<endl;
     //find max and min in any array
     //try by another function
     vector< int> arr1;
     arr1.assign({4,5,1,9,12,16,13});
     vector< int > arr2=find_max_min_any_array(arr1);
     cout<<"max :"<<arr2[0]<<" & min :"<<arr2[1]<<endl;
     return 0;
 }