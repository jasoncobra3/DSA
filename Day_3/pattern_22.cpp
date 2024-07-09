#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=1, sum=1;
    while(i<=n){
        int j=1,space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }
        while(j<=i){
            cout<<sum<<" ";
            sum=sum+1;
            j=j+1;
        }i=i+1;
        cout<<endl;
    }
    return 0;
}