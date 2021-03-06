#include<iostream>
using namespace std;

int main(){
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
    return 0;
}