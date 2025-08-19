#include <iostream>
using namespace std;

main()
{
    for (int v = 5; v >= 1; v--)
    {
        for (int j = 5;j > v;j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= v; k++)
        {
            cout << k % 2;
        }

        cout << endl;
    }
}