#include<stdio.h>
int main(){

    int p,q;
    scanf("%d%d", &p, &q);

    if(p>q){
        printf("Maximum value is= %d\n\n", p);
    }
    if(p<q){
        printf("Minimum value is= %d\n\n", p);
    }
    if(q>p){
        printf("Maximum value is= %d\n\n", q);
    }
    if(q<p){
        printf("Minimum value is= %d", q);
    }

    return 0;
    }
