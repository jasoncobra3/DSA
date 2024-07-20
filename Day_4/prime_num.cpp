#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    bool primenum=1;
    for (int i=2;i<n;i++){
        if(n%i==0){
            // cout<<"This is not a prime number";
            primenum=0;
            break;
        }
    }
    if(primenum==0){
        cout<<"This is not a prime number";

    }
    else{
        cout<<"This is prime number";

    }
}