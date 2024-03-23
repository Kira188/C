#include<stdio.h>
int add(int ass,int hole){
    int c;
    c=ass+hole;
    return c;
}
int main(){
    int a=5,b=10,ans;
    ans=add(a,b);
    printf("\n%d",ans);
}