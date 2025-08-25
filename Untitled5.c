#include<stdio.h>
int main(){
    int m;
    printf("Please Enter Month Number:");
    scanf("%d", &m);

    if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)){
        printf("Total Number of Days=31");
    }
     if(m==2){
        printf("Total Number of Days=28");
    }
    if(m<1||m>12){
        printf("Invalid!");
    }
    else{
        printf("Total Number of Days=30");
    }

    return 0;
}
