/*ACCESS MODIFIERS in cpp in class*/
/*Aim to use of private , public, protected*/
/*and we also learn about the constructor*/
#include<iostream>
using std::string;
class student{
	/*default access modifiers in class is private*/
private:
	string name;
	int roll_no;
	int age;
	string college_name;
	/*We are not able to call this  private values in the main function*/
public:
	/*if we not define any constructor there will de make a default constructor*/
	/* name of the constructor and name of the class will be same */
	/*more genarally constructor is used in the public */
	student(string Name,int Roll_no, int Age, string College_name){
		name=Name;
		roll_no=Roll_no;
		age=Age;
		college_name=College_name;
	}
	void intro(){
		std::cout<<"name - "<<name<<std::endl;
		std::cout<<"Roll no - "<<roll_no<<std::endl;
		std::cout<<"age - "<<age<<std::endl;
		std::cout<<"college name - "<<college_name<<std::endl;	
	}
};
int main(){
	student std1=student("Abhijit",123,19,"IIT G");
	std1.intro();
	/*we able to do all in 2 lines
	student std1;
	std1.name="Abhijit";
	std1.roll_no=123;
	std1.age=19;
	std1.college_name="IIT G";
	std1.intro();*/	
	
}
