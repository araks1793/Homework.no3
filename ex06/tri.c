#include<stdio.h>
int main(){
   int side1, side2, side3;
   printf("Input three sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   if(side1 == side2 && side2 == side3)
      printf("This is an equilateral triangle.\n");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("This is an isosceles triangle.\n");
   else
      printf("This is a scalene triangle.\n");
   return 0;
}
