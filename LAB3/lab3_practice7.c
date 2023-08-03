#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the values of a,b and c\n");
    scanf("%f%f%f", &a, &b, &c);
    d= b*b-4*a*c;
    if(d>0){
        r1 = -b+sqrt(d)/(2*a);
        r2 = -b-sqrt(d)/(2*a);
    printf("Distinct and real roots exists: .%.2lf and %.2lf", r1,r2);
    }
    else if(d == 0){
        r1 = r2 = -b/(2*a);
        printf("The roots are equal: %.2lf and %.2lf", r1,r2);
    }
    else{
        printf("The roots are imaginary.");

}
return 0;
}
