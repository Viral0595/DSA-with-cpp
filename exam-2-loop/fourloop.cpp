#include<iostream>
using namespace std;
main(){
    char first,second;
    int count=1;
    cout<<"Enter first Charcter : ";
    cin>>first;
    cout<<"Enter second Charcter : ";
    cin>>second;
    cout<<"Charcters "<<first<<"to"<<second<< ": ";
    char value=first;
    while(value<=second){
        cout<<value<<" ";
        value++;
        count++;
    }
    cout<<endl;
    cout<<"The Number Of Charcter : "<<count<<endl;
}