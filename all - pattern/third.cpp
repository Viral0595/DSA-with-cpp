#include <iostream>
using namespace std;

main()
{
    for (int v = 5; v >= 1; v--)
    {
        for (int k = 1; k < v; k++)
        {
            cout << " ";
        }
        for (int a = v; a <= 5; a++)
        {
            cout << a;
        }
        cout << endl;
    }
}