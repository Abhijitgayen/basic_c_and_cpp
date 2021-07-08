#include<bits/stdc++.h>
using namespace std;
/*
0  1   2   3  4
a  e   i    o   u
and 
a--e
e -- a , i
i-- a, e,o,u
o -- i , u
u --a
curr[a]->last digits o9f the string is a
so curr[a]=prev[e]+prev[i]+prev[u]
curr[e]=prev[a]+prev[i]
curr[i]=prev[e]+prev[o]
curr[o]=prev[i]
curr[u]=prev[i]+prev[o]
*/
long count_vowels(int n){
    long mod=1e9+7;
    vector<long> prev(5,1),curr(5,0);
    for(int i=1;i<n;i++){
        curr[0]=(prev[1]+prev[2]+prev[4])%mod;
        curr[1]=(prev[0]+prev[2])%mod;
        curr[2]=(prev[1]+prev[3])%mod;
        curr[3]=(prev[2])%mod;
        curr[4]=(prev[2]+prev[3])%mod;
        swap(curr,prev);
    }
    long sum=0;
    for(int i=0;i<5;i++){
        sum+=prev[i];
    }
    return sum%mod;
}
int main(){
    int n;
    cin>>n;
    cout<<count_vowels(n)<<endl;
    return 0;
}
