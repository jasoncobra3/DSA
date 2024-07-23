#include<iostream>
using namespace std;

int fisrtOcc(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;

        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}



int lasttOcc(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;

        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
int main(){
    int arr[12]={1,2,3,3,3,3,3,3,3,3,3,6};

    int ans1=fisrtOcc(arr,12,3);
    int ans2=lasttOcc(arr,12,3);

    cout<<"The total no. of occurence of 3 is "<<(ans2-ans1)+1<<endl;

}