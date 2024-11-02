#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("Elements in sorted order: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(ptr[j]>ptr[j+1]){
                int temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;           
                 }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d", ptr[i]);
    }
    return 0;
}
/*
Enter the number of elements you want to enter: 5
Enter the elements: 9 4 5 3 6 2
Elements in sorted order:
34569
*/