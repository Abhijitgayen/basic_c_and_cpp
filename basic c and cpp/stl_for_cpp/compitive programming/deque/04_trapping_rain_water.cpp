#include<bits/stdc++.h>
using namespace std;
int trapping_water(vector< int> vec){
    int sum =0;
    stack< int> st;
    for(int i=0 ; i< vec.size(); i++){
            while(st.empty()==false && vec[st.top()]  < vec[i]){
                int curr=st.top();
                 st.pop();
                int len;
                if(st.empty()==true){
                    break;
                }
                    len=(i-st.top()-1);
                    sum += (min(vec[st.top()],vec[i])-vec[curr])*len;
            }
            st.push(i);
    }
    return sum;
}
 int main(){
     int n;
     cin>>n;
     vector< int > vec(n);
     for( int i=0 ;i< n;i++){
         cin>>vec[i];
     }
     cout<<trapping_water(vec)<<endl;
     return 0;
 }