#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for (int  i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){

    int num[10]={1,20,53,4,56,7,8,90,88,5};

    cout<<"Enter the key to be search:";
    int key;
    cin>>key;

    bool abc=search(num,10,key);
    if(abc){
        cout<<"The number is present!"<<endl;
    }
    else{
        cout<<"The number is not present!"<<endl;
    }


}