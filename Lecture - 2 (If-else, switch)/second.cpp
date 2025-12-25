#include <iostream>
using namespace std;

int main()
{
    // int age;

    // cout<<"Enter your age: ";
    // cin>>age;

    // if(age>=18){
    //     cout<<"You are eligible to vote";
    // }
    // else{
    //     cout<<"Your are not eligible to vote";
    // }

    int marks;

    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks>33){
        cout<<"You have passed"<<endl;
    }
    else{
        cout<<"You have failed"<<endl;
    }
   
    //  if hoga ek hi else hoga, elseif multiple ho sakte hai
    if(marks>90){
        cout<<"Grade: A+";
    }
    else if(marks>80&&marks<=90){
        cout<<"Grade: A";
    }
    else if(marks>70&&marks<=80){
        cout<<"Grade: B+";
    }
    else if(marks>60&&marks<=70){
        cout<<"Grade: B";
    }
    else{
        cout<<"Grade: C";
    }
}