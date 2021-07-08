#include<bits/stdc++.h>
using namespace std;
/*Given array is a sorted arry we able to appy binary search here*/
int binary_search( int arr[],int n, int val){
    int l=0;
    int r=(n-1);
    while(l<r){
        int mid=(l+r)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]>val){
            r=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    return -1;
}
int possible_array(int arr[],int n, int val){
    int pos=binary_search( arr,n,val);
    int total=1;
    if(pos!=-1){
        for(int i=pos+1;i<n;i++){
            if(arr[i]==val){
                total++;
            }
            else{
                break;
            }
            
        }
        for(int i=pos-1;i>=0;i--){
            if(arr[i]==val){
                total++;
            }
            else{
                break;
            }
            
        }
    }
    return total;

}
int main(){
    int n;
    cin>>n;
    int val;
    cin>>val;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<possible_array(arr,n,val)<<endl;

    return 0;
}