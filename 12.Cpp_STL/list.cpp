#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size-->"<<l.size()<<endl;

    //  l.pop_back();
    //  for(int i:l)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase-->";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size after erase-->"<<l.size()<<endl;    
    
}