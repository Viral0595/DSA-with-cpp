#include <iostream>
using namespace std;

main()
{
    int a = 1;       
    int add = 2; 
    int b;               
    int c = 1;       

    cout << "Enter number : ";
    cin >> b;

    while (c <= b)
    {
        cout << a << endl;
        a += add;   
        add++;        
        c++;            
    }
}