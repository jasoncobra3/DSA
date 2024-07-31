#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);


    cout<<"Finding 6-->"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower Bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper  Bound"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;


    int a=5;
    int b=4;
    cout<<"Maximum-->"<<max(a,b)<<endl;
    cout<<"Minimum-->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a->"<<a<<endl;
    cout<<"b->"<<b<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"String-->"<<s<<endl;

    //Rotating array
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotation"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;



    //sorting using intro sort (quick + heap + insertion sort)
    cout<<"After Sorting"<<endl;
    sort(v.begin(),v.end());
     for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
}