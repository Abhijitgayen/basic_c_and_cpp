#include<iostream>
#include<deque>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
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
    multiset<int, greater<int> > s;
    vector<int> ans;
    for( int i=0;i<k;i++){
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    //cout<<*s.begin()<<endl;
    for( int i=k;i<n;i++){
        // cout<<*s.lower_bound(a[i-k])<<endl
        // s.lower_bound( val) return the poniter of the val
        s.erase(s.lower_bound(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }
    for( int i=0; i<ans.size();i++){
     cout<<ans[i]<<" ";
    }
    return 0;
}
//in multiset the insertion take O(nlogn) therefore the time complexity is here O(nlogn)