#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int tw;
     cin>>tw;
     float total=0;
     vector<pair<int,int>>coll;
     for( int i=0;i<n ;i++){
         int val,wei;
         cin>>val>>wei;
         coll.push_back({val,wei});
     }
     sort( coll.begin(), coll.end(),[&](pair< int ,int> & a, pair<int, int> & b){
         float vala=(float)(a.first/a.second);
         float valb=(float)(b.first/b.second);
         return (vala>valb) ;
     });/*sorting accodrding to ratio*/
     for( int i=0;i<n ;i++){
         if(tw>coll[i].second){
             total +=coll[i].first;
             tw=tw-coll[i].second;
             //cout<<coll[i].first<<" "<<coll[i].second<<endl;
            continue;
         }
         float ratio= (coll[i].first/coll[i].second);
         //cout<<(tw*ratio)<<" "<<tw<<endl;
         total += (tw * ratio);
         tw=0;
         break;
     }
     cout<<total<<endl;
    return 0;
}