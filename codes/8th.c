#include <stdio.h>

// Function to calculate the electricity charges
float calculateElectricityCharges(int units) {
    float totalCharges = 0.0;

    // Meter charge
    totalCharges += 100.0;

    // For the first 200 units
    if (units <= 200) {
        totalCharges += units * 0.80;
    }
    // For the next 100 units
    else if (units <= 300) {
        totalCharges += 200 * 0.80 + (units - 200) * 0.90;
    }
    // Beyond 300 units
    else {
        totalCharges += 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.0;
    }

    return totalCharges;
}

int main() {
    char userName[50];
    int unitsConsumed;

    // Input user details
    printf("Enter the name of the user: ");
    scanf("%s", userName);

    printf("Enter the number of units consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate electricity charges
    float charges = calculateElectricityCharges(unitsConsumed);

    // Check for the surcharge
    if (charges > 400.0) {
        // Additional surcharge of 15%
        charges += 0.15 * charges;
    }

    // Print the results
    printf("\nUser: %s\n", userName);
    printf("Units consumed: %d\n", unitsConsumed);
    printf("Total Charges: Rs. %.2f\n", charges);

    return 0; // Exit successfully
}
