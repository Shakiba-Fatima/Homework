#include<stdio.h>
struct student {
    char name[20];
    int rn;//roll number
    float cgpa;
};
int main(){
    struct student s1={"shakiba,24,89.99"};
    struct student *p1= &s1;
    struct student s2={"subha",23,96.99};
    struct student *p2= &s2;
	struct student s3={"sai",42,98.99,};
    struct student *p3= &s3;
    printf("Address of S1: %p\n", p1);
    printf("Address of S2: %p\n", p2);
    printf("Address of S3: %p\n", p3);
   /*'p1' gives us the address where the variable s1 is stored or what is the value stored in p1, 
    But if we write '&p1' instead of 'p1' then it will give us the address where the pointer is stored. 
    %p format specifier 
    we can see the outputs below are different for 'p1' and '&p1' which explains the above statements */
return 0;
}

/*
OUTPUT:
 
o/p if we write 'p1' in print statement
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>gcc addressofstructure.c
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>a
Address of S1: 0061FEF8
Address of S2: 0061FEDC
Address of S3: 0061FEC0

o/p if we write '&p1' in print statement
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>gcc addressofstructure.c
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>a
Address of S1: 0061FF00
Address of S2: 0061FEE0
Address of S3: 0061FEC0

*/
