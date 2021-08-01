#include <bits/stdc++.h>
using namespace std;
bool isdivisiable(string st)
{
     long long even_sum = 0;
     long long odd_sum = 0;
     for (int i = 0; i < st.size(); i++)
     {
          if(i%2==0){
               even_sum+=(int)st[i]-'0';
          }
          else{
               odd_sum += (int)st[i]-'0';
          }
     }
     if((even_sum-odd_sum)%11==0){
          return true;
     }
     return false;
}
int main()
{
     string s;
     cin >> s;
     if (isdivisiable(s))
          cout << "yes" << endl;
     else
          cout << "no" << endl;
     return 0;
}