#include<bits/stdc++.h>
using namespace std;
/*here we define 
1.  push()
2. pop()
3. Top()
4. empty()
5.size()
*/
/* stack is a linear data stracture such that it has a special
 property is last in fast out*/
class Stack{
    int * arr;
    int top;
     int n;
    public:
        Stack( int val){
            n=val;
            arr=new int[n];
            top=-1;
        }
        void push( int value){
            if(top>=n-1){
                cout<<" over flow"<<endl;
                return;
            }
            top++;
            arr[top]=value;
        }
        void pop(){
            if(top==-1){
                cout<<"there are nothing to pop"<<endl;
                return ;
            }
            top--;
        }
        int Top(){
            if(top==-1){
                cout<<"there are nothing in the stack"<<endl;
                return -1;
            }
            return arr[top];
        }
        bool empty(){
            return (top==-1);
        }
        int size(){
            return top+1;
        }
};
int main(){
    Stack sk=Stack(5);
    int n , val;
    cin>>n;
    for( int i=0 ;i<n;i++){
        cin>>val;
        sk.push(val);
    }
    cout<<"size of stack is : "<<sk.size()<<endl;
    sk.push(6);
    while( !sk.empty()){
        cout<<sk.Top()<<"->";
        //cout<<"size of stack is : "<<sk.size()<<endl;
        sk.pop();
    }cout<<endl;
    sk.pop();
    
    return 0;
}