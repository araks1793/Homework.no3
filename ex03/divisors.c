#include <stdio.h>
int main ()
{
  int i, n;
  printf("\nInput an integer: \n");
  scanf("%d", &n);
  printf("All the divisors of %d are: \n",n);
  for (i = 1; i <= n; i++)
  {

    if (n % i == 0)
    {

      printf("%d\n", i);

    }
  }
}
