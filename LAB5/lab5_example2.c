// A program to demonstrate the break statement.

#include<stdio.h>
void main()
{
    int i;
    for(i=0; i<10; i++){
        printf("%d\n", i);
            if(i == 6)
                break;
            }
    printf("Came outside of the loop i = %d\n", i);
}
