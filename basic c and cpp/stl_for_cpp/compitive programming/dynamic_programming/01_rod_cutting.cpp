/*given length of the rod with corosponding price of each size rod.
now give a fix size rod to you .you need to cut the rod such that the profite be also maximum. We observe that every problem has over leaping sub problem so we need 
to apply dynamic programming */
#include<bits/stdc++.h>
using namespace std;
/*it is done by recursion and it is top-twon */
/*if you use recursion with array to store data here , you will get memorized method in dynamic programming*/
int cut_rod( int * pri, int n){
    if(n==0){
        return 0;
    }
    int q=-10;
    for(int i=1;i<=n;i++){
        q=max(q,(pri[i]+cut_rod(pri,n-i)));
    }
    return q;
}
int main(){
    int n;
    cin>>n;
    int pri[n];
    for( int i=1;i<=n;i++){
        cin>>pri[i];
    }
    int size_of_rod;
    cin>>size_of_rod;
    cout<<cut_rod(pri,size_of_rod)<<endl;
    return 0;
}