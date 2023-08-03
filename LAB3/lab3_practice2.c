#include<stdio.h>
int main()
{
    int number;
    printf("Enter the value:\n");
    scanf("%d", &number);
    if(number < 0){
        printf("The number is negative.");
    }
    else if(number == 0){
        printf("The number is zero.");
    }
    else{
        printf("The number is positive.");
    }
    return 0;
}
