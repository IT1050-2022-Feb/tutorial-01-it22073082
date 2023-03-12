/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

// main function start
int main() {

  // variable decleration
  float mark1, mark2, sum, ave;

  // user inputs
  printf("Enter the mark 1: ");
  scanf("%f", &mark1);
  printf("Enter the mark 2: ");
  scanf("%f", &mark2);

  // calculation
  sum = mark1 + mark2;

  ave = sum / 2.0;

  // displaying output
  printf("average of the two marks = %.2f", ave);

  return 0;
}
