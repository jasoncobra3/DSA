#include<iostream>
using namespace std;


int fibonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next_num=a+b;
        cout<<next_num<<" ";
        a=b;
        b=next_num;
    }
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}