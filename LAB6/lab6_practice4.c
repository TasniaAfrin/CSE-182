/**to copy all elements of an array to another one**/

#include<stdio.h>
int main()
{

    int array1[10], array2[10], i, num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter the values of all elements: ");
     for(i=0; i<num; i++){
        scanf("%d", &array1[i]);
     }
     for(i=0; i<num; i++){
        array2[i] = array1[i];
     }
     printf("The copied array is :");

     for(i=0; i<num; i++)
        printf("\narray2[%d] = %d", i, array2[i]);
     return 0;
}
