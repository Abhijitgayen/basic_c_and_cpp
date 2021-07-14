#include<bits/stdc++.h>
/*using priority queue we able to create min heap*/
using namespace std;
 int main(){
     priority_queue<int, vector<int>,greater<int> > qu;
     qu.push(-4);
     qu.push(5);
     qu.push(15);
     qu.push(1);
     qu.push(12);
     qu.push(1);
     cout<<"size Of this prioirty queue is : "<<qu.size()<<endl;
     while(!qu.empty()){
         cout<<qu.top()<< " ";
         qu.pop();
     }
     return 0;
 }
 /*need to learn about more about pirority queue
 we need for greedy algarith*/