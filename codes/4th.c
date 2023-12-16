#include <stdio.h>

float calculateAvg(int num1, int num2, int num3) {
    float avg;
    avg=(num1 + num2 + num3) / 3;
  return avg;
}

int main() {
  float num1, num2, num3, avg;

  printf("Enter three numbers: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  avg = calculateAvg(num1, num2, num3);

  printf("Average: %0.2f\n", avg);

  return 0;
}
