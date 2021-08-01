#include<bits/stdc++.h>
using namespace std;
int knapskack(vector< int> value, vector< int> weight, int n,int maxw){
    if(n < 0 || maxw ==0){
        return 0;
    }
    if(maxw < weight[n]){
        return knapskack(value,weight,n-1,maxw);
    }
    return max(knapskack(value,weight,n-1,maxw), knapskack( value, weight, n-1,maxw-weight[n] )+value[n]);
}
int main(){
    vector<int> weight;
    weight.assign({20,10,30});
    vector< int> value;
    value.assign({100,60,150});
     int maxw=50;
    cout<<knapskack(value,weight,value.size()-1,maxw);
    return 0;
}