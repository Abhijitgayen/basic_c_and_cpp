#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<vector<int>> mp;
    cin>>n;
    for( int i=0;i<n;i++){
        int start,end,no_of_meeting;
        cin>>no_of_meeting>>start>>end;
        mp.push_back({no_of_meeting,start,end});
    }
    sort( mp.begin(),mp.end(),[&](vector<int> &a,vector<int> &b){
        return a[2] < b[2];
    });/*here we sort the vector accoding to finishing time.......*/
    int take=1;
     cout<<"metting no "<<mp[0][0]<<" "<<mp[0][1]<<" and "<<mp[0][2]<<endl;
    int end=mp[0][2];
    for(int i=1;i <n;i++){
        if(mp[i][1]>=end){
            take++;
            cout<<"meeting no "<<mp[i][0]<<" "<<mp[i][1]<<" and "<<mp[i][2]<<endl;
            end=mp[i][2];
        }
    }
    cout<<"no of meeting take "<<take<<endl;
    return 0;
}
