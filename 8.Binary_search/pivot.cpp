#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[s]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={7,9,1,2,3};

    cout<<"The pivot is at index "<<pivot(arr,5)<<endl;
}