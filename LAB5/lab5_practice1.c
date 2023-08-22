// Write a c program to enter any number and check whether the number is palindrome or not.

#include<stdio.h>
int main()
{
    int n, rev=0, remainder, m;
     printf("Enter the number:\n");
    scanf("%d", &n);
    m = n;
    while( n != 0){
        remainder = n%10;
        rev = rev*10+remainder;
        n /= 10;
    }
    if( rev == m ){
        printf("The number is a palindrome.", m);
    }else{
        printf("The number is not a palindrome.", m);
}
return 0;
}
