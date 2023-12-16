#include <stdio.h>

// Function to check if the student qualifies for the degree
void checkQualification(float percentageA, float percentageB) {
    if (percentageA >= 55.0 && percentageB >= 45.0) {
        // Rule (a)
        printf("Congratulations! The student qualifies for the degree.\n");
    } else if (percentageA >= 45.0 && percentageB >= 5.0) {
        // Rule (b)
        printf("Congratulations! The student qualifies for the degree.\n");
    } else if (percentageB < 45.0 && percentageA >= 65.0) {
        // Rule (c)
        printf("The student is allowed to reappear in the examination for subject B to qualify.\n");
    } else {
        // Rule (d)
        printf("Sorry, the student has failed to qualify for the degree.\n");
    }
}

int main() {
    float percentageA, percentageB;

    // Input percentage for subject A
    printf("Enter the percentage obtained in subject A: ");
    scanf("%f", &percentageA);

    // Input percentage for subject B
    printf("Enter the percentage obtained in subject B: ");
    scanf("%f", &percentageB);

    // Check qualification based on the rules
    checkQualification(percentageA, percentageB);

    return 0; // Exit successfully
}
