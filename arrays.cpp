#include<iostream>
using namespace std;

int main(){
    int marks[]={5,2,85,963};
    int maths_marks[4];
    maths_marks[0]=52;
    maths_marks[1]=512;
    maths_marks[2]=524;
    maths_marks[3]=544;

    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    marks[3]=20;
    cout<<marks[3]<<endl;
    
    cout<<"these are maths marks"<<endl;
    cout<<maths_marks[0]<<endl;
    cout<<maths_marks[1]<<endl;
    cout<<maths_marks[2]<<endl;
    cout<<maths_marks[3]<<endl;

    cout<<"array using loops!"<<endl;

    for(int i=0;i<(sizeof(maths_marks)/sizeof(maths_marks[0]));i++){
        cout<<maths_marks[i]<<" ";
    }

    cout<<endl<<endl;

    cout<<"using while loop!"<<endl;

    int j=0;
    while(j<(sizeof(maths_marks)/sizeof(maths_marks[0]))){
        cout<<maths_marks[j]<<" ";
        j++;
    }

    cout<<endl;
    cout<<"size of array is: "<<sizeof(maths_marks)<<endl;

    // IN ARRAYS THE NAME OF ARRAYS STORES THE ADDRESS OF THE ARRAY
    // And Using The Pointers On The Name Of The Array To Get The Elements! 
    cout<<*(maths_marks+2)<<endl;

    return 0;
}