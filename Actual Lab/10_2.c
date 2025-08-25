#include<stdio.h>
int main(){
    int x, y=1;
    printf("Enter Number : ");
    scanf("%d", &x);

    while(y<=10)
    {
        printf("%d*%d = %d\n", x, y, x*y);
        y++;
    }

return 0;
}