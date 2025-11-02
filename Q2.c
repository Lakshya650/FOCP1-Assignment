#include<stdio.h>

int main(){
    int n1,n2,temp;
    printf("Enter Number1");
    scanf("%d",&n1);
    printf("Enter Number2");
    scanf("%d",&n2);

    if(n1>n2){
    temp=n1;
    n1=n2;
    n2=temp;
    }
    while(temp>0){
        temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    printf("The HCF is %d",n1);

}
return 0;
}