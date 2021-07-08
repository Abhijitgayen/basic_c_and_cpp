#include<iostream>
using std::string;
class student{
private:
	string name;
	int roll_no;
	int age;
	string college_name;
	/*We are not able to call this  private values in the main function*/
public:
	student(string Name,int Roll_no, int Age, string College_name){
		name=Name;
		roll_no=Roll_no;
		age=Age;
		college_name=College_name;
	}
	/*inside class defination of function*/
	void intro(){
		std::cout<<"name - "<<name<<std::endl;
		std::cout<<"Roll no - "<<roll_no<<std::endl;
		std::cout<<"age - "<<age<<std::endl;
		std::cout<<"college name - "<<college_name<<std::endl;	
	}
	/*outside class definetion of function*/
	/*we need to define this function out side*/
	void hello();
};
/*Details of this hello function that also belong to stduent class*/
void student::hello(void){
	std::cout<<"Hello "<<name<<" how are you?"<<std::endl;
}
int main(){
	student std1=student("Abhijit",123,19,"IIT G");
	std1.intro();
	std1.hello();	
}
