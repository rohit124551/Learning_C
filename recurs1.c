#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1=fact(n-1);
    int facTN=factNm1*n;
    return facTN;
}
int main(){
    printf("factorial is :%d",fact(4));
    return 0;
}