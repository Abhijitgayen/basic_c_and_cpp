#include<bits/stdc++.h>
/*We want to creat such matrix such that if thete are any element is 0 then the elemnt of the corrosponding  row and collum be also zero */
using namespace std;
/*complexity of this algoritham worth case is O( n*m)*/
int main(){
    int m,n;
    cin>>n;
    cin>>m;
    int arr[n][m];
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<pair< int, int> >ab;
    for( int i=0; i<n; i++){
        for( int j=0;j<m;j++){
            if(arr[i][j]==0){
                ab.push_back({i,j});
            }
        }
    }
    for( int k=0;k<ab.size();k++){
        int f=ab[k].first;
        int s=ab[k].second;
        for( int i=0;i<n;i++){
            arr[i][s]=0;
        }
        for( int j=0;j<m;j++){
            arr[f][j]=0;
        }
    }
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
 return 0;
}