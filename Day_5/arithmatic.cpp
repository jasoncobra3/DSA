#include<iostream>
using namespace std;

int arithmatic(int n){
    int ans=(3*n)+7;
    return ans;
}
int main(){

    int n;
    cin>>n;
    int ans=arithmatic(n);
    cout<<"The answer is:"<<ans;
    return 0;
}