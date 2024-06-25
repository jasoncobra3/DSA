#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    int a=ch;
    if(a>97){
        cout<<"This is lowercase character";
    }
    else if(a>65){
        cout<<"This is uppercase character";
    }
    else if (a>48){
        cout<<"This is digit";
    }
}