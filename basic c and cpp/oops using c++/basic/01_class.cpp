/*Aim to define and use of class in cpp*/
#include<iostream>
using std::string;
class student{
	/*Here student ->class
	and name, roll_no,age,college_name -> objects*/
public:
	string name;
	int roll_no;
	int age;
	string college_name;
	void intro(){
		std::cout<<"name - "<<name<<std::endl;
		std::cout<<"Roll no - "<<roll_no<<std::endl;
		std::cout<<"age - "<<age<<std::endl;
		std::cout<<"college name - "<<college_name<<std::endl;	
	}
};

int main(){
	student std1;
	std1.name="Abhijit";
	std1.roll_no=123;
	std1.age=19;
	std1.college_name="IIT G";
	std1.intro();
}
