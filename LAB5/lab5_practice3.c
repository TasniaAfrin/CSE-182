/** Write a c program to find LCM of two numbers**/

#include<stdio.h>
int main()
{
    int i, num1, num2, max, lcm=1;
    printf("Enter two numbers to find LCM:\n");
    scanf("%d%d", &num1, &num2);
    max = (num1>num2) ? num1 : num2;
    i = max;
    while(1)
    {
        if(i%num1==0 && i%num2==0){
            lcm = i;
            break;
        }
        i += max;
    }
    printf("LCM of %d and %d is %d", num1, num2, lcm);
    return 0;
}
