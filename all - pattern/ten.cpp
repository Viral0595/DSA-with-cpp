#include <iostream>
using namespace std;

main()
{
    for (int v = 1; v <= 5; v++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (v % 2 == 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        for (int k = 5; k > v; k--)
        {
            cout << "    ";
        }
        for (int j = v; j >= 1; j--)
        {
            if (v % 2 == 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    for (int v = 5; v >= 1; v--)
    {
        for (int j = 1; j <= v; j++)
        {
            if (v % 2 == 0)
            {
                cout << j << " ";
            }
            else
            {
                char ch = j + 64;
                cout << ch << " ";
            }
        }
        for (int k = 5; k > v; k--)
        {
            cout << "    ";
        }
        for (int j = v; j >= 1; j--)
        {
            if (v % 2 == 0)
            {
                cout << j << " ";
            }
            else
            {
                char ch = j + 64;
                cout << ch << " ";
            }
        }
        cout << endl;
    }
}