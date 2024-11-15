#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string id;
    cin >> id;

    float consumerType, previousReading, presentReading, unitsUsed, basicAmount, gst, totalAmount;

    cin >> consumerType >> previousReading >> presentReading;

    // Calculate the units used
    unitsUsed = presentReading - previousReading;

    // Print Consumer ID
    cout << "Consumer ID-" << id << endl;

    // Ensure valid input
    if (unitsUsed < 0) {
        cout << "Error: Present reading cannot be less than previous reading." << endl;
        return 1; // Exit with error code
    }

    // Calculate basic amount based on consumer type
    if (consumerType == 1) { // Domestic
        basicAmount = unitsUsed * 8.0;
    } else if (consumerType == 2) { // Industrial
        basicAmount = unitsUsed * 12.50;
    } else {
        cout << "Invalid consumer type." << endl;
        return 1; // Exit with error code
    }

    // If units used is greater than 100, apply the discount
    if (unitsUsed > 100) {
        basicAmount -= 1.30 * basicAmount; // Apply 30% discount on the basic amount
    }

    // Calculate GST
    gst = basicAmount * 0.18;

    // Calculate total amount
    totalAmount = basicAmount + gst;

    // Output the total amount with two decimal places
    cout << "Total Amount with GST-" << fixed << setprecision(2) << totalAmount << endl;

    return 0;
}
