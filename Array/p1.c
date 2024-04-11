#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter the price of item1:\n");
    scanf("%f", &price[0]);
    printf("Enter the price of item2:\n");
    scanf("%f", &price[1]);
    printf("Enter the price of item3:\n");
    scanf("%f", &price[2]);
    float tot=price[0]+price[1]+price[2];
    float gst=tot*0.18;
    printf("%f",gst);
    return 0;
}