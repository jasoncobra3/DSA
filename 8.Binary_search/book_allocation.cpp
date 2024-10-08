#include<vector>
using namespace std;
bool isPossible(vector <int> arr , int n , int m,int mid){

    int pagesum=0;
    int studentCount=1;

    for(int i=0;i<=n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];

        }
        if(studentCount >m){
            return false;
        }
    }
    return true;

}

int allocatebooks(vector <int> arr , int n , int m){
    int s=0;
    int sum=0;
    
    for(int i=0;i<=n;i++){
        sum += arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        
        if(isPossible(arr, n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
