#include<stdio.h>
int main(){

    int sum, rem, qu, c, a;
    sum=0;
    scanf("%d", &a);
    qu=a/10;
    rem = a%10;
    sum=sum+rem;
    c=qu;
    qu=qu/10;
    rem=c%10;
    sum=sum+rem+qu;
    printf("%d", sum);

    return 0;

}
