#include<iostream>
using namespace std;

class box{
	private:
		float length;
		float height;
		float breath;
	public:
		void setlength(float l){
			length=l;
		}
		void setheight(float h){
			height=h;
		}
		void setbreath(float b){
			breath=b;
		}
		void volume_of_box(){
			cout<<"volume of this box is  : "<< (breath*length*height)<<endl;
		}
		
		box operator+(const box &b){
			box b3;
			b3.length=this->length + b.length;
			b3.height= this->height + b.height;
			b3.breath =this->breath + b.breath;
			return b3;
		}
		box operator-(const box &b){
			box b3;
			b3.length=this->length - b.length;
			b3.height= this->height - b.height;
			b3.breath =this->breath - b.breath;
			return b3;
		}
		int operator >= (const box &b){
			if(this->breath >= b.breath && this->length >= b.length && this->height >= b.height)
				return 1;
			else
				return 0;
		}
};
int main(){
	box b1,b2;
	b1.setbreath(12.6);
	b1.setheight(12.9);
	b1.setlength(15.9);
	b1.volume_of_box();
	
	b2.setbreath(1.4);
	b2.setheight(11.1);
	b2.setlength(13.1);
	b2.volume_of_box();
	
	box b3=b1+b2;
	b3.volume_of_box();
	
	box b4=(b1-b2)+b2;/*as we define + and - the class so
	 we able to use this in the diffrent way*/
	b4.volume_of_box();
	
	cout<<(b3>=b1)<<endl;
	
	return 0;
}
