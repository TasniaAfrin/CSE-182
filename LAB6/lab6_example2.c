/**array traversing**/

#include<stdio.h>
int main()
{
    int array[5], i;

    printf("Enter 5 integers:");

    for(i=0; i<5; ++i){
        scanf("%d\n", &array[i]);
    }
    printf("Displaying the integers:");
    for(i=0; i<5; ++i){
        printf("%d\n", array[i]);
    }
    return 0;
}
