//A C program to find the reverse of a number


#include<stdio.h>
int main()
{
    int rev=0, n, remainder;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while( n != 0){
        remainder = n%10;
        rev = rev*10+remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
