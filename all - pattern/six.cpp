#include <iostream>
using namespace std;

main()
{
    for (int v = 1; v <= 5; v++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << j;
        }
        for (int k = 5; k > v; k--)
        {
            cout << "  ";
        }
        for (int j = v; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}