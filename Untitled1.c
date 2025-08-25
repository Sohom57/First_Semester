#include<stdio.h>
int main(){
    int x, y, c, d, r, p;
    printf("Enter the center coordinates:\n");
    scanf("%d%d", &x, &y);
    printf("Enter the radius:\n");
    scanf("%d", &r);
    printf("Enter the desired coordinates:\n");
    scanf("%d%d", &c, &d);
    p=sqrt((x-c)*(x-c)+(y-d)*(y-d));

    if(p<r){
        printf(" yes");
    }
    else{
        printf("no");
    }

    return 0;
}
