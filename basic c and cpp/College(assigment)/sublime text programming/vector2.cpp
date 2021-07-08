#include<bits/stdc++.h>
using namespace std;
void printvect(vector<int>&v){	/* if you want to use
 this vector in this function you need to use "&" here*/
	for(int i=0;i<v.size();++i){
		cout<< v[i] <<" ";
	} 
	v.pop_back();
	cout<<endl;
}
int main(){
	cout<<"hello"<<endl;
	vector<int> v1;
	v1.push_back(12);
	printvect(v1);
	return 0;
}