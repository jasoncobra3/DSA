#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;
}

void update(int *p){
    // p=p+1;
    // cout<<"Inside pointer-->"<<p<<endl;
    *p=*p+1;
}
int getSum(int *arr, int n){
    // cout<<"Size of-->"<<sizeof(arr)<<endl;
    // int *arr = int arr[] 
    int sum=0;
    for(int i=0;i<n;i++){
        sum += i[arr];
    }
    return sum;
}
int main(){
    int a=10;
    int *p=&a;
    print(p);
    
    cout<<"Before-->"<<*p<<endl;
    update(p);
    cout<<"After-->"<<*p<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<"Sum-->"<<getSum(arr, 5)<<endl;
    cout<<"Sum-->"<<getSum(arr+2, 3)<<endl; //accessing the part of array using pointers

}