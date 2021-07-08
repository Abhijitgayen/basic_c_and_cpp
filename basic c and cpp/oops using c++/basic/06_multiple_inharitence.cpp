/*we also see that how to use protected (access specifier)*/
#include<iostream>
using namespace std;
//base class
class myclass{
	public:
		string name;
		string school_name;
	void data(){
		cout<<"data is Updated here"<<endl;
	}	
};
//derived class
class anotherClass{
	public:
	void otherdata(){
		cout<<"This is another data update function"<<endl;
	}
};
class allclass: public myclass,public anotherClass{
	public:
	void all(){
		cout<<"this is the collection of all class"<<endl;
	}
};
 int main(){
 	allclass dat;
 	dat.data();
	 dat.otherdata();
	 dat.all();

 }
