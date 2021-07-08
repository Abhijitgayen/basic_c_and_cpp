#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
	cout<<"size:"<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" "<<endl;
		}
}
void printvecs(vector<string> &v){//here we passing the refferance
	cout<<"size:"<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" "<<endl;
		}
}
int main(){
	vector<int>v;
	int n,x;
	cout<<"how many you want to add:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter data : ";
		cin>>x;
		v.push_back(x);
		printvec(v);//dynamic contineous memorry allocation is happen here
		//every opration take O(1) time.
	}
	cout<<"after push 12 : ";
	v.push_back(12);//this is astander version of the array
	printvec(v);
	cout<<"after pop_back :";
	v.pop_back();//using v.pop_back(); finction we able to delete element 
	//in the end of this vector
	printvec(v);
	vector<string>v1(12,"a");//if we put v(12) the it will give us null 
	//string and the size of the vector be also 12.
	printvecs(v1);
	//for copy one vector to another vector
	vector<string> v2=v1;//time complexity is O(n) same as array
	//for same as pair if you use refferenc i.e &v2=v1;//time compexity O(1)
	//then if i change the value of v2 then there will 
	//be change in the value ofv1.
	
}
