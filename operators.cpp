#include<iostream>
using namespace std;

int main(){
    int a=5 , b=10;
    
//Arithmetic operators
    cout<<"Value of a+b is: "<<a+b<<endl;
    cout<<"Value of a-b is: "<<a-b<<endl;
    cout<<"Value of a*b is: "<<a*b<<endl;
    cout<<"Value of a/b is: "<<a/b<<endl;
    cout<<"Value of a%b is: "<<a%b<<endl;
    // first print then adds the value and store it to a
    cout<<"Value of a++ is: "<<a++<<endl;
    // first adds the value and store to a and then print
    cout<<"Value of ++a is: "<<++a<<endl;
    // first print then subtract the value and store it to a
    cout<<"Value of a-- is: "<<a--<<endl;
    // first subtract the value and store to a and then print
    cout<<"Value of --a is: "<<--a<<endl<<endl;

//Comparison operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl<<endl;

// Logical operators
    cout<<"The value of ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of !(a==b) is: "<<(!(a==b))<<endl;

    return 0; 
}