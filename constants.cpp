#include<iostream>
using namespace std;

int main(){

// constants
    // we can change the value of variables
    int a=10;
    cout<<"value of a was: "<<a<<endl;
    a=50;
    cout<<"value of a is: "<<a<<endl<<endl;

    // but we cann't change the value of variables when we use const keyword!
    const int b=10;
    cout<<"value of b was: "<<b<<endl;
    // b=5;    //this will give us an error
    cout<<"value of b is: "<<b<<endl<<endl;

// operator precedence
    // refrecnce c++refrence.com
    int num1=10 , num2=5;
    int result=(num1*5)+num2%num1;

    cout<<"value of result is:"<<result<<endl;

    return 0;
}