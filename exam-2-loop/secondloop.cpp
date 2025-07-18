#include <iostream>
using namespace std;

int main()
{
    int num, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;
    temp = num;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = num;
    int position = count;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, position);
        temp /= 10;
        position--;
    }

    // Output result
    if (sum == num) {
        cout << num << " is a Disarium number." << endl;
    } else {
        cout << num << " is NOT a Disarium number." << endl;
    }

    return 0;
}
