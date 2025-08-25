#include<stdio.h>
int main(){
    float buy, sell;
    printf("Enter Bought Amount:\t");
    scanf("%f", &buy);
    printf("Enter Selling Price: \t");
    scanf("%f", &sell);

    if(buy>sell){
        printf("Loss");
    }
    if(sell>buy){
        printf("Profit");
    }
    if(sell=buy){
        printf("Lav Loss nai, Jibontai loss");
    }
    return 0;
}
