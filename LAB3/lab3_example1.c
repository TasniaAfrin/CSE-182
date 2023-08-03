//example 1
#include<stdio.h>
int main()
{
    int a, b, c, d;
    float ratio;
    printf("Enter the values\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(c-d != 0){
        ratio = (a+b)/(c-d);
        printf("Ratio is %f\n", ratio);
    }
    return 0;
}
