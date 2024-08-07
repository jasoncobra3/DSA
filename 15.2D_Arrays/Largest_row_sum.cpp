#include<iostream>
using namespace std;
int LargestRowSum(int arr[][3],int n, int m){
    int maxi=INT16_MIN;
    int row_index=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(maxi <sum){
            maxi=sum;
            row_index=i;
        }
    }
    cout<<"Maximum sum is :"<<maxi<<endl;
    return row_index;
}
int main(){
    
    int arr[3][3];


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    int ans=LargestRowSum(arr, 3,3);
    cout<<"Largets sum is at index->"<<ans;
}