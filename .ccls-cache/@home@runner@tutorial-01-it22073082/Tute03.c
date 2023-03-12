/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

// start of main function
int main() {

  // variable decleration
  int num1, sum, i;

  // user inputs
  printf("Enter number: ");
  scanf("%d", &num1);

  sum = 0;

  // start of for loop
  for (i = 1; i <= num1; i++) {
    sum = sum + i;
  }
  // displaying output

  printf("sum = %d", sum);

  return 0;
}
