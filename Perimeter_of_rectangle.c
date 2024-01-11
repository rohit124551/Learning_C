#include<stdio.h>
int main(){
    float l,b,perimeter;
    printf("enter value of a:");
    scanf("%f",&l);
    
    printf("Enter value of b:");
    scanf("%f",&b);
    perimeter=2*(l+b);
    printf("The perimeter of given l and b is %f",perimeter);

    return 0;
}
