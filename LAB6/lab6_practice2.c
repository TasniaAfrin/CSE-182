/**to print all negative elements in an array**/

#include<stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE], i;
    printf("Enter the elements in array:");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nAll negative elements in array are:");
    for(i=0; i<SIZE; i++){
        if(array[i] < 0){
            printf("%d\t" , array[i]);
        }
    }
    return 0;
}
