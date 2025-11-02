#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a Number");
    scanf("%d",&n);

    int sum=0,digit,temp;
    temp=n;
    while(temp>0){
        digit=temp%10;
        sum=sum+digit*digit*digit;
        temp=temp/10;
    }
    if(sum==n){
        printf("Number is an Armstrong Number\n");
    }
    else{
        printf("Not an Armstrong\n");
    }
    return 0;
}