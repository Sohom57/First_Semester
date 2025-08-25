#include<stdio.h>
int main()
{
    int v,s=30, c=1;
    scanf("%d",&v);
    while(s!=v)
    {
        printf("You lose!!!\nTry again\n");
        scanf("%d",&v);
        c++;
    }
    printf("You win");
    return 0;
}
