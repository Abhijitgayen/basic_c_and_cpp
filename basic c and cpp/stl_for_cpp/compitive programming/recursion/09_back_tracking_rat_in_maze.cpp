#include<bits/stdc++.h> 
using namespace std;
 bool isSafe( int ** arr, int x, int y, int n){
     if( x<n  &&  y<n  &&  arr[x][y]==1 ){
         return true;
     }
     return false;
 }
 bool ratinmaze( int** arr, int x, int y, int n,int ** solutionArr){
     if(x==n-1 && y==n-1 ){
         solutionArr[x][y]=1;
         return true;
     }
     if(isSafe(arr,x,y,n)){
         solutionArr[x][y]=1;
         if(ratinmaze(arr,x+1,y,n,solutionArr)){
             return true;
         }
         if(ratinmaze(arr,x,y+1,n,solutionArr)){
             return true;
         }
         solutionArr[x][y]=0; //back tracking
         return false;
     }
     return false;
 }
int main(){
    /*
    1  0  1  0  1
    1  1  1  1  1
    0  1  0  1  0
    1  0  0 1  1
    1  1  1  0  1
    */
    int n; cin>>n;

    int ** arr= new int*[n];
    for( int i=0 ; i< n;i++){
        arr[i]= new  int[n];
    } 

    for( int i=0 ; i< n;i++){
        for( int j=0 ; j<n ;j++){
            cin>> arr[i][j];
        }
    }

    int ** solarr= new int*[n];
    for( int i=0 ; i< n;i++){
        solarr[i]= new  int[n];
        for( int j=0; j<n;j++){
            solarr[i][j]=0;
        }
    } 

    if(ratinmaze(arr,0,0,n,solarr)){
        for( int i=0 ; i< n;i++){
        for( int j=0 ; j<n ;j++){
            cout<<solarr[i][j]<< "  ";
        }cout<<endl;
    }

    }
    return 0;
}