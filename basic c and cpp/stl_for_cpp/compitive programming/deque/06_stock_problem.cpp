#include<bits/stdc++.h>
using namespace std;
//given an array that is indicate the data of stock market 
// of every day
//where you need to find the no of days where stock value 
//is less than the last day according to last data.
vector< int> no_stock(vector< int > a){
    vector< int> ans;
    stack< pair<int,int> > st;
    for(int i=0;i<a.size(); i++){
        if(st.empty() || st.top().first > a[i]){
            st.push({a[i],1});
            ans.push_back(1);
            break;
        }
        int sum=1;
        while(!st.empty()  && st.top().first <= a[i]){
            sum += st.top().second;
            cout<<sum<<endl;
            st.pop();
        }
        st.push({a[i],sum});
        ans.push_back(sum);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector< int > vec(n);
    for( int i=0 ; i<n ;i++){
        cin>>vec[i];
    }
    vector< int> arr=no_stock(vec);
    for( int i=0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}