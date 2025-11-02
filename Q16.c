#include<stdio.h>

int main(){
    int i,n,pos,choice,value,num;

    printf("enter size of array");
    scanf("%d",&n);
    
    int A[100];
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Array before insertion");
    for(i=0;i<n;i++){
        printf("%d",A[i]);
    }

    printf("Choose One Insertion point from Below:\n");
    printf("1.Front\n");
    printf("2.Mid\n");
    printf("3.End\n");
    printf("enter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            pos=0;
            break;
        case 2:
            pos=n/2;
            break;
        case 3:
            pos=n;
            break;
        default:
            printf("invalid");
    }   

    printf("enter element to insert:");
    scanf("%d",&num);

    for(i=n;i>=pos;i--){
        A[i]=A[i-1];
    }
    A[pos]=num;
    n++;

    printf("array after insertion:");
    for(i=0;i<n;i++){
        printf("%d",A[i]);
    }
    printf("\n");
    return 0;
}