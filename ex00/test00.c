#include <stdio.h>

int main()
 {
    float a, b, c, P;
    printf("Input the first number\n: ");
    scanf("%f", &a);
    printf("Input the second number\n: ");
    scanf("%f", &b);
    printf("Input the third number\n: ");
    scanf("%f", &c);

    if(a < (b+c) && b < (a+c) && c < (a+b))
     {
     P=a+b+c;
     printf("\nPerimeter = %.1f\n", P); 

   }
    else 
     {
        printf("Not possible to create a triangle..!");
        
	return 0;
     }
}
