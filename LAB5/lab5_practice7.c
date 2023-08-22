/**to enter any number and find its prime factors**/

#include<stdio.h>
int main()
{
    int i, j, isPrime, num;
    printf("Enter a number to find prime factors:\n");
    scanf("%d", &num);
    printf("All prime factors of %d are:\n", num);
    for(i=2; i<=num; i++){
            if(num%i == 0)
            {
            isPrime = 1;
    for(j=2; j<=i/2; j++)
    {
        if(i%j == 0)
        {
            isPrime = 0;
            break;
        }
    }
        if(isPrime == 1){
            printf("%d ", i);
        }
    }
    }
    return 0;
}
