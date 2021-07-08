#include<bits\stdc++.h>
using namespace std;
class student{
    private:
    string name;
    int roll_no;
    string sex;
    public:
    //parametrized constractor
    student(string Name,int Roll_no,string Sex){
        name=Name;
        roll_no=Roll_no;
        sex=Sex;
    }
    //copy constractor
    student(student &s){
        name=s.name;
        roll_no=s.roll_no;
        sex=s.sex;
    }
    //print all data
    void intro(){
        cout<<"Name - "<<name<<endl;
        cout<<"Roll No - "<<roll_no<<endl;
        cout<<"Sex - "<<sex<<endl;
    }
  
};

int main(){
    student s("Abhijit",123,"male");
    s.intro();
    student a(s);
    a.intro();

    return 0;
}