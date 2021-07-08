/*Some basic things about vector
1.push_back(value); ---> O(1)
2.pop_back();--->O(1)
3.size(); --->O(n)*/
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
	v1.push_back(23);
	v1.push_back(24);
	printvect(v1);
	vector<int> &v=v1;/* if you not use '&' then it
	only copy the one vector to another vector.
	but if we use "&" then those two vector are
	 be also same vectors */
	int n, data;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> data;
		//cout<<"it is ok"<<endl;
		v.push_back(data);
	}
	printvect(v);
	v1.pop_back();
	printvect(v);
	printvect(v1);
	printvect(v);

	return 0;
}