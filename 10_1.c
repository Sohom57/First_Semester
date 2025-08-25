#include<stdio.h>
int main(){
    int v, s=70, c=1;
    while(s!=v && c<=3)
    {
        scanf("%d", &v);
        c++;
    }
    if(v!=s){
    printf("You Loose\n");
    }

    else{
        printf("You WIN!!!");
    }    
return 0;
}