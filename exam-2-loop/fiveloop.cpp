#include<iostream>
using namespace std;
main(){
    char abc='a';
    do{
        cout<<abc<<" ";
        abc+=4;
    }while(abc>=0);
}
main(){
    char abc='a';
    for(; abc>=0; abc+=4){
        cout << abc <<"";
    }
}