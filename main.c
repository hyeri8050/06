#include <stdio.h>
#include <stdlib.h>

//The sum of two integers
int sumTwo(int a, int b)
{
  return (a+b);
}

//The square result of n
int square (int n)
{
  return (n*n);
}

//Print the bigger integer
int get_max (int x, int y)
{
    if (x >= y)
       return (x);
    else
       return (y);
}

int main(int argc, char *argv[])
{
  int result1;
  result1 = sumTwo(5,6);
  printf("The sum of two integers : %d\n", result1);
  
  int result2;
  result2 = square(5);
  printf("The square result of 5 is : %d\n", result2);
  
  int result3;
  result3 = get_max(2,3);
  printf("The bigger integer is : %d\n", result3);
  
  system("PAUSE");	
  return 0;
}
