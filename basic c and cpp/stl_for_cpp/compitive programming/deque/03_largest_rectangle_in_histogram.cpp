#include<bits/stdc++.h>
using namespace std;
/*find the maximum rectangle  area such that it will be fited in this histogram*/
int main(){
    int n;
    cin>>n;
    vector< int> a(n);
    for( int i=0; i<n;i++){
        cin>>a[i];
    }
   vector< pair<int, int>> pr;
    int area=0;
    for( int i=0; i<n;i++){
        int minh=10000;
        for( int j=i;j<n;j++){
            minh=min(a[j],minh);
            int len=j-i+1;
            //cout<<minh<<endl;
            if(minh*len > area){
                area=minh*len;
                pr.push_back({i,j});
            }
        }
    }
    cout<<area<<endl;
    cout<<"index is : "<<pr[pr.size()-1].first<<" "<<pr[pr.size()-1].second<<endl;
    cout<<"elements are : "<<a[pr[pr.size()-1].first]<<" "<<a[pr[pr.size()-1].second]<<endl;
    return 0;
}