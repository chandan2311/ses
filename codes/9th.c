#include <stdio.h>

// Function to calculate the number of employees eligible for training
int calculateEmployeesForTraining(int ages[], int n) {
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (ages[i] >= 22 && ages[i] <= 28) {
            count++;
        }
    }

    return count;
}

int main() {
    int n; // Number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    int ages[n]; // Array to store ages of employees

    // Input the age of each employee
    for (int i = 0; i < n; ++i) {
        printf("Enter age of employee %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    // Calculate the number of employees eligible for training
    int eligibleForTraining = calculateEmployeesForTraining(ages, n);

    // Print the results
    printf("\nNumber of employees eligible for training: %d\n", eligibleForTraining);
    printf("Number of employees left in the branch: %d\n", n - eligibleForTraining);

    return 0; // Exit successfully
}
