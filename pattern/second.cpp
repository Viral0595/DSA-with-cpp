#include <iostream>
using namespace std;
main()
{
    int j= 11;
    int row = 4;

    for (int v = 1; v <= row; v++)
    {
        for (int k = 1; k <= v; k++)
        {
            cout << j<< " ";
            j++;
        }
        cout << endl;
    }
}