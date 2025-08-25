#include<stdio.h>
int main(){
    int n, prime=1, i;
    scanf("%d", &n);
    for(i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
        if(prime==0 && n!=2){
            printf("This is not a prime number");
        }
        else{
            printf("This is a Prime Number");
        }
        return 0;
}
