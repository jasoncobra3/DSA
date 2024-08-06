#include<iostream>
#include<string>
using namespace std;

char getMaxOccChar(string s){
    int arr[26]={0};
    //create an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        
        number=ch-'a';
        arr[number]++;
    }

    int maxi=-1 , ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    return 'a'+ans;
}
int main(){
    

    string s;
    cout<<"Enter the string :";
    cin>>s;
    cout<<"Maximum occuring character is:"<<getMaxOccChar(s);
}