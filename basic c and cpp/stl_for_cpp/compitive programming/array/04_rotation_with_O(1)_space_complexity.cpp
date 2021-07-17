#include<bits/stdc++.h>
using namespace std;
void swap_in( vector< int> &vec, int l, int r){//(r-l)/2 operation
    if(l>=r){
        return ;
    }
    while(l<r){
        int temp=vec[l];
        vec[l]=vec[r];
        vec[r]=temp;
        l++;r--;
    }

}
//time complexity O(n);
//sapce complexity O(1);
void rotation( vector< int> &vec, int n, int d){
   swap_in(vec,0,d-1);// (d)/2
    swap_in(vec,d,n-1);//(n-d)/2
    swap_in(vec,0,n-1);//n/2
}
int main(){
     int n,d;
     cin>>n>>d;
     int val;
     vector< int > vec;
     for( int i=0 ; i< n;i++){
         cin>>val;
         vec.push_back(val);
     }
     rotation(vec, n,d);
     for(int i=0 ; i<n ;i++){
         cout<<vec[i]<<" ";
     }
    return 0;
}