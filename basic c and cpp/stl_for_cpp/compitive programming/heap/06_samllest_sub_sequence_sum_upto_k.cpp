#include<bits/stdc++.h>
using namespace std;
//given an array and a terget value k .you need to find the smallest subsequeence 
//such that the sum is at most k
vector<int> smallestsubseq( vector< int> a, int k){
    vector< int> ans;
    priority_queue<int,vector<int> > pq;//maxheap
    for( int i=0; i< a.size();i++){
        pq.push(a[i]);
    }
    int sum=0;
    while(!pq.empty() && sum < k){
        sum+=pq.top();
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for( int i=0; i<n;i++){
        cin>>vec[i];
    }
    vector<int> smlsub= smallestsubseq(vec,k);
    for( int i=0; i<smlsub.size();i++){
        cout<<smlsub[i]<<" ";
    }cout<<endl;
    return 0;
}