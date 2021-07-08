#include <iostream>
#include <string>
using namespace std;


int asciiValue(char c){
     return int(c);
 }

int main(){
    string str;
    cout<<"Enter your name : ";
    getline(cin,str);
    int findValue = 0;

    for(int i =0;i<str.length();i++){
        if(str[i]!=' '){
            findValue += asciiValue(str[i]); 
        }
    }
    cout<<"\tSUM of ASCII values of your name is "<<findValue<<endl;


    return 0;
}
