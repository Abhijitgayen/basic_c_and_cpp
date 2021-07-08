#include<bits/stdc++.h>
using namespace std;
void printEle( int n){
     int *q=new int  ;
     *q=10;
     cout<<"Element q ="<<*q<<"\nAnd pointer is : "<<q<<endl;
     delete (q);
    int *p= new int [n];// pointer is present in the stack but data of the array is present in the quque
    int r;
    for ( int i=0; i< n;i++){
        r=rand()%14;//rand() is use for   generateing random number generate
        cout<<r<<" ";
    }
    delete [] p;//use to clear this dynamic array . 
}
int main(){
    int n;
    cin>>n;
    printEle(n);
    return 0;
}