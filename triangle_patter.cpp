#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int term = 1;
    for (int i = 1; i <= n; ++i) {
        cout << term << " ";
        if (i % 3 == 0) {
            term *= 3;
        } else {
            term += 1;
        }
    }
    cout << endl;
    return 0;
}
