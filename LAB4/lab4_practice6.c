#include<stdio.h>
int main()
{
    int n,a,first,last;
    printf("Enter the number:\n");
    scanf("%d", &n);
    last = n%10;
    while(n>=10){
        n = n/10;
    }
    first = n;
    printf("First digit = %d\nLast digit = %d\n");
    return 0;
}
