#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            char a=ch+i+j-2;
            cout<<a<<" ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}