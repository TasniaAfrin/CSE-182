/**To find the sum of n numbers using array**/

#include<stdio.h>
#define SIZE 10
int main()
{
    int i, a[SIZE], sum=0;
    printf("Enter the numbers of array elements:\n") ;
    for(i=0; i<=SIZE-1; i++){
            scanf("%d", &a[i]);
            sum += a[i];
    }
    printf("Sum of array element numbers is %d\n", sum);
}


