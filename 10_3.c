#include<stdio.h>
int main(){
    int x=1, y=1, z;
    scanf("%d", &z);

    while(x<=z){
        y=y*x;
        x++;
    }
    printf("Total is = %d", y);
}