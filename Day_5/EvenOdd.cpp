#include<iostream>
using namespace std;

int isEven(int a){
    if(a&1){
        return 0;

    }
    return 1;
}
int main(){

    int a;
    cin>>a;
    if(isEven(a)){
        cout<<"Number is Even."<<endl;
    }
    else{
        cout<<"Number is Odd."<<endl;
    }
    return 0;
}