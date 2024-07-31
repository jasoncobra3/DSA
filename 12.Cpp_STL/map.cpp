#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int , string> m;

    m[1]="Aniket";
    m[13]="Anmol";
    m[2]="Devyani";

    m.insert({5,"Rahul"});

    cout<<"Before Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"13 is presen or not-->"<<m.count(13)<<endl;

    m.erase(13);
    cout<<"Afteer Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}