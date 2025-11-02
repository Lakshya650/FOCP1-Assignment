#include<stdio.h>

int main(){
    int n1,n2,temp;
    printf("Enter Number1");
    scanf("%d",&n1);
    printf("Enter Number2");
    scanf("%d",&n2);

    printf("The original values A: %d and B: %d\n",n1,n2);

    //Arithmetic SWAP

    void swapwitharithemetic(int n1,int n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    printf("SWAP using Arithemetic, A:%d and B:%d\n",n1,n2);

    void swapwithbitwise(int n1,int n2);
    n1=n1^n2;
    n2=n1^n2;
    n2=n1^n2;

    printf("SWAP using Bitwise, A:%d and B:%d\n",n1,n2);

    void swapwithtemp(int n1,int n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("SWAP using Temporary, A:%d and B:%d\n",n1,n2);

    return 0;
}

