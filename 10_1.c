#include<stdio.h>
int main(){
    int x=1;
    int y;
    printf("Enter Number : ");
    scanf("%d", &y);

    while (x<=10){

        printf("%d*%d = %d\n", y, x, x*y);

        x=x+1;
        
    }

    return 0;
}
