#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    float knapsack_capcity;
    cin>>knapsack_capcity;
    vector< vector< float> > knap;
    for( int i=0;i<n;i++){
        float  value, weight;
        float ratio;
        cin>>value>>weight;
        ratio=(float)(value/weight);
        knap.push_back({value,weight,ratio});
    }
    sort(knap.begin(),knap.end(),[&](vector<float> &a, vector<float> &b){
        return a[2]>b[2];/*sort this vector according to ratio  of value and weight*/
    });
    float  ans=0;
    for( int i=0;i<n;i++){
        if(knapsack_capcity >= knap[i][1]){
            cout<<knap[i][0]<<" "<<knap[i][1] <<endl;
            ans += knap[i][0];
            knapsack_capcity  = knapsack_capcity - knap[i][1];
            continue;
        }
        ans +=knapsack_capcity*knap[i][2] ;
         cout<<knapsack_capcity*knap[i][2]<<" "<<knapsack_capcity <<endl;
        knapsack_capcity=0;
        break;
    }
    cout<<ans<<endl;
    return 0;
}