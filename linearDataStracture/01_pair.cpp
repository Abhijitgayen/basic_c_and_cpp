#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int,int> p;
	p=make_pair(2,3);
	//p={4,6};//we taKE INPUT IN THIS TYPE OF WAY
	cout<<p.first<<"\t"<<p.second<<endl;
	pair<int,string>pr[4];
	pr[0]=make_pair(1,"abh");
	pr[1]=make_pair(2,"lko");
	pr[2]=make_pair(6,"koo");
	pr[3]={5,"hello"};//there are two option to write pair
	for(int i=0;i<4;i++){
		cout<<pr[i].first<<" "<<pr[i].second<<endl;
	}
	swap(pr[0],pr[2]);
	cout<<"After swaping"<<endl;//using swapingg finction we able to swap any two pair without changing
	//any data in this pair
	for(int i=0;i<4;i++){
		cout<<pr[i].first<<" "<<pr[i].second<<endl;
	}
	
	pair<int,int> p1=p;
	p1.first=12;
	cout<<p.first<<"\t"<<p.second<<endl;
	pair<int,int> &p2=p;//here i use reference so i able to cahne the data
	p2.first=12;
	cout<<p.first<<"\t"<<p.second<<endl;
}
