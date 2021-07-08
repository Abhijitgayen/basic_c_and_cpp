 #include<bits/stdc++.h>
 using namespace std;
 void marge(int *arr, int l, int mid,int r ){
     int temp[r-l+1];
     int i=l;
     int j=mid+1;
     int k=0;
     while(i<=mid && j<=r){
         if(arr[i]>=arr[j]){
             temp[k++]=arr[j++];
         }
         else{
             temp[k++]=arr[i++];
         }
     }
     while(i<=mid){
         temp[k++]=arr[i++];
     }
     while(j<=r){
         temp[k++]=arr[j++];
     }
     for(int i=l;i<=r;i++){
         arr[i]=temp[i-l];
              }
 }
void marge_sort(int * arr, int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        marge_sort(arr,l,mid);
        marge_sort(arr,mid+1,r);
        marge(arr,l,mid,r);
    }

}
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     marge_sort(arr,0,n-1);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     return 0;
 }