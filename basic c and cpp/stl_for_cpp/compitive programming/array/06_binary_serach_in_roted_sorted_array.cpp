#include<bits/stdc++.h>
using namespace std;
 int find_privot( vector<int> arr, int l, int r){
     if(l>r){
         return 0;
     }
     if(l==r){
         return l;
     }
     else{
         int mid=(l+r)/2;
         if(arr[mid] > arr[mid+1]){
             return mid;
         }
         if(arr[ mid] < arr[ mid-1]){
             return mid-1;
         }
         if(arr[l]<arr[mid]){
             return find_privot(arr,l,mid-1);
         }
         else return find_privot(arr,mid+1,r);
     }
 }
 int binary_search( vector< int> arr, int key, int l , int r){
    if(l <=r){
         int mid = (l+r)/2;
         if(arr[mid]==key){
             return mid;
         }
         if(arr[mid] > key){
             return binary_search(arr, key,l,mid-1);
         }
         else return binary_search(arr, key,mid+1,r);
    }
    return -1;
}
 int search_in_array( vector<int> arr, int key){
     int privot= find_privot( arr, 0 , arr.size()-1);
     //return the position of max element in this array
     //cout<<arr[privot]<<endl;
     if(arr[privot]==key){
         return privot;
     }
     if(arr[0] <key){
         return binary_search(arr,key,0,privot-1);
     }
     else return binary_search(arr,key,privot+1,arr.size()-1);
 }
void print_array( vector< int> arr){
    vector< int> :: iterator it;
    for( it =arr.begin(); it!= arr.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
}
int main( ){
    vector< int> arr;
    arr.assign({4 , 5 , 6 , 7, 1 ,2, 3});//assinged in the vector
    //sort(arr.begin(), arr.end());
    print_array(arr);
    if(search_in_array(arr,5)==-1){
        cout<<"it is not there"<<endl;
    }
    else{
        cout<<"we got it in this by binary search"<<endl;
    }
    if(search_in_array(arr,51)==-1){
        cout<<"it is not there"<<endl;
    }
    else{
        cout<<"we got it in this by binary search"<<endl;
    }
    if(search_in_array(arr,1)==-1){
        cout<<"it is not there"<<endl;
    }
    else{
        cout<<"we got it in this by binary search"<<endl;
    }


    return 0;
}