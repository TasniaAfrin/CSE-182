#include<stdio.h>
int main()
{
    float bill, units, total_bill, sur_charge;
    printf("Enter the total units consumed:\n");
    scanf("%f", &units);
    if(units<=50){
        bill= units*0.50;
    }
    else if(units<=150){
        bill= 50*.50+((units-50)*0.75);
    }
    else if(units<=250){
        bill= 100+((units-150)*1.20);
    }
    else{
        bill= 220+((units-250)*1.50);
    }
    sur_charge = bill*.20;
    total_bill = bill+sur_charge;
    printf("Electricity bill=Rs. %.2lf", total_bill);
    return 0;
}
