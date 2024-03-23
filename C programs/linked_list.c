#include<stdio.h> 
#include<stdlib.h>  
struct node* insert(){
    
}
struct node{
    int val;
    struct node *next;
};
int main(){
    struct node *p=NULL;
    p=(struct node *)malloc(sizeof(struct node));
    p->val=12;
    p->next=NULL;
    
    free(p);
}