/** program to create a simple calculator using switch case**/
#include<stdio.h>
int main()
{
    char ch;
    int a, b, result;
    printf("Enter any operator( +, -, *, /):\n");
    scanf("%c", &ch);
    printf("Enter two operands:\n");
    scanf("%d%d", &a, &b);
    switch(ch)
    {
    case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result = a/b;
        break;
    }
    printf("Result = %d", result);
    return 0;
}
