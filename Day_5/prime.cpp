#include<iostream>
using namespace std;

int isPrime(int n){
    for (int i=2;i<n;i++){
        if(n%2==0){
            return 0;
        }

    }
    return 1;
}
int main(){

    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"This is prime number";
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}