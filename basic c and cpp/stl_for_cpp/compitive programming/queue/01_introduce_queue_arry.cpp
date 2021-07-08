#include<bits/stdc++.h>
using namespace std;
/*using  array to make queue there are big problem  for overfow in queue for 
ignor this type of error we need to use link list */
/*queue -> fast in fast out*/
class Queue{
        int *arr;
        int back;
        int font;
        int n;
  public:
        Queue( int no){
            n=no;
            arr= new int(n);
            font=-1;
            back=-1;
        }
    void enqueue( int val){
        if(back >= n-1){
            cout<<"queue is overflow"<<endl;
            return ;
        }
        if(font==-1 && back==-1 ){
            font++;
            back++;
            arr[back]=val;
            return ;
        }
        back++;
        arr[back]=val;
    }
    void dequeue(){
        if(font ==-1  || back <  font){
            cout<<"queue is empty"<<endl;
            return;
        }
        font++;
    }
    int peek(){
        if(font== -1 || back<font){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[font];
    }
    bool empty(){
        if(font==-1 || back< font){
            return true;
        }
        return false;
    }
};
int main(){
    Queue qu=Queue(4);
    int n, val;
    cin>>n;
    for( int i=0; i<n; i++){
        cin>>val;
        qu.enqueue(val);
    }
    while(!qu.empty()){
        cout<<qu.peek()<<"  ";
        qu.dequeue();
    }
    return 0;
}