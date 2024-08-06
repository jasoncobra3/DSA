#include<iostream>
using namespace std;


char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp= ch -'A'+'a';
        return temp;
    }
}

bool checkPalindrom(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLowercase(a[s])!=toLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}
int length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name:";
    cin>>name;

    
    cout<<"Your name is:"<<name<<endl;

    // name[2] = "\0";
    // cout<<"Your name is:"<<name<<endl;

    int len=length(name);
    cout<<"Length of string is:"<<len<<endl;

    reverse(name , len);
    cout<<"Reverse string is:"<<name<<endl;


    cout<<"String is palindrome or not:"<<checkPalindrom(name, len)<<endl;

}