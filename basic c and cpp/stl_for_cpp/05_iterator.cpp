#include<bits/stdc++.h>
//here we learn about the iterator in stl libary
using namespace std;
void printvec(vector<int> v){
	cout<<"size of vector :"<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>v;
	//cout<<"how many data you want to add :";
	int n,r;
	cin>>n;
	for(int i=0;i<n;i++){
		//cout<<"Enter data:";
		cin>>r;
		v.push_back(r);
	}
	printvec(v);
	vector<int> ::iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout<<(*it)<<" ";
	}
	cout<<endl;
	//here we use auto for easy define veriables
	cout<<"we try this using auto function"<<endl;
	for(auto it=v.begin();it!=v.end();++it){
		cout<<(*it)<<" ";
	}
	cout<<endl;
	cout<<"using special type of for loop it bis avialable on gcc-11"<<endl;
	for(int it: v){
		cout<<(it)<<" ";
		
	}	
}
