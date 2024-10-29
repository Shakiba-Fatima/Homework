#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the number of digits you want to enter: ");
scanf("%d", &n);
int *ptr;
ptr=(int*)malloc(n*sizeof(int));
for(int i=0; i<n; i++){
scanf("%d", &ptr[i]);
}
printf("Original Input: ");
for(int i=0; i<n; i++){
printf("%d", ptr[i]);
}
printf("\n0's in input replaced by 1: ");
for(int i=0; i<n; i++){
	if(ptr[i]==0){
		ptr[i]=1;
		printf("%d", ptr[i]);
	}
	else{
		printf("%d", ptr[i]);
	}
}

return 0;
}
/*
Enter the number of digits you want to enter: 4
9
0
0
0
Original Input: 9000
0's in input replaced by 1: 9111*/