#include<stdio.h>
int main(){
    int i,n,pos,choice,value;

    printf("Enter Size of array:");
    scanf("%d",&n);

    int A[n];
    printf("Enter Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Array before insertion:\n");
    for(i=0;i<n;i++){
        printf("%d",A[i]);
    }

    printf("Choose one position from below for deletion\n");
    printf("1.Front\n");
    printf("2.Mid\n");
    printf("3.End\n");
    printf("Enter Choice:");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        pos=0;
        break;
        case 2:
        pos=n/2;
        break;
        case 3:
        pos=n-1;
        break;
        default:
        printf("Invalid\n");
    }
    for (i = pos; i < n - 1; i++) {
        A[i] = A[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");


    return 0;
}
