#include<stdio.h>
int main(){
    int year;
    printf("Enter Year:");
    scanf("%d", &year);

    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("Leap year");
    }
    printf("Not a Leap year \n");
    if(year%4==1){
        printf("Nearest Leap year is: %d", year-1);
    }
    if(year%4==2){
        printf("Nearest Leap year is: %d", year-1);
    }
    if(year%4==3){
        printf("Nearest Leap year is: %d", year-3);
    }
    if(year%100==0&&year%400!=0){
        printf("Nearest Leap years are: %d & %d", year-4, year+4);
    }

    return 0;


}
