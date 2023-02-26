#include<stdio.h>
int main(){
    int *ptr;
    int sample=20;
    ptr=&sample;
    printf("%u",*ptr);
    //printf("%u",ptr);
    return 0;
}