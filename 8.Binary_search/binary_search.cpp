#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
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

    int even[6]={2,4,6,8,14,18};
    int odd[5]={1,3,5,7,9};

    int ans1=binary_search(even,6,18);
    int ans2=binary_search(odd,5,3);

    cout<<"The index value of 18 is "<<ans1<<endl;
    cout<<"The index value of 3 is "<<ans2<<endl;


}