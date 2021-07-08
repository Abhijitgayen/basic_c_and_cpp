#include<bits/stdc++.h>
/*-We want to creat such matrix such that if thete are any element is 0 then the elemnt of the corrosponding  row and collum be also zero */
using namespace std;
/*complexity of this algoritham worth case is O( n*m^2)*/
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
    for( int i=0; i<n; i++){
        for( int j=0;j<m;j++){
            if(arr[i][j]==0){
                for( int k=0;k<m;k++){
                    arr[i][k]=-1;
                }
                for( int l=0;l<n;l++){
                    arr[l][j]=-1;
                }
            }
        }
    }
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
 return 0;
}