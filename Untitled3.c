#include<stdio.h>
int main(){

    char v;
    scanf("%c", &v);

    if(v>=65&&v<=90){
        printf("'%c' is Uppercase", v);
    }
     if(v>=97&&v<=122){
        printf("'%c' is Lowercase", v);
    }

    return 0;
}

