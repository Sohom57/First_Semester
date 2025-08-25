#include<stdio.h>
int main(){
    int x;
    printf("Enter Year : ");
    scanf("%d", &x);
    if (x==0)
    {
        printf("Invalid!!!");
    }
    else if(x%4==0 && x%100!=0|| x%400==0)
    {
        printf("%d is a Leap-Year", x);
    }
    else
    {
        printf("Not a Leap-Year\n");
        while(x%4!=0 || x%100==0 || x==0)
        {
            x++;
            if(x%4==0 && x%100!=0 || x%400==0)
            {
                printf("Next Leap-Year is %d", x);
            }
        }
    }
return 0;
}
