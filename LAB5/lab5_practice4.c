/**Write a program to check whether a number is prime or not**/

#include<stdio.h>
int main()
{
     int i, n, m=0;
     printf("Enter a number:\n");
     scanf("%d", &n);
     for(i=1; i<=n; i++){
        if(n%i == 0){
            m++;
        }
     }
     if(m == 2){
        printf("It is a prime number");
     }else{
     printf("It is not a prime number");
     }
     return 0;
}
