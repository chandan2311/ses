#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n, rollNumberToSearch;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int rollNumbers[n];

    // Input roll numbers
    printf("Enter the roll numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &rollNumbers[i]);
    }

    // Input the roll number to search
    printf("Enter the roll number to search: ");
    scanf("%d", &rollNumberToSearch);

    // Perform linear search
    int result = linearSearch(rollNumbers, n, rollNumberToSearch);

    // Check and display the result
    if (result != -1) {
        printf("Roll number %d found at index %d.\n", rollNumberToSearch, result);
    } else {
        printf("Roll number %d not found in the array.\n", rollNumberToSearch);
    }

    return 0;
}
