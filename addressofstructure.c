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
    //& is used to print the address to which the pointer is pointing.
    //%p is used to print what address is stored in the pointer 
return 0;
}

/*
C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>gcc addressofstructure.c

C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>a
Address of S1: 0061FF00
Address of S2: 0061FEE0
Address of S3: 0061FEC0
*/