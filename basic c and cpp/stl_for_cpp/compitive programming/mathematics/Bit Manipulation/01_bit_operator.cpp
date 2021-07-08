#include<bits/stdc++.h>
/*Bit operation */
using namespace std;
int main(){
     int a,b;
     cin>>a>>b;// a=4(0100) and b=3(0111)
     cout<<"  & operator ";//0100
     cout<<(a&b)<<endl;
     cout<<" | operator ";
     cout<< (a | b)<<endl;//0111
     cout<< " << operator ";
     cout<<(a<<5)<<endl;//10000000
     cout<<" >> operator ";
     cout<< ( a>>2)<<endl;//0001
     cout<<" ^ operator ";
     cout<<(a^b)<<endl;//0011
     cout<<" ~ opeartor  ";
     cout<<(~a)<<endl;
     cout<<"we check this for -5 ";
     cout<<( ~ - 5)<<endl;//1011
    return 0;
}
 