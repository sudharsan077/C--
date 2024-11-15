#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    
    double discriminant = B * B - 4 * A * C;

    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-B + sqrt(discriminant)) / (2 * A);
        double root2 = (-B - sqrt(discriminant)) / (2 * A);
        cout << fixed << setprecision(2);
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // One real root (double root)
        double root = -B / (2 * A);
        cout << fixed << setprecision(2);
        cout << "Root1 = " << root << endl;
        cout << "Root2 = " << root << endl;
    } else {
        // Complex roots
        double realPart = -B / (2 * A);
        double imaginaryPart = sqrt(-discriminant) / (2 * A);
        cout << fixed << setprecision(2);
        cout << "Root1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "Root2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
