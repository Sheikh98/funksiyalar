#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


void
swap (int son1, int son2)
{
  int C;
  C = son1;
  son1 = son2;
  son2 = C;
  printf ("A = %d\n, B = %d\n", son1, son2);
}

int main ()
{
  int A, B; 
  printf("A = ");
  scanf ("%d", &A);

  printf("B = ");
  scanf ("%d", &B);
  swap(A,B);
  return 0;
}
