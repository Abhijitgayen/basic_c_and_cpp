#include<bits/stdc++.h>
using namespace std;
/*mother vertex of the  garph is  node such that
 there are a path form mother to every node of this graph*/
 /*for undirected connected graph , this graph  has always mother vertex.
 for dircted connected graph may or may not be have mother vertex */
class graph{
     private :
          int v;
          vector<int> *adj;
     public:
          graph( int n){
              this-> v=n;
              adj= new vector<int>[n];
          }
          void add_edge( int a, int b){
               adj[a].push_back(b);
               //adj[b].push_back(a);
          }
          void printgraph( ){
               for( int i=0; i<v;i++){
                    cout<< i<<"->";
                    vector<int> :: iterator it;
                    for( it=adj[i].begin();it!=adj[i].end();++it){
                         cout<<*it<<" ";
                    }cout<<endl;
               }
          }
          void DFSUntill(int s, vector<bool> & visited){
               visited[s]=true;
               for(auto it=adj[s].begin(); it!=adj[s].end();++it){
                    if(visited[*it]==false){
                         visited[*it]=true;
                         DFSUntill(*it,visited);
                    }
               }
          }
          int find_mother_node(){
               vector<bool> visited(v,false);
               int m=0;
               for( int i=0; i<v;i++){
                    if(visited[i]==false){
                         DFSUntill(i,visited);
                         m=i;
                         // cout<<i<<endl;
                    }
               }
               //m may be the mather node we need to cheack this
               fill(visited.begin(),visited.end(),false);
               DFSUntill(m,visited);
               for( int i=0; i<v; i++){
                    if(visited[i]==false){
                         return -1;
                    }
               }
            return m;
          }
};
int main(){
     
     int n,m;
     cin>>n>>m;
     graph g=graph(n);
     for( int i=0; i<m;i++){
          int a,b;
          cin>>a>>b;
          g.add_edge(a,b);
     }
     g.printgraph();
     cout<<g.find_mother_node()<<endl;

     return 0;
}