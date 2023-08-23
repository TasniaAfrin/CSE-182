/**to find reverse of an array**/

#include<stdio.h>
int main()
{
    int array[5], i;
    printf("Enter the value of array elements:\n");
    for(i=0; i<5; i++){
        scanf("%d", &array[i]);
    }
    printf("Showing the values of an array in reverse:\n");
    for(i=4; i>=0; i--){
        printf("%d\n", array[i]);
    }
    return 0;
}
