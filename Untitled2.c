#include <stdio.h>

int main() {
	int N, X, Y, T;
	printf("Enter Number of Pages : ");
	scanf("%d", &N);
	printf("Maximum readable pages in a day  : ");
	scanf("%d", &X);
	printf("Enter Number of Days : ");
	scanf("%d", &Y);

    if(X*Y>=N){
        printf("Yes");
    }
    else{
        printf("No");
    }
	return 0;
}


