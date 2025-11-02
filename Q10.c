#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("enter no. of students");
    scanf("%d",&n);

    int marks[n];
    printf("enter marks of students");
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    printf("Students who scored 99 are at positions: \n");
    for(i=0;i<n;i++){
        if(marks[i] == 99){
            printf("%d ",i+1);
            count++;
        }
    }
    if(count==0){
        printf("No students scored 99\n");
    }
    else{
        printf("No. of Students who scored 99: %d",count);
    }


    return 0;
}
