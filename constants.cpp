#include<iostream>
using namespace std;

int main(){
    // we can change the value of variables
    int a=10;
    cout<<"value of a was: "<<a<<endl;
    a=50;
    cout<<"value of a is: "<<a<<endl<<endl;

    // but we cann't change the value of variables when we use const keyword!
    const int b=10;
    cout<<"value of b was: "<<b<<endl;
    // b=5;    //this will give us an error
    cout<<"value of b is: "<<b<<endl;


    return 0;
}