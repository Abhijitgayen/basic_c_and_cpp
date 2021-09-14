#include<bits/stdc++.h>
using namespace std;
 int main(){
      stack<int>st;
      st.push(1);
      st.push(2);
      while(!st.empty()){
           cout<<st.top()<<" ";
           st.pop();
      }cout<<endl;
      cout<<st.empty()<<endl;
      st.push(15);
      cout<<st.size()<<endl;
      stack<int>st1;
      st1.push(75);
      st.swap(st1);//using swap we also able to swap two stack
      while(!st.empty()){
           cout<<st.top()<<" ";
           st.pop();
      }
      cout<<endl;
      while(!st1.empty()){
           cout<<st1.top()<<" ";
           st1.pop();
      }
      return 0;
 }