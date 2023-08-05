#include<stdio.h>
int main()
{
    int i, num, fact=1;
    printf("Enter any number:\n");
    scanf("%d", &num);
    for(i=num; i>0; i--){
        fact = fact*i;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
