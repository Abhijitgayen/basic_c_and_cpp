#include<bits/stdc++.h>
using namespace std;
int main(){
     //using deque we able to insert data before and end of this data strctutre.
     //but using queue one can insert only only before (back).
     //we also access data before and end of strcture by deueue.
     deque<int>dq;
     dq.push_back(2);
     dq.push_back(7);
     dq.push_back(9);
     dq.push_back(12);
     dq.push_front(45);
     dq.push_front(123);
     while(!dq.empty()){
          cout<<dq.front()<<" ";
          dq.pop_front();
     }
     cout<<endl;
     dq.push_back(2);
     dq.push_back(7);
     dq.push_back(9);
     dq.push_back(12);
     dq.push_front(45);
     dq.push_front(123);
     dq.pop_back();
      while(!dq.empty()){
          cout<<dq.front()<<" ";
          dq.pop_front();
     }cout<<endl;
     dq.push_back(2);
     dq.push_back(7);
     dq.push_back(9);
     dq.push_back(12);
     dq.push_front(45);
     dq.push_front(123);
     deque<int>dq1;
     dq1.push_back(4);
     dq1.push_back(5);
     dq1.push_back(6);
     dq1.swap(dq);//using swap function one able to swap to deque
     while(!dq1.empty()){
          cout<<dq1.front()<<" ";
          dq1.pop_front();
     }
     cout<<endl;
     cout<<dq.back()<<endl;
     return 0;
}