#include<iostream>
using namespace std;

int main(){
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
    return 0;
}