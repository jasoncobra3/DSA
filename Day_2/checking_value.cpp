#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    if(a>0){
        cout<<"Number is +ve"<<endl;
    }
    else{
        if(a<0){
            cout<<"Number is -ve"<<endl;
        }
        else{
            cout<<"Number is 0"<<endl;
        }
    }
}