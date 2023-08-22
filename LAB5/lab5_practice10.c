/**to print day of week using switch case**/

#include<stdio.h>
int main()
{
    int week;
    printf("Enter week number(1-7):");
    scanf("%d", &week);
    switch(week)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuseday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thursday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
