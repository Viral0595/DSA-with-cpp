#include <iostream>
using namespace std;
main()
{
    int n, count = 0;
    cout << "Enter any Number:";
    cin >> n;
    for (; n != 0; count++)
    {
        n /= 10;
    }
    cout << "Your number :- " << endl;
}