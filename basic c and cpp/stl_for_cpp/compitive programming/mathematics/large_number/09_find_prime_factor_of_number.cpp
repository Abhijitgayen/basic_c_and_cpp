#include<bits/stdc++.h>
using namespace std;
 void find_prime_factor( long long n){
      int count=0;
      while(n%2==0){
           n=n/2;
           count++;
      }if(count!=0)
      cout<<"2"<<" "<<count<<endl;
      for( int i=3;i<=n;i=i+2){
           count=0;
           while(n%i==0){
                count++;
                n=n/i;
           }
           if(count!=0)
           cout<<i<<" "<<count<<endl;
      }

 }
 int main(){
       long long num;
       cin>>num;
       find_prime_factor( num);
      return 0;
 }