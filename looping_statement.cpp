#include<iostream>
using namespace std;

int main(){
    
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
    
    return 0;
}