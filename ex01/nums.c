#include <stdio.h>

int main()
{
  int a, i, b = 1, c = 0;
  printf("Input number of lines: ");
  scanf("%d", &a);

  for(i = 1; i <= a; i++)
  {
    printf("%d %d %d\n", i, i*i, i*i*i);
  }
  return 0;
}
