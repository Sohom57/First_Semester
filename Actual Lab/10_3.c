#include<stdio.h>
int main(){
    int x, y=1, z=0;
    printf("Enter Number : ");
    scanf("%d", &x);

    while(y<=x)
    {
        z = z+y;
        y++;
    }

    printf("The Sum of (1-%d) is = %d", x, z);

return 0;
}