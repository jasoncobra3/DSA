#include<iostream>
using namespace std;

// function signature
void counting(int n){

    //function body
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    // function call
    counting(n);
    return 0;
}