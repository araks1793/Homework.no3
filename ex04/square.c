#include<stdio.h>
int main()
{
    int size, a, b;
    
    printf( "Input the size of the square: \n" );
    scanf( "%d", &size );
    
    if(size < 1 || size > 10) {
        printf("Size should be in the range 1 to 10\n");
        return 0;
    }
    
     for(a=0; a<size; a++) {
        for(b=0; b<size; b++) {
            printf(" #");
        }
        printf("\n");
    }

    return 0;
}
