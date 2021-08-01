#include<bits/stdc++.h>
using namespace std;
//here give to you nxm grid you need to find the no of way to move form grid (1,1) to (n,m)
//one can move either left or down


//we able to try this by brute force
//that is by recursion
//time complexity O(2^(m+n))
//sapce complexity is O(m+n) 
//here height of the recursion tree is  ~ m+n
long long grid_tarverler( int n , int m){
    if(n==1 && m==1){
        return 1;
    }
    if(n==0 ||m==0){
        return 0;
    }
    return grid_tarverler(n-1,m)+grid_tarverler(n, m-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
         int m,n;
         cin>>m>>n;
        cout<<grid_tarverler(n, m)<<endl;
    }cout<<endl;
    return 0;
}