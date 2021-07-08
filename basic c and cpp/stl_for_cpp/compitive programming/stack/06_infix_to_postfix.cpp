#include<bits/stdc++.h>
using namespace std;
// (a-b/c)*(a/k-l) -> abc/-ak/l-*
int prec( char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'|| c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }   
}
string infix_to_postfix( string str){
    stack <char> st;
    string res;
    for( int i=0;i<str.size();i++){
        if((str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z')){
            res+=str[i];
        }
        else if( str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else{
            while(!st.empty() && prec(st.top())>prec(str[i])){
                res+=st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
 return res;
}
int main(){
    string str;
    getline(cin,str);

    cout<<infix_to_postfix(str)<<endl;
    return 0;
}