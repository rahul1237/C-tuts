#include<iostream>
using namespace std;

int main(){
    
// BASIC
    cout<<"this is rahul mahajan"<<endl;
    cout<<"okh bbye!";

// VARIABLES
    int num = 10;
    cout<<num<<endl;
    cout<<"----"<<endl;
    cout<<num*10<<endl;

// SCOPES & DATA-TYPES
        int a=5 , b=10;
        float c=1.5;
        char d='r';
        bool istrue=true;
        bool isfalse=false;

    // int values
        cout<<"value of a is: "<<a<<endl;
        cout<<"value of b is: "<<b<<endl;

    // float values
        cout<<"value of c is: "<<c<<endl;
        cout<<"value of d is: "<<d<<endl;

    // bool values
        cout<<"value of istrue is: "<<istrue<<endl;
        cout<<"value of isflase is: "<<isfalse<<endl;
        // true returns 1 while false return 0

// INPUT & OUTPUT
    int num1,num2;
    cout<<"Enter num1 & num2"<<endl;
    cin>>num1>>num2;
    cout<<"num1*10: "<<num1*10<<endl;
    cout<<"num2+10: "<<num2+10<<endl;

// OPERATORS
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

// Constants
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

// CONTROL STATEMENTS
        int marks;
        cout<<"enter your marks: ";
        cin>>marks;

    // if-else statement
        if(marks>0 && marks<50){
            cout<<"you are fail in the examination"<<endl;
        }else if(marks>=50 && marks<=75){
            cout<<"you are in the second division"<<endl;
        }else if(marks>75 && marks<=100){
            cout<<"you are in the first division"<<endl;
        }else{
            cout<<"enter the valid marks"<<endl;
        }

    // switch case statement
        switch (marks)
        {
        case 49:
            cout<<"fail"<<endl;
            break;
        case 75:
            cout<<"pass"<<endl;
            break;
        default:
            cout<<"no further cases!"<<endl;
            break;
        }
        
//LOOPING STATEMENTS
     
    // for loop
        int a=0;
        for(a=1;a<=10;a+=1){
            cout<<a<<endl;
        }
        cout<<"------"<<endl<<endl;

    // while loop
        a=1;
        while(a<=10){
            cout<<a<<endl;
            a++;
        }
        cout<<"------"<<endl<<endl;

    // do-while loop
        // ek bar to loop chalega hi chalega bhaiya!
        a=0;
        do{
            cout<<a<<endl;
            a++;
        }while(a>=2 && a<=10);

// BREAK & CONTINUE
    
    // break statement
        for(int a=1 ; a<=10 ; a++){
            if(a==5){
                break;
            }
            cout<<a<<endl;

        }
        cout<<endl;
        cout<<"-------"<<endl;

    // continue statement
        for(int a=1 ; a<=10 ; a++){
            if(a==5){
                continue;
            }
            cout<<a<<endl;

        }

// POINTERS
    int a=30;
    int* b=&a;  
    
    //&  --> (address of) operator
    cout<<"address of a using pointer: "<<b<<endl;
    cout<<"address of a using &sign with a: "<<&a<<endl;
    cout<<"------"<<endl<<endl;
    // * --> (value at) derefrence operator
    // cout<<"value at address b is: "<<*b<<endl;
    // cout<<"value at address b  using &sign with a: "<<*(&a)<<endl;
    // cout<<"------"<<endl<<endl;

    // //  pointer to pointer
    // int** c=&b;
    // cout<<"address of b using pointer: "<<c<<endl;
    // cout<<"address of b using &sign with b: "<<&b<<endl;
    // cout<<"value at address c is: "<<*c<<endl;
    // cout<<"value at address value_at(value_at(c)) is: "<<**c<<endl;
    // cout<<"------"<<endl<<endl;

// ARRAYS

    return 0;
}