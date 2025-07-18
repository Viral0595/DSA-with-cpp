#include <iostream>
using namespace std;
main()
{
    int n, m;
    cout << "Enter any number : ";
    cin >> n;
    m = n;
    int last = n % 10;
    while (m >= 10)
    {
        m = m / 10;
    }
    int sum = m + last;
    cout << "first value = " << m << endl;
    cout << "Last last = " << last << endl;
    cout << "Final Value is = " << sum;
}