#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // First Half - Right Angle Triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i * j;
            if (j < i) {
                cout << " ";  // Space between numbers
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    // Second Half - Inverted Right Angle Triangle
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i * j;
            if (j < i) {
                cout << " ";  // Space between numbers
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
