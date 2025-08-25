#include<stdio.h>
int main(){
    printf("The general quadric equation is =");
    printf("ax*x+b*x+c\n\n");
    double a,b,c,d,x,y;
    printf("Enter Value of \n 'a' = ");
    scanf("%lf", &a);
    printf("Enter Value of \n 'b' = ");
    scanf("%lf", &b);
    printf("Enter Value of \n 'c' = ");
    scanf("%lf", &c);

    d=b*b-4*a*c;

    if(d>0){
        x=(-b+sqrt(b*b-4*a*c))/2*a;
        y=(-b-sqrt(b*b-4*a*c))/2*a;
        printf("The roots are: %lf & %lf", x, y);
    }
    if(d==0){
        x=-b/2*a;
        y=-b/2*a;
        printf("The roots of this quation are: %lf & %lf", x, y);
    }
    else{
        printf("The roots are imaginary!!!");
    }

    return 0;
}










