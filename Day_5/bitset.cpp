#include<iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans1=countSetBits(a);
    int ans2=countSetBits(b);

    cout<<"Total number of set bits in both digit is:"<<(ans1+ans2)<<endl;
}