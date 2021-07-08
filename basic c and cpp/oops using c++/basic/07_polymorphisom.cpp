/* hEre we learn about C++ polimorphism*/
#include<iostream>
using namespace std;
class myanimal{
	public:
		string name;
		void animalsay(){
			cout<<"amoinal say : I dont know"<<endl;
		}
};
//function are same in the every class
class dog: public myanimal{
	public:
		void animalsay(){
			cout<<"Dog say : vow vow"<<endl;
		}
};
class pig: public myanimal{
	public:
		void animalsay(){
			cout<<"Pig says: wee wee"<<endl;
		}
};
int main(){
	myanimal a1;
	dog d1;
	pig p1;
	d1.name="tom";
	a1.animalsay();
	p1.animalsay();
	d1.animalsay();
	cout<<"Nmae poof the dog is :"<<d1.name<<endl;
	return 0;
}
