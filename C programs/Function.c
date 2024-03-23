#include<stdio.h>
int fun2(){
    int a;
    a=2000;
    return a;
}
int fun1(){
    int a=1000;
    a=fun2();
    printf("%d",a);
    return 0;
}
int main(){
    fun1();
}