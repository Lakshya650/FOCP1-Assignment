#include<stdio.h>

int main(){
    int x,y;

        printf("Enter X Coordinate");
        scanf("%d",&x);
        printf("Enter Y Coordinate");
        scanf("%d",&y);

        if(x==0 && y==0){
            printf("The Point lies on Origin");
        }
        else if (x>0 && y==0){
            printf("The Point lies on X axis");
        }
        else if(x==0 && y>0){
            printf("The Point lies on Y axis");
        }
        else if(x>0 && y>0){
            printf("The Point lies in 1st Quadrant");
        }
        else if(x<0 && y>0){
            printf("The Point lies in 2nd Quadrant");
        }
        else if(x<0 && y<0){
            printf("The Point lies in 3rd Quadrant");
        }
        else if(x>0 && y<0){
            printf("The Point lies in 4th Quadrant");
        }
        return 0;
}