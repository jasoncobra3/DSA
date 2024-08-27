#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,2,6};
    cout<<"Address of 1st location in array is-->"<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of 1st location in array is-->"<<&arr[0]<<endl;
    cout<<"4th-->"<<*arr<<endl;
    cout<<"5th-->"<<*arr+1<<endl;
    cout<<"6th-->"<<*(arr+1)<<endl;
    cout<<"8th-->"<<arr[2]<<endl;
    cout<<"9th-->"<<*(arr+2)<<endl;
    int i=2;
    cout<<"10th-->"<<i[arr]<<endl;
    return 0;

}