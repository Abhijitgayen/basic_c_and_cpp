#include<bits/stdc++.h>
using namespace std;
/*time complexity of this algarith is o(n)*/
int main(){
    int n,k;
    cin>>n>>k;
    //vector <int> a;
    vector<int> a(n);
    int val;
    for( int i=0;i<n;i++){
        cin>>a[i];
        //cin>>val;
       // a.push_back(val);
    }
    deque<int> q;
    vector<int> ans;
     for( int i=0; i<k;i++){
         while(!q.empty() and a[q.back()] < a [i]){
             q.pop_back();
         }
         q.push_back(i);
     }
     ans.push_back(a[q.front()]);
     for( int i=k; i<n;i++){
         if(q.front() == i-k){
             q.pop_front();
         }
         while(!q.empty() and a[q.back()] < a[i]){
             q.pop_back();
         }
         q.push_back(i);
         ans.push_back(a[q.front()]);
     }
    for( int i=0; i<ans.size();i++){
     cout<<ans[i]<<" ";
    }
    return 0;
}
