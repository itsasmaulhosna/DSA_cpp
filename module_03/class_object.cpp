#include<iostream>
using namespace std;
class Student
{
public:
char name[100];
int roll;
double gpa;
};
int main(){
    Student a,b,c;
    
    cin>>a.gpa>>a.name>>a.roll;
    cin>>b.gpa>>b.name>>b.roll;
    cin.ignore();
    cin.getline(c.name,100);
    cin>>c.roll>>c.gpa;
    // a.gpa=3.45;
    // a.roll=20;
    // char temp[100]="Maya";
    // strcpy(a.name,temp);
    cout<<a.name << " " << a.gpa << " " << a.roll<< " "<<endl;
    cout<<b.name << " " << b.gpa << " " << b.roll<< " "<<endl;
    cout<<c.name << " " << c.gpa << " " << c.roll<< " "<<endl;
    return 0;
}