#include <iostream>
using namespace std;

int main() {
    double fir = 1, sec = 2, thi = 3, n;
    
    // Input number of terms
    cin >> n;

    // Output the first three terms if n is greater than or equal to their indices
    if (n >= 1) cout << fir << " ";
    if (n >= 2) cout << sec << " ";
    if (n >= 3) cout << thi << " ";

    // Loop to generate the rest of the terms
    for (int i = 4; i <= n; i++) {
        double nt; // next term
        if (i % 2 == 0) {
            nt = thi * 3; // even index
        } else {
            nt = thi * 1.5; // odd index
        }
        cout << nt << " "; // Print the next term
        
        // Update the terms for the next iteration
        fir = sec;
        sec = thi;
        thi = nt;
    }

    cout << endl; // End line after printing all terms
    return 0;
}
