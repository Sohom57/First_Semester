#include<stdio.h>
int main(){
    int a, i=1;
    scanf("%d", &a);

    if(a%4==0 && a%100!=0 || a%400==0)
    {
        printf("%d is a Leap-year", a);
    }
    else{
        while(a%4!=0)
        {
            a++;
        }
        if(a%4==0 && a%100!=0 || a%400==0)
        {
            printf("Not a Leap-year\nNext Leap-Year is = %d", a);
        }
        else if(a%4==0 && a%100!=0 || a%400!=0)
        {
            printf("Not a Leap-year\nNext Leap-Year is = %d", a+4);
        }      
    }
return 0;
}