#include <iostream>
using namespace std;

main()
{
    for (int v = 1; v <= 5; v++)
    {
        for (int k = 1; k <= 5; k++)
        {
            if (v == 1 || v == 3 || k == 1 || (v == 2 && k == 5))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}