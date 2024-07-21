#include<iostream>
using namespace std;
int main(){
    int n=1;
    int ch ='3';

    switch (n){
        case 1: cout<<"Number one"<<endl;
               break;

        case '1': cout<<"Number two"<<endl;
             break;

        default: cout<<"This is default statement"<<endl; //Default statement is not neccessary
    }
}

// Switch case is conditional block not a loop so we cannot execute the continue statement inside switc