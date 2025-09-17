#include<stdio.h>

void main(){

    int a = 1;

    switch(a / 2){

        case NULL:
            printf("Case NULL \n");
            break;

        case 0:
            printf("Case ZERO \n");
            break;

        default:
            printf("DEFAULT \n");
            break;
    }
}