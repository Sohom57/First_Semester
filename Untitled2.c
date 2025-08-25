#include<stdio.h>
int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    if(x>y && x>z){
        printf("The maximun value:%d\n\n", x);
    }
    if(y>x && y>z){
        printf("The maximun value:%d\n\n", y);
    }
    if(z>y && z>x){
        printf("The maximun value:%d", z);
    }

    return 0;}
