#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the age:";
    cin>>a;
    if(a>18){
        cout<<"You are adult";
    }
    else if (a<18)
    {
        cout<<"You are a kid";
    }
    else{
        cout<<"You are a human";
    }
    
}