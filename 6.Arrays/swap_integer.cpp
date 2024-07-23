#include<iostream>
using namespace std;


void swapping(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int num[5]={5,23,56,45,2};
    int odd[6]={4,5,6,22,3,4};

    swapping(num,5);
    printArray(num,5);

    swapping(odd,6);
    printArray(odd,6);

    return 0;

}