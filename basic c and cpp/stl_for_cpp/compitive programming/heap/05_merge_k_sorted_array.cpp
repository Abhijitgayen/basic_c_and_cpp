#include<bits/stdc++.h>
using namespace std;
//here give k sorted array you need to marge those k array as that the 
//new array be also sorted.
//if we add those all elements in this priority_queue and pop those and 
//store this in the new array . then we done but time complexity be also O(n logn)
//where n is the total no of elements
//here we try to find an algorithm with time complexity is O(n).
vector< int> sorted_arr( vector< vector< int> > arr){
    vector<int> d(arr.size());
    priority_queue<pair<int,int>,vector<pair<int,int> > ,greater<pair<int,int> > > pq;
    //how to define minheap of pair
    for( int i=0; i< arr.size();i++){
        pq.push({arr[i][0],i});
        d[i]++;
    }
    vector<int> ans;
    while(!pq.empty()){
    // cout<<"hello"<<endl;
        pair<int,int> p=pq.top();
        pq.pop();
        ans.push_back(p.first);
        d[p.second]++;
        if(d[p.second] < arr[p.second].size()){
            pq.push({arr[p.second][d[p.second]],p.second});
        }
    }
    return ans;
}
int main(){
    int k;
    cin>>k;
    vector<  vector<int> > arr(k);
    for( int i=0 ;i< k;i++){
        int n;
        cin>>n;
        int val;
        for(int j=0; j<n; j++){
            cin>>val;
            arr[i].push_back(val);
        }
    }
    vector<int> a=sorted_arr(arr);
    for( int i=0 ; i<a.size();i++) {
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}