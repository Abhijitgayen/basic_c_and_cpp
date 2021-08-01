#include <bits/stdc++.h>
using namespace std;
class graph
{
private:
     int v;
     vector<int> *adj;

public:
     graph(int n)
     {
          this->v = n;
          adj = new vector<int>[n];
     }
     void add_edges(int a, int b)
     {
          adj[a].push_back(b);
     }
     void print_graph()
     {
          for (int i = 0; i < v; i++)
          {
               cout << i << "->";
               for (auto it = adj[i].begin(); it != adj[i].end(); ++it)
               {
                    cout << *it << " ";
               }
               cout << endl;
          }
     }
     bool find(int s){
          for( auto it=adj[s].begin();it!=adj[s].end(); it++){
               if(s==*it){
                    return true;
               }
          }
          return false;
     }
     //this is not working properly need to see aginn
     void transitive_martix(int s,int d, vector<vector<int>> &mp)
     {    
          if(s==d){
               if(find(s)){
                    mp[s][s]=true;
               }
          }
          mp[s][d]=true;
          for(auto it=adj[s].begin();it!=adj[s].end();it++){
               if(mp[*it][d]==false){
               cout<<*it<<"and"<<d<<endl;
                    transitive_martix(*it,d,mp);
               }
          }
     }
};

int main()
{
     int n, m;
     cin >> n >> m;
     graph g = graph(n);
     for (int i = 0; i < m; i++)
     {
          int a, b;
          cin >> a >> b;
          g.add_edges(a, b);
     }
     vector<vector<int>> mp(n, vector<int>(n, 0));
    g.print_graph();
     for( int i=0 ;i<n;i++){
          g.transitive_martix(i,i,mp);
     }
     for(int i=0; i<n;i++){
          for(int j=0; j<n;j++){
               cout<<mp[j][i]<<" ";
          }cout<<endl;
     }
     return 0;
}