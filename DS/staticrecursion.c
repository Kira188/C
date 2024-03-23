#include<stdio.h>
void recursion(int n){
    if(n>0){
        printf("%d ",n);
        recursion(n-1);
        recursion(n-1);
    }
    return;
}
int main(){
recursion(5);
}