/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  //declare variables
  int mark_1, mark_2;
  float average;

  printf("Enter mark 1 here: ");
  scanf("%d", &mark_1);

  printf("Enter mark_2 here: ");
  scanf("%d", &mark_2);

  average = (mark_1 + mark_2) / 2.0;

  printf("The average mark is: %.2f", average);


  return 0;
}

