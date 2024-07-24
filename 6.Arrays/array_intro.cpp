#include<iostream>
using namespace std;


void printarray(int arr[],int size){
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}
int main(){
    //Declaring array
    int num[15];


    // accessing array
    cout<<"Value at 14 index:"<<num[1]<<endl;
    //iF ARRAY IS null then it wil store garbage value in it at any index

    //Initialising array
    int second[3]={1,55,23};
    cout<<"The third number in array is:"<<second[2]<<endl;

    //accessing greater than the indices
    int third[10]={1,5,6};
    cout<<"The 4th num is:"<<third[3]<<endl;


    //Printing the array
    int fourth[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        cout<<fourth[i]<<" ";
    }
    cout<<"Priting done"<<endl;


    //What value does array store if we give a less input than the size
    //-->stores 0 in remaining indices
    int fifth[10]={1,2,3};
    for(int i=0;i<10;i++){
        cout<<fifth[i]<<" ";
    }
    cout<<"Priting done"<<endl;


    int six[6]={1,2,0,6,4,5};
    printarray(six,6);

    //Storing char in array
    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    //Different types of arrays

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];





}