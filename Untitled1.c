#include<stdio.h>
int main(){

    char v;
    scanf("%c", &v);

    if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'){
        printf("%c is a Vowel", v);
    }
     if(v=='A'||v=='E'||v=='I'||v=='O'||v=='U'){
        printf("%c is a Vowel", v);
    }

    else{
        printf("%c is a Consonant", v);
    }

    return 0;
}
