#include<iostream>
using namespace std;
/*here we learn about the over loading function in the class*/
class print_data{
	public:
		void print(int i){
			cout<<"Printing int :"<<i<<endl;
		}
		void print( double f){//if we use float it will show compilation error
			cout<<"printing float :"<<f<<endl;
		}
		void print (string c){//if i use char *c it will give us a worning
			cout<<"printing string :"<<c<<endl;
		}
};
int main (){
	print_data pd;
 	pd.print(12);
 	pd.print(12.69);
 	pd.print("hello it is ok see it");
 	
 	return 0;
 }
