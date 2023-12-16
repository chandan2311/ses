#include <stdio.h>

float convertMilesToKilometers(float miles) {
    float km;
    km = miles * 1.60934;
  return km;
}

int main() {
  float miles,kilometer;

  printf("Enter the distance in miles: ");
  scanf("%f", &miles);

  kilometer = convertMilesToKilometers(miles);

  printf("%.2f miles is equal to %.2f kilometers.\n", miles, kilometer);

  return 0;
}
