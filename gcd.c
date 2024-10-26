#include<stdio.h>
//gcd using eucledian algrithm
int calculate_gcd(int *p1, int *p2){
    int temp;
    int a=*p1;//derefrences the value stored at the address held by the pointer.
    int b=*p2;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b;
    //user input
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    
    int gcd= calculate_gcd(&a,&b);//calling the fuction with address of a and b
    printf("GCD of two numbers: %d", gcd);
    return 0;
}

/*
OUTPUT: 
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>gcc gcd.c
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>a
Enter two numbers:
48
18
GCD of two numbers: 6*/