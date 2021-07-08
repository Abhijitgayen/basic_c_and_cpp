#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int key,arr[n];
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    vector<pair<int,int>> v;
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){//x=arr[j] and y=arr[i] (the position of x is left of the position of y).
            pair<int,int> p;
            if(arr[j]%arr[i]==key){
                p.first=arr[j];
                p.second=arr[i];
                v.push_back(p);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<"["<<v[i].first<<","<<v[i].second<<"]"<<endl;
    }
    return 0;
}