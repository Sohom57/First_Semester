#include<stdio.h>
int main(){
    int x;
    int y;
    printf("Enter Number : ");
    scanf("%d", &x);

    while (x<=10){
        
        x=x+1;

    }
    printf("The total is = %d\n", ((x*(x+1))/2));

    return 0;
}
