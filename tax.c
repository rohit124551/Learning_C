#include<stdio.h>
void calcitax(float a){
    a=a+(0.18*a);
    printf("final product value is:%f",a);
}
int main(){
    float p;
    printf("Enter product price: ");
    scanf("%f",&p);
    calcitax(p);
    return 0;
}