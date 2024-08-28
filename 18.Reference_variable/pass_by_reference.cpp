#include<iostream>
using namespace std;
int update2(int& n){
    n++;
}
int update1(int n){
    n++;
}
int main(){
    int n=7;
    cout<<"Using update 1 function"<<endl; //pass by value
    cout<<"Before "<<n<<endl;
    update1(n);
    cout<<"After "<<n<<endl;

    cout<<"Using update 2 function"<<endl; //pass by reference
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;


}