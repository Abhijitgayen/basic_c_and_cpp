#include<bits/stdc++.h>
using namespace std;
void reverse( string s){
    stack <string> sk;
    for( int i=0;i<s.size();i++){
        string word="";
        while(s[i]!=' '&& i<s.size()){
            word+=s[i];
            i++;
        }
        sk.push(word);
    }
     while(!sk.empty()){
         cout<<sk.top()<<" ";
         sk.pop();
     }cout<<endl;
}
int main(){
    string s;
    getline(cin,s);
    reverse(s);
    return 0;
}