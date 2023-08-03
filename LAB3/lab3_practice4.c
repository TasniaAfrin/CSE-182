#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    if(year%4 == 0 && year%100 != 0 || year%400 == 0){
        printf("LEAP YEAR", year);
    }
    else{
        printf("NOT A LEAP YEAR", year);
    }
    return 0;
}
