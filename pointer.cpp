#include<iostream>
using namespace std;

int main(){
    int a=30;
    int* b=&a;  
    
    //&  --> (address of) operator
    cout<<"address of a using pointer: "<<b<<endl;
    cout<<"address of a using &sign with a: "<<&a<<endl;
    cout<<"------"<<endl<<endl;
    // * --> (value at) derefrence operator
    cout<<"value at address b is: "<<*b<<endl;
    cout<<"value at address b  using &sign with a: "<<*(&a)<<endl;
    cout<<"------"<<endl<<endl;

//  pointer to pointer
    int** c=&b;
    cout<<"address of b using pointer: "<<c<<endl;
    cout<<"address of b using &sign with b: "<<&b<<endl;
    cout<<"value at address c is: "<<*c<<endl;
    cout<<"value at address value_at(value_at(c)) is: "<<**c<<endl;
    cout<<"------"<<endl<<endl;
    return 0;
}