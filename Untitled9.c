#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a==b && b==c){
        printf("The Triangle is EQUILATERAL");
    }
    else if(a==b || b==c || c==a){
        printf("The Triangle is ISOSCLES");
    }
    else{
        printf("The Triangle is SCALENE");
    }

    return 0;
}
