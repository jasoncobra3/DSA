#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector <int> v;
    cout<<"Capacity-->"<<v.capacity()<<endl;

    vector<int> a(5,1);//initialize vector with size of 5 with all values of 1
    cout<<"Vecctor a--> ";
    for(int i:a){
        cout<<i<<" "; 
    }cout<<endl;

   
    vector<int> last(a);//copying a vector
    cout<<"Vecctor last--> ";
    for(int i:last){
        cout<<i<<" "; 
    }cout<<endl;



    v.push_back(1);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    cout<<"Size-->"<<v.size()<<endl;
    
    cout<<"Element at index 2-->"<<v.at(2)<<endl;

    cout<<"Front-->"<<v.front()<<endl;
    cout<<"Back-->"<<v.back()<<endl;


    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" "; 
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
     for(int i:v){
        cout<<i<<" "; 
    }cout<<endl;

    cout<<"Before Clear size "<<v.size()<<endl;

    v.clear();
    cout<<"After clear "<<v.size()<<endl;


}