#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter a number: ";
    cin >> number;

    int counts[10] = {0};

    while (number > 0) {
        int digit = number % 10;
        counts[digit]++;
        number = number / 10;
    }

    cout << "Digit counts:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << ": " << counts[i] << endl;
    }

    return 0;
}
