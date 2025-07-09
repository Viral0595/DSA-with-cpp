#include <iostream>
using namespace std;

main ()
{
    int unit;
    float bill ;
     cout << " enter your unit number : " <<enld ;
     cin >> unit ;

     if (unit <= 50){
        bill = unit * 0.50 ;
     }
     else if (unit <= 150){
        bill = 25 + (unit - 50) * 0.75;
     }
     else if (unit <= 250){
        bill = 100 + (unit - 50) * 1.20;
     }
     else (unit <= 150){
        bill = 220 + (unit - 50) * 1.50;
     }
     
     float total ;
    total = bill + (bill * 0.20);

    cout << " your bill amount is here :" << total <<endl ;
    
}