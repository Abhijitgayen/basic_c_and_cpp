#include<bits/stdc++.h>
using namespace std;
 bool redundant_paranthesis(string s){
     bool flg=false;
     stack<char>st;
     for( int i=0; i< s.size(); i++){
         if(s[i]=='(' || s[i]=='+' || s[i]=='-' ||s[i]=='*'||s[i]=='/'){
             st.push(s[i]);
         }
         else{
             if(s[i]==')'){
                 if(st.top()=='('){
                    flg=true;
                    break;
                    }
                 while (st.top()!='(')
                 {
                     st.pop();
                 }
                 st.pop();                 
            }
         }
     }
     if(st.top()=='('){
         flg=true;
     }
     return flg;
 }
int main(){
    string s;
    cin>>s;
    cout<<redundant_paranthesis(s);
    return 0;
}