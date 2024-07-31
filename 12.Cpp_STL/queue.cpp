#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Aniket");
    q.push("Anmol");
    q.push("Devyani");

    cout<<"Size Before pop-->"<<q.size()<<endl;
    cout<<"First element-->"<<q.front()<<endl;
    q.pop();
    cout<<"Size After pop-->"<<q.size()<<endl;
    cout<<"First element-->"<<q.front()<<endl;



}