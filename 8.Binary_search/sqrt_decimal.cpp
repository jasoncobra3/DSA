#include<iostream>
using namespace std;
long long int sqrt(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
         long long int ans=-1;
        while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            else if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
}

double more_precision(int n, int precison, int temp ){
    double factor=1;
    double ans=temp;

    for(int i=0;i<precison;i++){
        factor=factor/10;
        for (double j=ans;j*j<n;j+=factor){
            ans=j;;
       }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int tempsol=sqrt(n);

    cout<<"The answer is :"<< more_precision(n, 3,tempsol);

}