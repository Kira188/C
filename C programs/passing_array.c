#include<stdio.h>
void catch(int *a){
    a++;
    printf("%d",*a);
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    catch(&a[5]);

}