#include<stdio.h>
void func();
int main(){
    func();
    func();
}
void func(){
    static int a=0;
    a=a+10;
    printf("%d ",a);
}