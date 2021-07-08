#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v){
	cout<<"size:"<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
}

int main(){
	vector<vector<int> >p;
	cout<<"How many vector you want:";
	int n,N,x;
	cin>>N;
	for(int i=0;i<N;i++){
		cout<<"for vector "<<i<<endl;
		cout<<"No of the element in vector"<<i<<":";
		cin>>n;
		vector<int> temp;
		for(int j=0;j<n;j++){
			cin>>x;
			temp.push_back(x);
		}
		p.push_back(temp);
	}
	for(int i=0;i<p.size();i++){
		cout<<"for vector "<<i<<":"<<endl;
		printvec(p[i]);
	}
	//similar vector<pair<int,int> >
	vector< pair<int,int> > pr;
	cout<<"No of pair is:";
	int r,s,k;
	cin>>r;
	pair<int,int> temp;
	for(int i=0;i<r;i++){
		cout<<"enter pair :";
		cin>>s>>k;
		temp=make_pair(s,k);
		pr.push_back(temp);
		
	}
	/* print this vector*/
	for(int i=0;i<pr.size();i++){
		cout<<pr[i].first<<"\t"<<pr[i].second<<endl;
	}
}
