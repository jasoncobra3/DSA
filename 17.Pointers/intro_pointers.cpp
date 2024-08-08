#include<iostream>
using namespace std;
int main(){
    int num=5;

    cout<<num<<endl;

    //adress of operator - &
    cout<<"Adress of num is-->"<<&num<<endl;


    int *ptr=&num;
    cout<<"The address is ->"<<ptr<<endl;
    cout<<"The value is ->"<<*ptr<<endl;

    double d=2.08;
    double*pt2=&d;
    cout<<"The address is ->"<<pt2<<endl;
    cout<<"The value is ->"<<*pt2<<endl;

    cout<<"Size of num is->"<<sizeof(num)<<endl;
    cout<<"Size of pointer is->"<<sizeof(ptr)<<endl;
    cout<<"Size of pointer 2 is->"<<sizeof(pt2)<<endl;
    //Size of pointer is always 8


}