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

int binary_search(int arr[],int size,int s , int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;   //as integer does not overflow we modifying mid value

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right part for key greater than mid value
        else if (arr[mid]<key)
        {
          start=mid+1;
        }
        else{ //arr[mid]>key
            end=mid-1;
        }

       mid=start+(end-start)/2;
        
    }
    return -1;
}
int main(){
    int arr[5]={7,9,1,2,3};

    int ele=pivot(arr,5);
    if(2>=arr[ele] && 2<=arr[4]){
        return binary_search(arr,5,0,4,2);

    }
    else{
        return binary_search(arr,5,0,4,2);
    }
}