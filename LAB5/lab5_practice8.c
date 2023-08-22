/**to check whether a number is strong or not**/
#include<stdio.h>
int main()
{
    int num, original, rem, i, fact, sum=0;
    printf("Enter number:");
    scanf("%d", &num);
    original = num;
    while(num != 0){
        rem = num%10;
        fact = 1;
        for(i=1; i<=rem; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        num = num/10;
    }
    if(sum == original)
    {
        printf("%d is strong.", original);
    }
    else{
        printf("%d is not strong.", original);
    }
    return 0;
}
