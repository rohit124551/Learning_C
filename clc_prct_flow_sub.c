#include<stdio.h>
int calperc(int sci,int mth,int sans){
     return((sci+mth+sans)/3);
}

int main(){
    int sci=99;
    int mth=87;
    int sans=95;
    printf("percentage is: %d",calperc(sci,mth,sans));
    return 0 ;
}