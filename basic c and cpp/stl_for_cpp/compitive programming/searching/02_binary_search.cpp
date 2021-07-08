#include<bits\stdc++.h>
using namespace std;
/*for binary search we need the arry that is sorted otherwise linear search is ok*/
int binary_search(int a[],int size,int key){
    int l=0;
    int r=size;
    while(r>l){
        int mid=(l+r)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            r=mid-1;
        }
        else if(a[mid]<key){
            l=mid+1;
        }
        
    }
   return -1;
     
}

int main(){
    int n;
    int key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    if(binary_search(a,n,key) ==-1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
 
}