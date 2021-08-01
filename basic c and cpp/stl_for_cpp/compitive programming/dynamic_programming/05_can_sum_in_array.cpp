#include<bits/stdc++.h>
using namespace std;
bool can_sum( vector< int > vec, int key){
    if(key==0){
        return true;
    }
    if(key<0){
        return false;
    }
    for( int i=0 ; i< vec.size()-1;i++){
      int remain= key-vec[i];    
      if(can_sum(vec,remain)==true){
          return true;
      }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,tergetkey;
        cin>>n>>tergetkey;
        vector< int> vec(n);
        for( int i=0 ;i< n;i++){
            cin>>vec[i];
        }
        if(can_sum(vec,tergetkey)) {cout<<"yes"<<endl;}
        else cout<<"no"<<endl;
        // cout<<"helo"<<endl;

    }
    return 0;
}