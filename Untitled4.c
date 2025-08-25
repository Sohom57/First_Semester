#include<stdio.h>

int main(){
    int x;
    printf("Enter Value:\t");
    scanf("%d", &x);
    x=x%2;

    if(x==0){
            printf("Even");
    }
    else{
            printf("Odd");
    }



    return 0;}

