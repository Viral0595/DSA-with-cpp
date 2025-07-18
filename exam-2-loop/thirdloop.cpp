#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number :- ";
    cin >> num;

    for (; num >= 10; )
        num = num % 10 + num / 10 % 10 + num / 100 % 10 + num / 1000 % 10 + num / 10000 % 10;

    cout << "Final result :- " << num << endl;
}

