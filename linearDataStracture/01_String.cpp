#include<bits/stdc++.h>
using namespace std;
int main(){
     string s="hello i am";
     cout<<s<<endl;
     s+=" ok";//general addition here work for concatination of two string
     cout<<s<<endl;
     cout<<s.size()<<endl;
     cout<<s.at(11)<<endl;
     s.append(" ok Abhijit");//one can also use to append string using this function
     cout<<s<<endl;
     s.clear();//using clear one can clear all data in this string
     cout<<s<<endl;
     s.assign("ok");//using assing function one can assign string
     cout<<s<<endl;
     s.pop_back();//using push_back one can pop element(one char) of string from back
     s.push_back('c');//using push_back one can add element(one char) of string from back
     cout<<s<<endl;
     s.erase(0,1);
     cout<<s<<endl;
     s.append("op");
     for(auto it=s.begin();it!=s.end();it++){
          cout<<*it<<endl;
     }
     string s1="hello";
     cout<<s.compare(s1)<<endl;//s.compare(s1) use to compare two string. it also return either 0(same) or -1(not same)
    cout<< s.back()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.find('o')<<endl; //use to find any character in string s
    s.swap(s1);
    cout<<s<<endl;
    cout<<s.substr(1,3)<<endl;//more importent function to get substring using this function s.substr(start,end);
    cout<<s<<endl;
     return 0;
}