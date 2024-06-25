#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=2;
    while(i<a){
        if(a%i==0){
            cout<<"The number is not prime"<< i<<endl;
        }
        else{
            cout<<"The number is prime"<< i<<endl;

        }
        i=i+1;
    }
}