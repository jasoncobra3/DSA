#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Aryan");
    s.push("Aniket");
    s.push("Anmol");

    cout<<"Top element-->"<<s.top()<<endl;
    cout<<"Sizeof the stack-->"<<s.size()<<endl;
    s.pop();
    cout<<"Top element-->"<<s.top()<<endl;

    cout<<"Sizeof the stack-->"<<s.size()<<endl;
    cout<<"Empty or not-->"<<s.empty()<<endl;

}