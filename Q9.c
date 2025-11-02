#include<stdio.h>

int main(){
    int i,n;
    printf("Enter no. of elements");
    scanf("%d",&n);

    int A[n];
    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++){
        if(A[i]==99){
            printf("99 found at position %d\n",i+1);
            return 0;
        }
    }
    printf("No 99 is found");
    return 0;
    }