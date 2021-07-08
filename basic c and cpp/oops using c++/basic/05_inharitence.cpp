#include<iostream>
using std::string;
//base class
class student{
	protected://we able to use protected data in the inheritence class
		string name;
		int roll_no;
		int age;
		string college_name;
	public://we able to class those data in any where
		void intro(){
			std::cout<<"Name - "<<name<<std::endl;
			std::cout<<"Roll no - "<<roll_no<<std::endl;
			std::cout<<"Age - "<<age<<std::endl;
			std::cout<<"College Name - "<<college_name<<std::endl;
		}
	
};
//derived class
//we are not able to pass constrctor to from one class to another class
class updatedata : public student{
	public:
		updatedata(string Name,int Roll_no,int Age,string College_name){
			name=Name;
			roll_no=Roll_no;
			age=Age;
			college_name=College_name;	
		}
		
		void cheak(){
			std::cout<<"It is working properly"<<std::endl;
		}
};
int main(){
	updatedata std1=updatedata("Abhijit gayen",1254,19,"IIT G");
	std1.intro();
	std1.cheak();
}
