/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1=12,mark2=18;
  float avg;
  avg=(mark1+mark2)/2;
  printf("%.2f",avg);
  return 0;
}

