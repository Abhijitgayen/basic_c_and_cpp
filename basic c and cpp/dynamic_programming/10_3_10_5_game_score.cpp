// Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.
#include<bits/stdc++.h>
using namespace std;
 int possible_score( int n){
      vector<int>table(n+1,0);
      table[0]=1;
      for( int i=3;i<=n;i++){
           table[i]+=table[i-3];
      }
      for( int i=5;i<=n;i++){
           table[i]+=table[i-5];
      }
       for( int i=10;i<=n;i++){
            table[i]+=table[i-10];
       }
       return table[n];
       }
int main(){
      int n;
      cin>>n;
      while(n--){
           int val;
           cin>>val;
           cout<<possible_score(val)<<endl;

      }
     return 0;
}