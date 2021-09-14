#include<bits/stdc++.h>
using namespace std;
//vector are sequence of containers that allow non-contiguous memory allocation.
//here we cover the operation
//1.vector.max_size()//return the max size of the vector that contain those element
//2.vector.push_back(value);
//3.vector.font( ); return the front elelment in this list of vector
//4.vector.back(); return the back element in this list of array
//5.vector.pop_back();delete the front element 
//6.vector.emplace(vector.begin(),value)// insert value using emplace function at front
//we also able to add this value in any where in this any position in this vector 
//7.vector.empty();check this vector empty or not
//8.vector.size(); return the size of the vector.
//9.vector.reverse(); reverse the array
//10.vector.sort(); use to sort this vector.
//vector<it> :: iterator it;//we try to sort this vector using sort function in stl
//sort(it=vector.begin(), it!=vector.end(),[&](int &a, int &b){//time complexity 
////of this sorting function is O(n logn)
//	return a<b;
//})
//11.vector.insert(pos_it,element);//insert element invector
//useing advance(pos_it,2) we also able to set pos of thia iterator in stl
//12.vector.erase(it_first, it_second);it erase all vector element in it_first and it_second ( iterator)
//13.vector.clear()//it to clear all data in vector
//14.vector1.swap(vector2) ; two vector are swap to each other
// 15.vector.begin()//return begin pointer
//16.vector.end()//return end pointer of this vector list

void printvec(vector<int> v){
	cout<<"size:"<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		}cout<<endl;
}
void printvecs(vector<string> &v){//here we passing the refferance
	cout<<"size:"<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		}cout<<endl;
}
int main(){
	vector<int>v;
	int n,x;
	// cout<<"how many you want to add:";
	cin>>n;
	for(int i=0;i<n;i++){
		// cout<<"enter data : ";
		cin>>x;
		v.push_back(x);
		//printvec(v);//dynamic contineous memorry allocation is happen here
		//every opration take O(1) time.
	}
	printvec(v);
	cout<<"front & back  : "<<v.front()<< "  "<<v.back()<<endl;
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
	printvecs(v1);
	vector<string> &v3=v1;
	v3[0]="1254";
	printvecs(v1);
	vector< string> :: iterator it=v1.begin()+3;
	v1.emplace(it,"123");
	printvecs(v1);
	v1.erase(v1.begin(),v1.begin()+3);
	printvecs(v1);
	v1.insert(v1.begin()+3,"by");//same as emplace function
	printvecs(v1);
	vector<int>a={1,4,5};
    a.pop_back();
    cout<<a.size()<<endl;//2
	return 0;
}
