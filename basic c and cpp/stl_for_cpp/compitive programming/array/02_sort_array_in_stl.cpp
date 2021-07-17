#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     int arr[n];
     for( int i=0 ; i<n ;i++){
         cin>>arr[i];
     }
    //   sort this array
    sort(arr,arr+(n-1));/*we need here begin and end pointer to sort array*/
    for( int i=0 ;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    // for vector
    vector<int> vec_arr;
    int val;
    for( int i=0; i<n; i++){
        cin>>val;
        vec_arr.push_back(val);
    }
    sort(vec_arr.begin(),vec_arr.end());
    for( int i=0; i<n;i++){
        cout<<vec_arr[i]<<" ";
    }cout<<endl;
    /*another special types of sorting*/
    vector<pair<int,string> > vec_st;
     string ch;
     int p;
    for( int i=0; i<n;i++){
        cin>>p>>ch;
        vec_st.push_back({p,ch});
    }
   sort( vec_st.begin(),vec_st.end(), [&](pair<int,string> &a, pair< int, string> &b){
    return a.first > b.first;
   });
   /* for( int i=0 ;i<n; i++){
        cout<< vec_st[i].first<<"  "<<vec_st[i].second<<endl;
    }*/
    for( int i=n-1 ;i>=0; i--){
        cout<<vec_st[i].second <<" " ;
    }cout<<endl;
    return 0;
}