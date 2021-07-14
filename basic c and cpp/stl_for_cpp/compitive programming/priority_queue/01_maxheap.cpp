/*priority queue introduction*/
#include<bits/stdc++.h>
/*using priority queue we creat a maxheap here*/
using namespace std;
void print_priority_queue(priority_queue<int> qu){
    while(!qu.empty()){
        cout<<qu.top()<<"->";
        qu.pop();
    }
    cout<<endl;
}
int main(){
    priority_queue<int> qu;
    qu.push(2);
    qu.push(3);
    qu.push(-2);
    qu.push(10);
    qu.push(1);
    print_priority_queue(qu);
    return 0;
}