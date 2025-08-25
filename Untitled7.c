#include<stdio.h>
int main(){
    int a, b , c;
    printf("Enter Angles:\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a+b+c==180){
        printf("Triangle is Valid");
    }
    else{
        printf("Not a Valid Triangle");
    }

    return 0;
}
