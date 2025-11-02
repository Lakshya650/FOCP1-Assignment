#include<stdio.h>
int main(){
    int i,n,j,count,found=0;
    int A[100];
    
    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter Elements");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Duplicate Element(s)");
    for(i=0;i<n;i++){
        count=1;

        if(A[i]==-1)
           continue;

        for(j=i+1;j<n;j++){
            if(A[i]==A[j]){
                count++;
                A[j]=-1;

            }
        }
        if(count>1){
            printf("%d",A[i]);
            found=1;
        }
    }
     if(!found)
        printf("-1");
        
      printf("\n");
    
        return 0;
}
