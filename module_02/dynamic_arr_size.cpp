#include<iostream>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>> a[i];
    }
int b[5];
for(int i=0;i<3;i++){
    b[i]=a[i];
}
b[3]=20;
b[4]=98;
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}