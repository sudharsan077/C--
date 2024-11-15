#include <iostream>
using namespace std;

int main() {
    int rows;
    cin >> rows;

    for (int i = 1; i < rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print the first star of the row
        cout << "*";

        // Print spaces between the two stars if it's not the first row
        if (i > 1) {
            for (int k = 1; k <= 2 * (i - 1) - 1; k++) {
                cout << " ";
            }
            // Print the second star for the row
            cout << "*";
        }
        
        cout << endl;  // Move to the next line
    }
    
    // Print the last row with 9 stars
    for (int j = 1; j <=2* rows-1; j++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}
