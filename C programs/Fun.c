#include<stdio.h>
int func1(int p){
    scanf("%d",&p);
    return p;
}
int main(){
    int p=0;
    p=func1(p);
    printf("%d",p);
    }