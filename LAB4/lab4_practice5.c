#include<stdio.h>
int main()
{
    int n, a=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while(n>0){
        n=n/10;
        a++;
    }
    printf("No. of digits = %d", a);
    return 0;
}
