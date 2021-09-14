#include<bits/stdc++.h>
using namespace std;
#define inf 10000007
int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          // cout<<n<<endl;
          vector<int> coin(n,0);
          for(int i=0;i<n;i++){
               cin>>coin[i];
          }
          int tot;
          cin>>tot;
          vector<int>ans(tot+1,inf);
          ans[0]=0;
          for( int i=1;i<=tot;i++){
               int a=inf;
               for(int j=0;j<n;j++){
                         if((i-coin[j])>=0)
                         a=min(a,ans[i-coin[j]]);
               }
               if(a==inf){
                    ans[i]=inf;
               }else{
                    ans[i]=a+1;
               }
          }
          if(ans[tot]!=inf)cout<<ans[tot]<<endl;
          else cout<<"not possible"<<endl;
           }
     return 0;
}