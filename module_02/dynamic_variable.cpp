#include<iostream>
using namespace std;
int *p;
void fun(){
    int* x= new int;
    *x=10;
    p=x;
cout<< "Fun-" << *p <<endl;
return ;
}
int main(){
    fun();
    cout<<"Main-"<< *p <<endl;
    // int x=10;
    // int *p=new int;
    // *p=100;
    // cout<<*p<<endl;
return 0;
}