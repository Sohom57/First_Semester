#include<stdio.h>
int main(){
    int amount, a1000, b500, c100, d50, e20, f10, g5, h2, i1;

    a1000=b500=c100=d50=e20=f10=g5=h2=i1=0;

    printf("Please Enter Amount:");
    scanf("%d", &amount);

    if(amount>=1000){
        a1000   =amount/1000;
        amount -=a1000*1000;
    }
    if(amount>=500){
        b500   =amount/500;
        amount-=b500*500;
    }
    if(amount>=100){
        c100   =amount/100;
        amount-=c100*100;
    }
    if(amount>=50){
        d50    =amount/50;
        amount-=d50*50;
    }
    if(amount>=20){
        e20    =amount/20;
        amount-=e20*20;
    }
    if(amount>=10){
        f10     =amount/10;
        amount -=f10*10;
    }
    if(amount>=5){
        g5      =amount/5;
        amount -=g5*5;
    }
    if(amount>=2){
        h2      =amount/2;
        amount -=h2*2;
    }
    if(amount>=1){
        i1   =amount;
    }
    int total= a1000+b500+c100+d50+e20+f10+g5+h2+i1;
    printf("Total Number of Notes:  %d\n",total);
    printf("1000 =%d\n", a1000);
    printf("500  =%d\n", b500);
    printf("100  =%d\n", c100);
    printf("50   =%d\n", d50);
    printf("20   =%d\n", e20);
    printf("10   =%d\n", f10);
    printf("5    =%d\n", g5);
    printf("2    =%d\n", h2);
    printf("1    =%d\n", i1);

    return 0;
}
