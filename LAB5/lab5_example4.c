//A program to demonstrate the use of switch statement

#include<stdio.h>
int main(){
    char ch = 'E';
    switch (ch)
    {
        case 'A':
            printf("CaseA");
            break;
        case 'B':
            printf("CaseB");
            break;
        case 'C':
            printf("CaseC");
            break;
        default:
            printf("Default");
    }
    return 0;
}
