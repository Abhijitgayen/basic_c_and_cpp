#include<bits/stdc++.h>
using namespace std;
//map is a from like a red black tree insetion deletion and search take O(log n)
//print all element take o(log n)
int main(){
	map<string,int>m;
	int a,n;//(1st,2nd) where the 1st-> is loaded as a sorted in list
	string s;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s>>a;
		m[s]=a;//map is make a red-black tree so insrtion take O(log n) time
	}//
	for(auto &value : m){
		cout<<value.first<<" "<<value.second<<endl;
	}
	cout<<endl;
	for(auto it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<"use of find();"<<endl;
	auto it=m.find("by");//it return the iterator of this point
	if(it==m.end()){
		cout<<"no value"<<endl;
	}
	else{
	cout<<(*it).first<<" "<<(*it).second<<endl;
}cout<<endl;
cout<<"erase the key and key value "<<endl;
m.erase("by");//
//m.clear();//using this function we able to clear all data in the map m
for(auto &value : m){
		cout<<value.first<<" "<<value.second<<endl;
	}
	cout<<endl;	
}