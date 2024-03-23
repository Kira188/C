#include<stdio.h>
int main(){
    int a=10,c=20;
    int *b=&a;
    int *d=&c;
    *b=c+*d;
    printf("\nhello%d\n",*b);
}