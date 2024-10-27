#include <stdio.h>
#include <math.h>
int main() {
    int n,i,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=1){
        printf("%d is not a prime number\n",n);
        return 0;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            p=0;
            break;
        }
    }
    if (p)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    return 0;
}


/*
OUTPUT:
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>gcc prime_no.c
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>a
Enter a number: 21
21 is not a prime number
*/