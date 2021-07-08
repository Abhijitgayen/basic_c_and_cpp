/*Data abstraction refers to providing only
 rssential information to outside 
world and hiding their back-ground data*/
#include<iostream>
using namespace std;

class adder{
	public:
		adder(int i=0){
			total=i;
		}
		void add( int i){
	 		total+= i;
		}
	 	int value_total(){
	 		return total;
	 	}
	private:
		int total;
};

int main(){
	adder a;
	a.add(4);
	a.add(6);
	a.add(5);
	cout<<"taotal vaule is :"<<a.value_total()<<endl;
	
	return 0;
}
