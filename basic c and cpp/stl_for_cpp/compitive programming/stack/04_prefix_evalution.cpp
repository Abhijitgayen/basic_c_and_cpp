/*
postfix -> <operand> <operand> <operator>
prefix -> <operator> <operand> <operand>
infix -> <operand> <operator> <operand>
*/
/*for prefix we move form the end of the string to start point*/
// +*-432*4+57 ->50
// +^23*2/63->12
#include<bits/stdc++.h>
using namespace std;
int prefix_evalution( string str){
    stack<int>st;
    for( int i=str.size()-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(str[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;
            }
        }
    }
    return(st.top());
}
int main(){
    string str;
    getline(cin,str);
    cout<<prefix_evalution(str)<<endl;
    return 0;
}