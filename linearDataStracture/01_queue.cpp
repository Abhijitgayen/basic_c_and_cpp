#include<bits/stdc++.h>
using namespace std;
int main(){
     queue<int>qu;
     qu.push(1);
     qu.push(2);
     while(!qu.empty()){
          cout<<qu.front()<<" ";
          qu.pop();
     }cout<<endl;
     qu.push(5);
     qu.push(6);
     cout<<qu.size()<<endl;
     queue<int>qu1;
     qu1.push(12);
     qu.swap(qu1);//using swap function we also able to swap to queue
     while (!qu1.empty())
     {
          cout<<qu1.front()<<" ";
          qu1.pop();
     }cout<<endl;
     while(!qu.empty()){
          cout<<qu.front()<<" ";
          qu.pop();
     }cout<<endl;
     
     return 0;
}