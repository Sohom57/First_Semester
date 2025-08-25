#include<stdio.h>
int main(){
    char l;
    scanf("%c", &l);
    if((l>='a' && l<='z') || (l>='A' && l<='Z')){
        printf("'%c' is alphabet", l);
    }
    else if(l>='0' && l<='9'){
        printf("'%c' is digit", l);
    }
    else{
        printf("'%c' is special character", l);
    }
    return 0;
}
