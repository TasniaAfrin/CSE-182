#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b  && a>c){
        printf("Max = %d", a);
    }
    else if(b>c){
        printf("Max = %d", b);
    }
    else{
        printf("Max = %d", c);
    }
    return 0;
}
