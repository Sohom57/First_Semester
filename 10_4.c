#include<stdio.h>
int main(){
    int a, i=1;
    printf("Enter Year : ");
    scanf("%d", &a);
    
    while((a%4!=0 && a%100==1000) || a%400!=0 && i<5){
        i++;
    }
    if((a%4==0 && a%100!=100)|| a%400==0){
        printf("Next Leap Year is = %d\n", a+4);
    }
    
    else if(((a+3)%4==0 && (a+3)%100!=100)|| (a+3)%400==0){
        printf("Next Leap Year is = %d\n", a+3);
    }
    else if(((a+2)%4==0 && (a+2)%100!=100)|| (a+2)%400==0){
        printf("Next Leap Year is = %d\n", a+2);
    }
    else if(((a+1)%4==0 && (a+1)%100!=100)|| (a+1)%400==0){
        printf("Next Leap Year is = %d\n", a+1);
    }
return 0;
}