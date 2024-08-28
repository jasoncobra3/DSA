#include<iostream>
using namespace std;

void update(int **p2){
    p2=p2+1;
    //will there be any change-->NO

    // *p2=*p2+1;
    //will there be any change-->YES

    // **p2=**p2+1;
    //will there be any change-->YES
}
int main(){
    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;

    cout<<"Printing P-->"<<ptr<<endl;
    cout<<"Address of Ptr-->"<<&ptr<<endl;
    cout<<"Ptr2-->"<<ptr2<<endl;

    cout<<"I-->"<<i<<endl;
    cout<<"*ptr-->"<<*ptr<<endl;
    cout<<"**ptr2-->"<<**ptr2<<endl;

    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;

    cout<<&ptr<<endl;
    cout<<ptr2<<endl;

    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    update(ptr2);
    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;

    return 0;
}