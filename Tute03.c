/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int n;
  int i;
  int total = 0;

  printf("How many numbers do you want to add: ");
  scanf("%d", &n);

  for( i = 1; i <= n; i++)
  {
    total += i;
  }

  printf("The summation is: %d",total);
  return 0;
}

