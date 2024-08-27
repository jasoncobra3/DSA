#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,30};
    cout<<sizeof(arr)<<endl;
    cout<<"1st-->"<<sizeof(*arr)<<endl;
    cout<<"2nd-->"<<sizeof(&arr)<<endl;

    int *ptr=&arr[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;


    int a[10]={5,6,2,3};
    cout<<" ->"<<&a[0]<<endl;

    int *p=&a[0];
    cout<<" ->"<<&p<<endl;


    //a=a+1; gives you a error array aaddress cannot be changed
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;

    return 0;
}