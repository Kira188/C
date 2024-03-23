#include<stdio.h>
#include<stdlib.h>
struct Que{
    int size;
    int F;
    int R;
    int *Q;
};
void create(struct Que *q,int size){
    q->size=size;
    q->F=q->R=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct Que *q,int data){
    if(q->R==q->size-1){
        printf("queue is full");
    }
    else{
        q->R++;
        q->Q[q->R]=data;
    }
}
int dequeue(struct Que *q){
    int x=-1;
    if(q->F==q->R){
        printf("queue is empty");
    }
    else{
        q->F++;
        x=q->Q[q->F];
    }
    return x;
}
void Display(struct Que *q)
{
    for(int i=q->F+1;i<=q->R;i++){
        printf("%d ",q->Q[i]);
    }
    printf("\n");
}
int main(){
    struct Que q;
    create(&q,3);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    
    Display(&q);
    printf("%d",dequeue(&q));
    Display(&q);
    return 0;
}