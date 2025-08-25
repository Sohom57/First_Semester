#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int count = 0;

    printf("Enter any number: ");
    scanf("%d", &a);


    count=(a==0)?1:(log10(a)+1);

    printf("Total digits: %d", count);

    return 0;
}
