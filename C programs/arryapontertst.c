#include<stdio.h>
void fun(int *p){
    printf("%d\n",p[1]);
}
int main()
{
    int A[6]={1,2,3,4,5,6};
    fun(&A[0]);
    printf("%d",*A);
}