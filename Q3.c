#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter Number1");
    scanf("%d",&n1);
    printf("Enter Number2");
    scanf("%d",&n2);

    int answer=(n1+(~n2+1));

    printf("The Answer of %d - %d is %d",n1,n2,answer);
}
return 0;
}