// C program for implementation of selection sort
#include<stdio.h>

void change(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    change(&a[5],&a[7]);
    int i;
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }

 }