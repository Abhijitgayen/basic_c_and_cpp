#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
class student{
    public:
        student( std::string Name,int Roll_no,std::string Reg_no,std::string College_name){
            name=Name;
            reg_no=Reg_no;
            roll_no=Roll_no;
            college_name=College_name;
        std::cout<<"it is working in this class"<<std::endl;
        }
        void call_data(){
            std::cout<<"****Student Details****"<<endl;
            std::cout<<"\tStudent Name : "<<name<<std::endl;
            std::cout<<"\tRoll No : "<<roll_no<<std::endl;
            std::cout<<"\tReg No : "<<reg_no<<std::endl;
            std::cout<<"\tCollege Name : "<<college_name<<std::endl;
        }
    private:
        std::string name;
        std::string reg_no;
        std::string college_name;
        int roll_no;
    protected:


};
#endif // STUDENT_H
