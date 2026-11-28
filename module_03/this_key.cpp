#include<iostream>
using namespace std;
class Student{
public:
int roll;
int cls;
double gpa;
Student(int roll,int cls,double gpa){
   (*this).roll=roll;
    (*this).cls=cls;
    (*this).gpa=gpa;
}

};
int main(){
    Student rahim(34,5,6.87);
    Student kahim(45,8,3.87);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<" "<<endl;
     cout<<kahim.roll<<" "<<kahim.cls<<" "<<kahim.gpa<<" "<<endl;
    return 0;
}