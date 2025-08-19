#include <iostream>
using namespace std;

main()
{
    for (int v = 5; v >= 1; v--)
    {
        for (int j = 1; j < v; j++)
        {
            cout << " ";
        }
        for (int k = v; k <= 5; k++)
        {
            cout << "*";
        }
        for (int k = 4; k >= v; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int v = 1; v <= 5; v++)
    {
        for (int k = 1; k < v; k++)
        {
            cout << " ";
        }
        for (int k = v; k <= 5; k++)
        {
            cout << "*";
        }
        for (int k = 4; k >= v; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}