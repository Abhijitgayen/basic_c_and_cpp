#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> p;
	p[1]=12;
	p[3]=14;
	p[78]=458;
	p[12]=45;
	map <int,int> ::iterator it;
	for( it=p.begin();it!=p.end();++it){
		cout<<(*it).first<<"\t"<<(*it).second<<endl;
	}
	for(auto &t : p){
		cout<<(t).first<<"\t"<<(t).second<<endl;

	}
	
}
