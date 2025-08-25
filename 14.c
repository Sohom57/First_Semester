#include <stdio.h>
int main(){
    int unit;
    double x, y, z;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50){
        x = unit * 0.5;
    }
    else if(unit <= 150){
        x = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250){
        x = 100 + ((unit-150) * 1.20);
    }
    else{
        x = 220 + ((unit-250) * 1.50);
    }

    z = x * 0.2;
    y  = x + z;

    printf("Electricity Bill =%.2lf tk", y);

    return 0;
}
