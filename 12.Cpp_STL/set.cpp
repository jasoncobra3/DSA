#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(2);

    for (auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;


    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
    for (auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"8 is present or not-->"<<s.count(8)<<endl;

    set<int>::iterator itr=s.find(2);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

}