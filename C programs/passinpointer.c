#include<stdio.h>
int ** point(int **b){
    printf("%d\n",**b);
    return b;
}
int main(){
    int b=100;
    int *a,**c;
    a=&b;
    c=point(&a);
    b=b-50;
    printf("%d",**c);
}