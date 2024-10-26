#include<stdio.h>
#include<string.h>
struct student {//'struct student'->data type of variables s1,s2,s3 each of which contains the following attributes of different data types.
	int roll;
	float cgpa;
	char name[20];
	};
int main(){
	//initialising the variables
    struct student s1={24,89.99,"shakiba"};
	struct student s2={23,96.99,"shuba"};
	struct student s3={42,98.99,"sai"};
    printf("STUDENT 1\nName: %s\nRoll No: %d\nCGPA %.2f\n",s1.name,s1.roll,s1.cgpa);
    printf("Size of Student 1: %zu\n", sizeof(s1));
	printf("\n");
	printf("STUDENT 2\nName: %s\nRoll No: %d\nCGPA %.2f\n",s2.name,s2.roll,s2.cgpa);
    printf("Size of Student 2: %zu\n", sizeof(s2));
	printf("\n");
	printf("STUDENT 3\nName: %s\nRoll No: %d\nCGPA %.2f\n",s3.name,s3.roll,s3.cgpa);
    printf("Size of Student 3: %zu", sizeof(s3));
	//%zu->format specifier for printing the result of sizeof()
return 0;
}

/*C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>gcc sizeofstructure.c

C:\Users\Administrator\Desktop\GITDEMO\ppwc-practice>a
STUDENT 1
Name: shakiba
Roll No: 24
CGPA 89.98
Size of Student 1: 28

STUDENT 2
Name: shuba
Roll No: 23
CGPA 96.98
Size of Student 2: 28

STUDENT 3
Name: sai
Roll No: 42
CGPA 98.98
Size of Student 3: 28 */

