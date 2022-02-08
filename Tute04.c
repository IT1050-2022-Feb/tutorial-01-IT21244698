/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//declare minimum function
int minimum(int number_1,int number_2);
//declare maximum function
int maximum(int number_1, int number_2);
//declare multiply function
int multiply(int number_1,int number_2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int number_1,int number_2)
{
  int min;

  min = number_1;
  if (min > number_2)
  {
    min = number_2;
  }
  return min;
}
int maximum(int number_1,int number_2)
{
  int max;

  max = number_1;
  if ( max < number_2)
  {
    max = number_2;
  }
  return max;
}
int multiply(int number_1,int number_2)
{
  return number_1 * number_2;
}
