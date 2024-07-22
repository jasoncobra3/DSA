#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the isze of array:";
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"The sum of array is:"<<sum(num,size)<<endl;
}