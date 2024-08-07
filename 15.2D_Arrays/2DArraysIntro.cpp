#include<iostream>
using namespace std;
int main(){
    int arr[3][4];

    // hardcode array 
    // int arr1[3][4]={1,2,3,4,5,6,7,8,9,4,5,6};
    // int arr2[3][4]={{1,1,1,1},{2,2,2,2},{33,3,3,3}};
    // taking input-> row wise/
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }



    // taking input column wise
//    for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[j][i];
//         }
//     }

    // Printing array
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }




}