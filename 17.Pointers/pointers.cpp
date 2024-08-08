#include<iostream>
using namespace std;
int main(){
    // int *p=0;
    // cout<<p<<endl;'
    int i=5;
    int *ptr=&i;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    //Another way of initializing the pointer
    int *q=0;
    q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int num=5;
    int *p=&num;
    cout<<"before-->"<<*p<<endl;
    (*p)++;
    cout<<"After-->"<<*p<<endl;

    //Copying a pointer
    int *s=p;
    cout<<s<<" -- "<<p<<endl;
    cout<<*s<<" -- "<<*p<<endl;


    //Pointer arithmatic
    int j=3;
    int *t=&j;
    *t=*t+1;
    cout<<j<<endl;


    cout<<"Before -->"<<t<<endl;
    t=t+1;
    cout<<"After -->"<<t<<endl;
    //moving 4 bytes further ahead8


    cout<<"Before -->"<<t<<endl;
    t=t-1;
    cout<<"After -->"<<t<<endl;
}