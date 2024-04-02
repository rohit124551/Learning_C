#include <stdio.h>
int main(){
    int day;
    printf("print day(1-7):");
    scanf("%d",&day);
    switch (day)
    {
    case 1 : printf("day1 \n");
        break;
    case 2 : printf("day2 \n");
        break;
    case 3 : printf("day3 \n");
        break;
    case 4 : printf("day4 \n");
        break;
    case 5 : printf("day5  \n");
        break;
    
    default: printf("not valid day \n");
        break;
    }
    
    return 0;
}