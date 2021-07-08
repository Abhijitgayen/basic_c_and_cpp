/* here in the stl there are two type of data stracture for hasing 
1. Maps ( inplemented by red black -tree, insertion and accessing O(log(n)))
2.unorder MAps (implemented by Hash tables(array of buckets), so intsertion  O(1)(on average), accessing O(1) (on average))

in map
key   value (where key and value is int)
map<int,int> mp;

in unorder amp
unordered_map<int, int> umap;
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int , int > mp;
    //map[key]=value;
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    for( int i=0; i<n ;i++){
        mp[arr[i]]++;
    }
    map < int , int> :: iterator it;
    for( it=mp.begin(); it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
