#include<stdio.h>
int main (){
    int num;
    printf("Enter Number:\t");
    scanf("%d", &num);

    while(num!=0){

        if (num<1||num>12){
            printf("Invalid");
        }

        else if (num >= 10)
        {
           printf("x");
           num -= 10;
        }

        else if (num >= 9)
        {
           printf("ix");
           num -= 9;
        }

        else if (num >= 5)
        {
           printf("v");
           num -= 5;
        }

        else if (num >= 4)
        {
           printf("iv");
           num -= 4;
        }

        else if (num >= 1)
        {
           printf("i");
           num -= 1;
        }

    }
    return 0;


}

