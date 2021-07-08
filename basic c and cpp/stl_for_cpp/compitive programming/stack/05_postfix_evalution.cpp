#include<bits/stdc++.h>
using namespace std;
/*
46+2/5*7+ -> 32
43-2*457+*+ -> 50
*/
int postfix_evalution(string str){
    stack<int> st;
    for( int i=0;i<str.size();i++){
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }
        else{
            int op2=st.top();//need to focus here
            st.pop();
            int op1=st.top();
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
    return st.top();
}
int main(){
    string s;
    getline(cin,s);
    cout<<postfix_evalution(s)<<endl;
    return 0;
}