/*Encapsulation*/
/*Access the private elements in main function using functions in the class*/

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
	string getname(){
		return name;
	}
	int getroll_no(){
		return roll_no;
	}
	int getage(){
		return age;
	}
	string getcollege_name(){
		return college_name;
	}
	void setname(string Name){
		name=Name;
	}
	void setroll_no(int Roll_no){
		roll_no=Roll_no;
	}
	void setage(int Age){
		age=Age;
	}
	void setcollege_name(string College_name){
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
	student std1=student("Abhijit",1236,19,"IIT G");
	std1.intro();
	
	std1.setname("Abhijit Gayen");
	std::cout<<"After setting name : "<<std1.getname()<<std::endl;
	std1.intro();
	
	std1.setcollege_name("IIT Guwahati");
	std::cout<<"After setting college name : "<<std1.getcollege_name()<<std::endl;
	std1.intro();
	
}
