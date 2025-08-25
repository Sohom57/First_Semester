#include<stdio.h>
int main(){
    float Physics, Chemistry, Biology, Mathematics;
    float a, Computer;
    printf("Enter Number of Physics :");
    scanf("%f", &Physics);
    printf("Enter Number of Chemistry :");
    scanf("%f", &Chemistry);
    printf("Enter Number of Biology :");
    scanf("%f", &Biology);
    printf("Enter Number of Mathematics:");
    scanf("%f", &Mathematics);
    printf("Enter Number of Computer:");
    scanf("%f", &Computer);
    a=(Physics+Chemistry+Biology+Mathematics+Computer)/5;
    printf("Persentage: %f%%\t&\n", a);

    if(a>=90){
        printf("Grade A");
    }
    else if(a>=80){
        printf("Grade B");
    }
    else if(a>=70){
        printf("Grade C");
    }
    else if(a>=60){
        printf("Grade D");
    }
    else if(a>=50){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }

    return 0;
}



