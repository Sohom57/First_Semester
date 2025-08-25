#include<stdio.h>
int main(){
    int s,x=1,y=0;
    scanf("%d", &s);

    while(x<=s){
        y=y+x;
        x++;
    }
    printf("Total is = %d", y);
}