#include<bits/stdc++.h>
using namespace std;
/*we divide this array in k size then find the maximum value of this array in size k*/
/*time complexity is O(n)*/
int main(){
    int n; cin>>n;
    int k; cin>>k;
    //int arr[n];
    vector< int> arr(n);
    vector<int> maxl;
    for( int i=0;i<n;i++) cin>>arr[i];
    for( int i=0;i<n;){
        int maxele = 0;
        // cout<<i<<endl;
        for( int j=i;j<i+k;j++){  
            maxele = max(maxele,arr[j]);
        }
        i= i+k;
        maxl.push_back(maxele);
    }
    for( int i=0;i<maxl.size();i++){
        cout<<maxl[i]<<"  ";
    }
    return 0;
}