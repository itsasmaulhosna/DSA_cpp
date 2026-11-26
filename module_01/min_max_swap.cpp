#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;

    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
    cout<<min({10,39,56,87})<<endl;
    // int temp=a;
    // a=b;
    // b=temp;
    swap(a,b);
    cout<< a << " " << b<<endl;

    return 0;
}